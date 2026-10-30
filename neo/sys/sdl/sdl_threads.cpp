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

// the SDL threading primitives replace the pthread code of the old posix
// platform, the win32 style signal semantics of the events are kept
#include "../../idlib/precompiled.h"
#include "sdl_local.h"

/*
======================================================
locks
======================================================
*/

// we use an extra lock for the local stuff
const int MAX_LOCAL_CRITICAL_SECTIONS = MAX_CRITICAL_SECTIONS + 1;
static SDL_Mutex *global_lock[ MAX_LOCAL_CRITICAL_SECTIONS ];

/*
==================
Sys_EnterCriticalSection
==================
*/
void Sys_EnterCriticalSection( int index ) {
	assert( index >= 0 && index < MAX_LOCAL_CRITICAL_SECTIONS );
	SDL_LockMutex( global_lock[ index ] );
}

/*
==================
Sys_LeaveCriticalSection
==================
*/
void Sys_LeaveCriticalSection( int index ) {
	assert( index >= 0 && index < MAX_LOCAL_CRITICAL_SECTIONS );
	SDL_UnlockMutex( global_lock[ index ] );
}

/*
======================================================
wait and trigger events
we use a single lock to manipulate the conditions, MAX_LOCAL_CRITICAL_SECTIONS-1

the semantics match the win32 version. signals raised while no one is waiting stay raised until a wait happens (which then does a simple pass-through)

NOTE: we use the same mutex for all the events. I don't think this would become much of a problem
SDL_CondWait unlocks atomically with the wait, and locks it back before exiting the function
======================================================
*/

static SDL_Cond *event_cond[ MAX_TRIGGER_EVENTS ];
static bool signaled[ MAX_TRIGGER_EVENTS ];
static bool waiting[ MAX_TRIGGER_EVENTS ];

/*
==================
Sys_WaitForEvent
==================
*/
void Sys_WaitForEvent( int index ) {
	assert( index >= 0 && index < MAX_TRIGGER_EVENTS );
	Sys_EnterCriticalSection( MAX_LOCAL_CRITICAL_SECTIONS - 1 );
	assert( !waiting[ index ] );	// WaitForEvent from multiple threads? that wouldn't be good
	if ( signaled[ index ] ) {
		// emulate windows behaviour: signal has been raised already. clear and keep going
		signaled[ index ] = false;
	} else {
		waiting[ index ] = true;
		SDL_CondWait( event_cond[ index ], global_lock[ MAX_LOCAL_CRITICAL_SECTIONS - 1 ] );
		waiting[ index ] = false;
	}
	Sys_LeaveCriticalSection( MAX_LOCAL_CRITICAL_SECTIONS - 1 );
}

/*
==================
Sys_TriggerEvent
==================
*/
void Sys_TriggerEvent( int index ) {
	assert( index >= 0 && index < MAX_TRIGGER_EVENTS );
	Sys_EnterCriticalSection( MAX_LOCAL_CRITICAL_SECTIONS - 1 );
	if ( waiting[ index ] ) {
		SDL_CondSignal( event_cond[ index ] );
	} else {
		// emulate windows behaviour: if no thread is waiting, leave the signal on so next wait keeps going
		signaled[ index ] = true;
	}
	Sys_LeaveCriticalSection( MAX_LOCAL_CRITICAL_SECTIONS - 1 );
}

/*
======================================================
thread create and destroy
======================================================
*/

// not a hard limit, just what we keep track of for debugging
#define MAX_THREADS 10
xthreadInfo *g_threads[ MAX_THREADS ];

int g_thread_count = 0;

/*
==================
Sys_CreateThread
==================
*/
void Sys_CreateThread( xthread_t function, void *parms, xthreadPriority priority, xthreadInfo &info, const char *name, xthreadInfo *threads[ MAX_THREADS ], int *thread_count ) {
	SDL_Thread *thread;

	Sys_EnterCriticalSection( );
	thread = SDL_CreateThread( (SDL_ThreadFunction)function, name, parms );
	if ( thread == NULL ) {
		common->Error( "ERROR: SDL_CreateThread %s failed\n", name );
	}
	// the SDL thread cannot be cancelled, the thread functions must
	// return on their own or they leak until the process exits
	info.threadHandle = ( int )( intptr_t )thread;
	info.threadId = SDL_GetThreadID( thread );
	info.name = name;
	if ( *thread_count < MAX_THREADS ) {
		threads[ ( *thread_count )++ ] = &info;
	} else {
		common->DPrintf( "WARNING: MAX_THREADS reached\n" );
	}
	Sys_LeaveCriticalSection( );
}

/*
==================
Sys_DestroyThread
==================
*/
void Sys_DestroyThread( xthreadInfo &info ) {
	// the target thread must return on its own, SDL has no cancel
	assert( info.threadHandle );
	SDL_WaitThread( ( SDL_Thread * )( intptr_t )info.threadHandle, NULL );
	info.threadHandle = 0;
	Sys_EnterCriticalSection( );
	for( int i = 0 ; i < g_thread_count ; i++ ) {
		if ( &info == g_threads[ i ] ) {
			g_threads[ i ] = NULL;
			int j;
			for( j = i+1 ; j < g_thread_count ; j++ ) {
				g_threads[ j-1 ] = g_threads[ j ];
			}
			g_threads[ j-1 ] = NULL;
			g_thread_count--;
			Sys_LeaveCriticalSection( );
			return;
		}
	}
	Sys_LeaveCriticalSection( );
}

/*
==================
Sys_GetThreadName
find the name of the calling thread
==================
*/
const char* Sys_GetThreadName( int *index ) {
	Sys_EnterCriticalSection( );
	SDL_ThreadID thread = SDL_GetCurrentThreadID();
	for( int i = 0 ; i < g_thread_count ; i++ ) {
		if ( thread == g_threads[ i ]->threadId ) {
			if ( index ) {
				*index = i;
			}
			Sys_LeaveCriticalSection( );
			return g_threads[ i ]->name;
		}
	}
	if ( index ) {
		*index = -1;
	}
	Sys_LeaveCriticalSection( );
	return "main";
}

/*
=========================================================
Async Thread
=========================================================
*/

xthreadInfo asyncThread;

/*
=================
Posix_StartAsyncThread
=================
*/
void Posix_StartAsyncThread() {
	if ( asyncThread.threadHandle == 0 ) {
		Sys_CreateThread( (xthread_t)Sys_AsyncThread, NULL, THREAD_NORMAL, asyncThread, "Async", g_threads, &g_thread_count );
	} else {
		common->Printf( "Async thread already running\n" );
	}
	common->Printf( "Async thread started\n" );
}

/*
==================
Posix_InitPThreads
==================
*/
void Posix_InitPThreads( ) {
	int i;

	// init critical sections
	for ( i = 0; i < MAX_LOCAL_CRITICAL_SECTIONS; i++ ) {
		global_lock[ i ] = SDL_CreateMutex();
	}

	// init event sleep/triggers
	for ( i = 0; i < MAX_TRIGGER_EVENTS; i++ ) {
		event_cond[ i ] = SDL_CreateCond();
		signaled[ i ] = false;
		waiting[ i ] = false;
	}

	// init threads table
	for ( i = 0; i < MAX_THREADS; i++ ) {
		g_threads[ i ] = NULL;
	}
}
