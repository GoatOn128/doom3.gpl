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

#ifndef __EFXLIBH
#define __EFXLIBH

#include <AL/al.h>
#include <AL/efx.h>

// The EAX 4.0 reverb layout from Creative's eax4.h, kept so the existing .efx
// files and the EAX manager presets keep parsing, only the transport moved to
// the OpenAL EFX extension.
typedef struct {
	float x;
	float y;
	float z;
} EAXVECTOR;

#define EAXREVERBFLAGS_DECAYTIMESCALE        0x1
#define EAXREVERBFLAGS_REFLECTIONSSCALE       0x2
#define EAXREVERBFLAGS_REFLECTIONSDELAYSCALE  0x4
#define EAXREVERBFLAGS_REVERBSCALE            0x8
#define EAXREVERBFLAGS_REVERBDELAYSCALE       0x10
#define EAXREVERBFLAGS_DECAYHFLIMIT          0x20
#define EAXREVERBFLAGS_ECHOTIMESCALE         0x40
#define EAXREVERBFLAGS_MODULATIONTIMESCALE   0x80

typedef struct {
	unsigned long ulEnvironment;   // sets all reverb properties
	float flEnvironmentSize;       // environment size in meters
	float flEnvironmentDiffusion;  // environment diffusion
	long lRoom;                    // room effect level (at mid frequencies)
	long lRoomHF;                  // relative room effect level at high frequencies
	long lRoomLF;                  // relative room effect level at low frequencies
	float flDecayTime;             // reverberation decay time at mid frequencies
	float flDecayHFRatio;          // high-frequency to mid-frequency decay time ratio
	float flDecayLFRatio;          // low-frequency to mid-frequency decay time ratio
	long lReflections;             // early reflections level relative to room effect
	float flReflectionsDelay;      // initial reflection delay time
	EAXVECTOR vReflectionsPan;     // early reflections panning vector
	long lReverb;                  // late reverberation level relative to room effect
	float flReverbDelay;           // late reverberation delay time relative to initial reflection
	EAXVECTOR vReverbPan;          // late reverberation panning vector
	float flEchoTime;              // echo time
	float flEchoDepth;             // echo depth
	float flModulationTime;        // modulation time
	float flModulationDepth;       // modulation depth
	float flAirAbsorptionHF;       // change in level per meter at high frequencies
	float flHFReference;           // reference high frequency
	float flLFReference;           // reference low frequency
	float flRoomRolloffFactor;     // like DS3D flRolloffFactor but for room effect
	unsigned long ulFlags;         // modifies the behavior of properties
} EAXREVERBPROPERTIES;

///////////////////////////////////////////////////////////
// Class definitions.
class idSoundEffect
{
public:
	idSoundEffect() {
	};
	~idSoundEffect() { 
		if ( data && datasize ) {
			Mem_Free( data );
			data = NULL;
		}
	}
	
	idStr name;
	int datasize;
	void *data;
};

class idEFXFile
{
private:

protected:
    // Protected data members.

public:
    // Public data members.

private:
    
public:
	idEFXFile();
	~idEFXFile();

	bool FindEffect( idStr &name, idSoundEffect **effect, int *index );
	bool ReadEffect( idLexer &lexer, idSoundEffect *effect );
	bool LoadFile( const char *filename, bool OSPath = false );
	void UnloadFile( void );
	void Clear( void );

	idList<idSoundEffect *>effects;
};
///////////////////////////////////////////////////////////

#endif // __EFXLIBH
