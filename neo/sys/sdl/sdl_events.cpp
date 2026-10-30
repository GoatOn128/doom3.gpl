/*

Doom 3 GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 GPL Source Code (?Doom 3 Source Code?).

Doom 3 Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing to id Software LLC, c/o ZeniMax Media Inc., Suite 1200, Rockville, Maryland 20850 USA.

===========================================================================
*/

// the SDL event pump replaces the X11 event loop of the old linux
// input.cpp, the polled event queues of sys/posix stay untouched
#include "../../idlib/precompiled.h"
#include "sdl_local.h"

idCVar in_mouse( "in_mouse", "1", CVAR_SYSTEM | CVAR_ARCHIVE, "" );
idCVar in_nograb( "in_nograb", "0", CVAR_SYSTEM | CVAR_NOCHEAT, "" );

// toggled by the grab calls - decides if motion events are forwarded
static bool mouse_active = false;

// SDL scancode to doom key table, filled once
static byte s_scantokey[SDL_NUM_SCANCODES];

typedef struct {
	SDL_Scancode	scancode;
	int				key;
} scancodeKey_t;

static const scancodeKey_t s_scancodeKeys[] = {
	// letters are passed as lowercased ascii
	{ SDL_SCANCODE_A, 'a' }, { SDL_SCANCODE_B, 'b' }, { SDL_SCANCODE_C, 'c' },
	{ SDL_SCANCODE_D, 'd' }, { SDL_SCANCODE_E, 'e' }, { SDL_SCANCODE_F, 'f' },
	{ SDL_SCANCODE_G, 'g' }, { SDL_SCANCODE_H, 'h' }, { SDL_SCANCODE_I, 'i' },
	{ SDL_SCANCODE_J, 'j' }, { SDL_SCANCODE_K, 'k' }, { SDL_SCANCODE_L, 'l' },
	{ SDL_SCANCODE_M, 'm' }, { SDL_SCANCODE_N, 'n' }, { SDL_SCANCODE_O, 'o' },
	{ SDL_SCANCODE_P, 'p' }, { SDL_SCANCODE_Q, 'q' }, { SDL_SCANCODE_R, 'r' },
	{ SDL_SCANCODE_S, 's' }, { SDL_SCANCODE_T, 't' }, { SDL_SCANCODE_U, 'u' },
	{ SDL_SCANCODE_V, 'v' }, { SDL_SCANCODE_W, 'w' }, { SDL_SCANCODE_X, 'x' },
	{ SDL_SCANCODE_Y, 'y' }, { SDL_SCANCODE_Z, 'z' },
	// digits
	{ SDL_SCANCODE_1, '1' }, { SDL_SCANCODE_2, '2' }, { SDL_SCANCODE_3, '3' },
	{ SDL_SCANCODE_4, '4' }, { SDL_SCANCODE_5, '5' }, { SDL_SCANCODE_6, '6' },
	{ SDL_SCANCODE_7, '7' }, { SDL_SCANCODE_8, '8' }, { SDL_SCANCODE_9, '9' },
	{ SDL_SCANCODE_0, '0' },
	// punctuation
	{ SDL_SCANCODE_MINUS, '-' },
	{ SDL_SCANCODE_EQUALS, '=' },
	{ SDL_SCANCODE_LEFTBRACKET, '[' },
	{ SDL_SCANCODE_RIGHTBRACKET, ']' },
	{ SDL_SCANCODE_BACKSLASH, '\\' },
	{ SDL_SCANCODE_SEMICOLON, ';' },
	{ SDL_SCANCODE_APOSTROPHE, '\'' },
	{ SDL_SCANCODE_GRAVE, '`' },
	{ SDL_SCANCODE_COMMA, ',' },
	{ SDL_SCANCODE_PERIOD, '.' },
	{ SDL_SCANCODE_SLASH, '/' },
	{ SDL_SCANCODE_SPACE, K_SPACE },
	// control keys
	{ SDL_SCANCODE_RETURN, K_ENTER },
	{ SDL_SCANCODE_ESCAPE, K_ESCAPE },
	{ SDL_SCANCODE_BACKSPACE, K_BACKSPACE },
	{ SDL_SCANCODE_TAB, K_TAB },
	{ SDL_SCANCODE_CAPSLOCK, K_CAPSLOCK },
	{ SDL_SCANCODE_SCROLLLOCK, K_SCROLL },
	{ SDL_SCANCODE_PAUSE, K_PAUSE },
	{ SDL_SCANCODE_PRINTSCREEN, K_PRINT_SCR },
	{ SDL_SCANCODE_INSERT, K_INS },
	{ SDL_SCANCODE_DELETE, K_DEL },
	{ SDL_SCANCODE_HOME, K_HOME },
	{ SDL_SCANCODE_END, K_END },
	{ SDL_SCANCODE_PAGEUP, K_PGUP },
	{ SDL_SCANCODE_PAGEDOWN, K_PGDN },
	// arrows
	{ SDL_SCANCODE_UP, K_UPARROW },
	{ SDL_SCANCODE_DOWN, K_DOWNARROW },
	{ SDL_SCANCODE_LEFT, K_LEFTARROW },
	{ SDL_SCANCODE_RIGHT, K_RIGHTARROW },
	// function keys
	{ SDL_SCANCODE_F1, K_F1 }, { SDL_SCANCODE_F2, K_F2 },
	{ SDL_SCANCODE_F3, K_F3 }, { SDL_SCANCODE_F4, K_F4 },
	{ SDL_SCANCODE_F5, K_F5 }, { SDL_SCANCODE_F6, K_F6 },
	{ SDL_SCANCODE_F7, K_F7 }, { SDL_SCANCODE_F8, K_F8 },
	{ SDL_SCANCODE_F9, K_F9 }, { SDL_SCANCODE_F10, K_F10 },
	{ SDL_SCANCODE_F11, K_F11 }, { SDL_SCANCODE_F12, K_F12 },
	// keypad
	{ SDL_SCANCODE_NUMLOCKCLEAR, K_KP_NUMLOCK },
	{ SDL_SCANCODE_KP_DIVIDE, K_KP_SLASH },
	{ SDL_SCANCODE_KP_MULTIPLY, K_KP_STAR },
	{ SDL_SCANCODE_KP_MINUS, K_KP_MINUS },
	{ SDL_SCANCODE_KP_PLUS, K_KP_PLUS },
	{ SDL_SCANCODE_KP_ENTER, K_KP_ENTER },
	{ SDL_SCANCODE_KP_1, K_KP_END },
	{ SDL_SCANCODE_KP_2, K_KP_DOWNARROW },
	{ SDL_SCANCODE_KP_3, K_KP_PGDN },
	{ SDL_SCANCODE_KP_4, K_KP_LEFTARROW },
	{ SDL_SCANCODE_KP_5, K_KP_5 },
	{ SDL_SCANCODE_KP_6, K_KP_RIGHTARROW },
	{ SDL_SCANCODE_KP_7, K_KP_HOME },
	{ SDL_SCANCODE_KP_8, K_KP_UPARROW },
	{ SDL_SCANCODE_KP_9, K_KP_PGUP },
	{ SDL_SCANCODE_KP_0, K_KP_INS },
	{ SDL_SCANCODE_KP_PERIOD, K_KP_DEL },
	// modifiers, both sides map to the same doom key like the old linux table
	{ SDL_SCANCODE_LCTRL, K_CTRL }, { SDL_SCANCODE_RCTRL, K_CTRL },
	{ SDL_SCANCODE_LSHIFT, K_SHIFT }, { SDL_SCANCODE_RSHIFT, K_SHIFT },
	{ SDL_SCANCODE_LALT, K_ALT }, { SDL_SCANCODE_RALT, K_ALT },
	{ SDL_SCANCODE_LGUI, K_LWIN }, { SDL_SCANCODE_RGUI, K_RWIN },
	{ SDL_SCANCODE_MENU, K_MENU }
};

