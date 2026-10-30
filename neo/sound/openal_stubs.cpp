/*
===========================================================================

Doom 3 GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company. 

This file is part of the Doom 3 GPL Source Code (?Doom 3 Source Code?).  

Doom 3 Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS OF A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, please contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"
#include "../sound/snd_local.h"

// Minimal OpenAL implementation for the Linux build. ID_OPENAL is off there,
// these stubs only satisfy the linker for the ( runtime disabled ) call paths.

AL_API ALenum AL_APIENTRY alGetError( void ) AL_API_NOEXCEPT {
	return AL_NO_ERROR;
}

AL_API ALboolean AL_APIENTRY alIsSource( ALuint sid ) AL_API_NOEXCEPT {
	return AL_FALSE;
}

AL_API void AL_APIENTRY alGenBuffers( ALsizei n, ALuint* buffers ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourceStop( ALuint sid ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alGetSourcei( ALuint sid, ALenum pname, ALint* value ) AL_API_NOEXCEPT { }

AL_API ALint AL_APIENTRY alGetInteger( ALenum param ) AL_API_NOEXCEPT {
	return 0;
}

ALC_API void ALC_APIENTRY alcSuspendContext( ALCcontext *alcHandle ) ALC_API_NOEXCEPT { }

ALC_API ALCdevice * ALC_APIENTRY alcOpenDevice( const ALCchar *tokstr ) ALC_API_NOEXCEPT {
	return NULL;
}

AL_API void AL_APIENTRY alDeleteBuffers( ALsizei n, const ALuint* buffers ) AL_API_NOEXCEPT { }

AL_API ALboolean AL_APIENTRY alIsExtensionPresent( const ALchar* fname ) AL_API_NOEXCEPT {
	return AL_FALSE;
}

AL_API void AL_APIENTRY alBufferData( ALuint buffer, ALenum format, const ALvoid* data, ALsizei size, ALsizei freq ) AL_API_NOEXCEPT { }

ALC_API ALCboolean ALC_APIENTRY alcMakeContextCurrent( ALCcontext *alcHandle ) ALC_API_NOEXCEPT {
	return 0;
}

ALC_API void ALC_APIENTRY alcProcessContext( ALCcontext *alcHandle ) ALC_API_NOEXCEPT { }

ALC_API void ALC_APIENTRY alcDestroyContext( ALCcontext *alcHandle ) ALC_API_NOEXCEPT { }

ALC_API const ALCchar * ALC_APIENTRY alcGetString( ALCdevice *deviceHandle, ALCenum token ) ALC_API_NOEXCEPT {
	return NULL;
}

AL_API void AL_APIENTRY alDeleteSources( ALsizei n, const ALuint* sources ) AL_API_NOEXCEPT { }

AL_API ALenum AL_APIENTRY alGetEnumValue( const ALchar* ename ) AL_API_NOEXCEPT {
	return 0;
}

AL_API void* AL_APIENTRY alGetProcAddress( const ALchar* fname ) AL_API_NOEXCEPT {
	return NULL;
}

ALC_API ALCcontext * ALC_APIENTRY alcCreateContext( ALCdevice *dev, const ALCint* attrlist ) ALC_API_NOEXCEPT {
	return NULL;
}

ALC_API ALCboolean ALC_APIENTRY alcCloseDevice( ALCdevice *dev ) ALC_API_NOEXCEPT {
	return 0;
}

AL_API void AL_APIENTRY alListenerfv( ALenum pname, const ALfloat* param ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourceQueueBuffers( ALuint sid, ALsizei numEntries, const ALuint *bids ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourcei( ALuint sid, ALenum param, ALint value ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alListenerf( ALenum pname, ALfloat param ) AL_API_NOEXCEPT { }

AL_API ALboolean AL_APIENTRY alIsBuffer( ALuint buffer ) AL_API_NOEXCEPT {
	return AL_FALSE;
}

AL_API void AL_APIENTRY alSource3f( ALuint sid, ALenum param, ALfloat f1, ALfloat f2, ALfloat f3 ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alGenSources( ALsizei n, ALuint* sources ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourcef( ALuint sid, ALenum param, ALfloat value ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourceUnqueueBuffers( ALuint sid, ALsizei numEntries, ALuint *bids ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSourcePlay( ALuint sid ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alSource3i( ALuint sid, ALenum param, ALint value1, ALint value2, ALint value3 ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alGenEffects( ALsizei n, ALuint* effects ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alDeleteEffects( ALsizei n, const ALuint* effects ) AL_API_NOEXCEPT { }

AL_API ALboolean AL_APIENTRY alIsEffect( ALuint effect ) AL_API_NOEXCEPT {
	return AL_FALSE;
}

AL_API void AL_APIENTRY alEffecti( ALuint effect, ALenum param, ALint iValue ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alEffectf( ALuint effect, ALenum param, ALfloat flValue ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alEffectfv( ALuint effect, ALenum param, const ALfloat* pflValues ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alGenAuxiliaryEffectSlots( ALsizei n, ALuint* effectslots ) AL_API_NOEXCEPT { }

AL_API void AL_APIENTRY alDeleteAuxiliaryEffectSlots( ALsizei n, const ALuint* effectslots ) AL_API_NOEXCEPT { }

AL_API ALboolean AL_APIENTRY alIsAuxiliaryEffectSlot( ALuint effectslot ) AL_API_NOEXCEPT {
	return AL_FALSE;
}

AL_API void AL_APIENTRY alAuxiliaryEffectSloti( ALuint effectslot, ALenum param, ALint iValue ) AL_API_NOEXCEPT { }

