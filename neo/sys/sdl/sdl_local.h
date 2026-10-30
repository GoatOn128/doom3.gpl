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

In addition, the Doom 3 Source Code is also subject to certain additional terms.  You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing to id Software LLC, c/o ZeniMax Media Inc., Suite 1200, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __SDL_LOCAL_H__
#define __SDL_LOCAL_H__

// the unified SDL platform replaces the window, GL context, input and
// main loop code of the old platform folders
#include <SDL3/SDL.h>

#include "../sys_local.h"
#include "../posix/posix_public.h"

// the shared renderer configuration, filled by the GLimp code
extern glconfig_t glConfig;

// the SDL window and GL context live here so the event pump and the
// renderer can reach them
extern SDL_Window *sdl_window;
extern SDL_GLContext sdl_glContext;

// queue a system event, the SDL platform version of Posix_QueEvent
void Sys_QueEvent( sysEventType_t type, int value, int value2, int ptrLength, void *ptr );

// the generated dlopen code binds the qgl pointers, same as the old
// linux platform
#ifndef ID_GL_HARDLINK
bool GLimp_dlopen();
void GLimp_dlclose();
#endif

#endif /* !__SDL_LOCAL_H__ */