/*
=================
Sys_InitScanTable
the SDL scancode table is the scan table now
=================
*/
void Sys_InitScanTable( void ) {
	Sys_SDLInitKeyTable();
}

/*
=================
IN_Clear_f
=================
*/
void IN_Clear_f( const idCmdArgs &args ) {
	idKeyInput::ClearStates();
}

/*
=================
Sys_SDLInitKeyTable
fill the scancode table once
=================
*/
static void Sys_SDLInitKeyTable( void ) {
	static bool initialized = false;
	if ( initialized ) {
		return;
	}
	memset( s_scantokey, 0, sizeof( s_scantokey ) );
	for ( unsigned int i = 0; i < sizeof( s_scancodeKeys ) / sizeof( s_scancodeKeys[ 0 ] ); i++ ) {
		s_scantokey[ s_scancodeKeys[ i ].scancode ] = s_scancodeKeys[ i ].key;
	}
	initialized = true;
}

/*
=================
Sys_InitInput
=================
*/
void Sys_InitInput( void ) {
	common->Printf( "\n------- Input Initialization -------\n" );
	Sys_SDLInitKeyTable();
	if ( !in_mouse.GetBool() ) {
		common->Printf( "mouse input disabled\n" );
	}
	// the SDL text events carry the localized character of a key press
	if ( sdl_window ) {
		SDL_StartTextInput( sdl_window );
	}
	cmdSystem->AddCommand( "in_clear", IN_Clear_f, CMD_FL_SYSTEM, "reset the input keys" );
	common->Printf( "------------------------------------\n" );
}

/*
=================
Sys_GrabMouseCursor
=================
*/
void Sys_GrabMouseCursor( bool grabIt ) {
#if defined( ID_DEDICATED )
	return;
#endif

	if ( !sdl_window ) {
		return;
	}
	if ( !in_mouse.GetBool() ) {
		return;
	}

	if ( glConfig.isFullscreen ) {
		if ( !grabIt ) {
			return; // never ungrab while fullscreen
		}
		if ( in_nograb.GetBool() ) {
			common->DPrintf( "forcing in_nograb 0 while running fullscreen\n" );
			in_nograb.SetBool( false );
		}
	}

	if ( in_nograb.GetBool() ) {
		mouse_active = grabIt;
		return;
	}

	if ( grabIt && !mouse_active ) {
		SDL_SetWindowRelativeMouseMode( sdl_window, true );
		SDL_HideCursor();
		mouse_active = true;
	} else if ( !grabIt && mouse_active ) {
		SDL_SetWindowRelativeMouseMode( sdl_window, false );
		SDL_ShowCursor();
		mouse_active = false;
	}
}

/*
==========================
Sys_SDLMouseButton
returns the doom key for the SDL button, -1 when unsupported
==========================
*/
static int Sys_SDLMouseButton( int button ) {
	// the X11 input code kept the doom3 button order: left, right, middle
	switch ( button ) {
	case SDL_BUTTON_LEFT:
		return K_MOUSE1;
	case SDL_BUTTON_RIGHT:
		return K_MOUSE2;
	case SDL_BUTTON_MIDDLE:
		return K_MOUSE3;
	case SDL_BUTTON_X1:
		return K_MOUSE4;
	case SDL_BUTTON_X2:
		return K_MOUSE5;
	default:
		common->DPrintf( "mouse button %d not supported\n", button );
		return -1;
	}
}

/*
==========================
Posix_PollInput
SDL event pump, called from Sys_PollMouseInputEvents each frame
==========================
*/
void Posix_PollInput( void ) {
	SDL_Event event;
	int key, b;

	if ( !sdl_window ) {
		return;
	}

	SDL_PumpEvents();
	while ( SDL_PollEvent( &event ) ) {
		switch ( event.type ) {
		case SDL_EVENT_KEY_DOWN:
			if ( event.key.repeat ) {
				continue;
			}
			key = s_scantokey[ event.key.scancode ];
			if ( !key ) {
				break;
			}
			Sys_QueEvent( SE_KEY, key, true, 0, NULL );
			if ( !Posix_AddKeyboardPollEvent( key, true ) ) {
				return;
			}
			break;

		case SDL_EVENT_KEY_UP:
			key = s_scantokey[ event.key.scancode ];
			if ( !key ) {
				break;
			}
			Sys_QueEvent( SE_KEY, key, false, 0, NULL );
			if ( !Posix_AddKeyboardPollEvent( key, false ) ) {
				return;
			}
			break;

		case SDL_EVENT_TEXT_INPUT:
			// the first byte is what the old XLookupString produced, the
			// engine has no use for the extra UTF-8 bytes
			Sys_QueEvent( SE_CHAR, event.text.text[ 0 ], 0, 0, NULL );
			break;

		case SDL_EVENT_MOUSE_BUTTON_DOWN:
			b = Sys_SDLMouseButton( event.button.button ) - K_MOUSE1;
			if ( b < 0 || b > 4 ) {
				break;
			}
			Sys_QueEvent( SE_KEY, K_MOUSE1 + b, true, 0, NULL );
			if ( !Posix_AddMousePollEvent( M_ACTION1 + b, true ) ) {
				return;
			}
			break;

		case SDL_EVENT_MOUSE_BUTTON_UP:
			b = Sys_SDLMouseButton( event.button.button ) - K_MOUSE1;
			if ( b < 0 || b > 4 ) {
				break;
			}
			Sys_QueEvent( SE_KEY, K_MOUSE1 + b, false, 0, NULL );
			if ( !Posix_AddMousePollEvent( M_ACTION1 + b, false ) ) {
				return;
			}
			break;

		case SDL_EVENT_MOUSE_WHEEL:
			if ( event.wheel.y > 0 ) {
				Sys_QueEvent( SE_KEY, K_MWHEELUP, true, 0, NULL );
				Sys_QueEvent( SE_KEY, K_MWHEELUP, false, 0, NULL );
				if ( !Posix_AddMousePollEvent( M_DELTAZ, 1 ) ) {
					return;
				}
			} else if ( event.wheel.y < 0 ) {
				Sys_QueEvent( SE_KEY, K_MWHEELDOWN, true, 0, NULL );
				Sys_QueEvent( SE_KEY, K_MWHEELDOWN, false, 0, NULL );
				if ( !Posix_AddMousePollEvent( M_DELTAZ, -1 ) ) {
					return;
				}
			}
			break;

		case SDL_EVENT_MOUSE_MOTION:
			if ( !mouse_active ) {
				break;
			}
			Sys_QueEvent( SE_MOUSE, ( int )event.motion.xrel, ( int )event.motion.yrel, 0, NULL );
			// if we overflow here, we'll get a warning, but the delta will be completely processed anyway
			Posix_AddMousePollEvent( M_DELTAX, ( int )event.motion.xrel );
			if ( !Posix_AddMousePollEvent( M_DELTAY, ( int )event.motion.yrel ) ) {
				return;
			}
			break;

		case SDL_EVENT_QUIT:
			cmdSystem->BufferCommandText( CMD_EXEC_APPEND, "quit\n" );
			break;

		default:
			break;
		}
	}
}

/*
=================
Sys_ShutdownInput
=================
*/
void Sys_ShutdownInput( void ) { }

/*
===============
Sys_MapCharForKey
===============
*/
unsigned char Sys_MapCharForKey( int key ) {
	// the localized character arrives through the SDL text input events,
	// the bind system only needs the ascii fallback here
	return (unsigned char)key;
}
