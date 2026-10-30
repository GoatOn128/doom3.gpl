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
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"
#pragma hdrstop

#include "snd_local.h"

/*
===================================================================================

  Ogg Vorbis decoding through stb_vorbis.

  All decoder state lives inside stb_vorbis. The engine keeps a count of the
  open decoders so the sound stats keep reporting a meaningful budget.

===================================================================================
*/

// reported budget per decoder, matches what the old OggVorbis library used
const int MIN_OGGVORBIS_MEMORY				= 768 * 1024;
// same cap the old block allocator gave to realtime decoding
const int MAX_OGG_DECODERS					= 10;

static int numOGGDecoders = 0;

/*
====================
idWaveFile::OpenOGG
====================
*/
int idWaveFile::OpenOGG( const char* strFileName, waveformatex_t *pwfx ) {
	int		error;
	int		length;
	byte *	buffer;
	stb_vorbis *ov;

	memset( pwfx, 0, sizeof( waveformatex_t ) );

	mhmmio = fileSystem->OpenFileRead( strFileName );
	if ( !mhmmio ) {
		return -1;
	}

	Sys_EnterCriticalSection( CRITICAL_SECTION_ONE );

	// stb_vorbis decodes from a memory image, read the whole file in
	length = mhmmio->Length();
	buffer = (byte *)Mem_Alloc( length );
	mhmmio->Read( buffer, length );
	mfileTime = mhmmio->Timestamp();
	fileSystem->CloseFile( mhmmio );
	mhmmio = NULL;

	ov = stb_vorbis_open_memory( buffer, length, &error, NULL );
	if ( ov == NULL ) {
		Mem_Free( buffer );
		Sys_LeaveCriticalSection( CRITICAL_SECTION_ONE );
		return -1;
	}

	stb_vorbis_info vi = stb_vorbis_get_info( ov );

	mpwfx.Format.nSamplesPerSec = vi.sample_rate;
	mpwfx.Format.nChannels = vi.channels;
	mpwfx.Format.wBitsPerSample = sizeof(short) * 8;
	// the stream length is per channel, the engine counts interleaved samples
	mdwSize = stb_vorbis_stream_length_in_samples( ov ) * vi.channels;
	mbIsReadingFromMemory = false;

	if ( idSoundSystemLocal::s_realTimeDecoding.GetBool() ) {

		stb_vorbis_close( ov );
		Mem_Free( buffer );

		mpwfx.Format.wFormatTag = WAVE_FORMAT_TAG_OGG;
		mhmmio = fileSystem->OpenFileRead( strFileName );
		mMemSize = mhmmio->Length();

	} else {

		// keep the decoder alive, the wave file owns the memory image
		ogg = ov;
		oggBuffer = buffer;

		mpwfx.Format.wFormatTag = WAVE_FORMAT_TAG_PCM;
		mMemSize = mdwSize * sizeof( short );
	}

	memcpy( pwfx, &mpwfx, sizeof( waveformatex_t ) );

	Sys_LeaveCriticalSection( CRITICAL_SECTION_ONE );

	isOgg = true;

	return 0;
}

/*
====================
idWaveFile::ReadOGG
====================
*/
int idWaveFile::ReadOGG( byte* pBuffer, int dwSizeToRead, int *pdwSizeRead ) {
	stb_vorbis *ov = ogg;
	int numChannels = mpwfx.Format.nChannels;

	// stb decodes interleaved 16 bit samples straight into the caller buffer
	int ret = stb_vorbis_get_samples_short_interleaved( ov, numChannels, (short *)pBuffer, dwSizeToRead / sizeof( short ) );

	dwSizeToRead = ret * numChannels * sizeof( short );

	if ( pdwSizeRead != NULL ) {
		*pdwSizeRead = dwSizeToRead;
	}

	return dwSizeToRead;
}

/*
====================
idWaveFile::CloseOGG
====================
*/
int idWaveFile::CloseOGG( void ) {
	stb_vorbis *ov = ogg;
	if ( ov != NULL ) {
		Sys_EnterCriticalSection( CRITICAL_SECTION_ONE );
		stb_vorbis_close( ov );
		Mem_Free( oggBuffer );
		ogg = NULL;
		oggBuffer = NULL;
		Sys_LeaveCriticalSection( CRITICAL_SECTION_ONE );
		return 0;
	}
	return -1;
}


/*
===================================================================================

  idSampleDecoderLocal

===================================================================================
*/

class idSampleDecoderLocal : public idSampleDecoder {
public:
	virtual void			Decode( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest );
	virtual void			ClearDecoder( void );
	virtual idSoundSample *	GetSample( void ) const;
	virtual int				GetLastDecodeTime( void ) const;

	void					Clear( void );
	int						DecodePCM( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest );
	int						DecodeOGG( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest );

private:
	bool					failed;				// set if decoding failed
	int						lastFormat;			// last format being decoded
	idSoundSample *			lastSample;			// last sample being decoded
	int						lastSampleOffset;	// last offset into the decoded sample
	int						lastDecodeTime;		// last time decoding sound

	stb_vorbis *			ogg;				// stb_vorbis decoder
};

idBlockAlloc<idSampleDecoderLocal, 64>		sampleDecoderAllocator;

/*
====================
idSampleDecoder::Init
====================
*/
void idSampleDecoder::Init( void ) {
	numOGGDecoders = 0;
}

/*
====================
idSampleDecoder::Shutdown
====================
*/
void idSampleDecoder::Shutdown( void ) {
	sampleDecoderAllocator.Shutdown();
}

/*
====================
idSampleDecoder::Alloc
====================
*/
idSampleDecoder *idSampleDecoder::Alloc( void ) {
	idSampleDecoderLocal *decoder = sampleDecoderAllocator.Alloc();
	decoder->Clear();
	return decoder;
}

/*
====================
idSampleDecoder::Free
====================
*/
void idSampleDecoder::Free( idSampleDecoder *decoder ) {
	idSampleDecoderLocal *localDecoder = static_cast<idSampleDecoderLocal *>( decoder );
	localDecoder->ClearDecoder();
	sampleDecoderAllocator.Free( localDecoder );
}

/*
====================
idSampleDecoder::GetNumUsedBlocks
====================
*/
int idSampleDecoder::GetNumUsedBlocks( void ) {
	return numOGGDecoders;
}

/*
====================
idSampleDecoder::GetUsedBlockMemory
====================
*/
int idSampleDecoder::GetUsedBlockMemory( void ) {
	return numOGGDecoders * MIN_OGGVORBIS_MEMORY;
}

/*
====================
idSampleDecoderLocal::Clear
====================
*/
void idSampleDecoderLocal::Clear( void ) {
	failed = false;
	lastFormat = WAVE_FORMAT_TAG_PCM;
	lastSample = NULL;
	lastSampleOffset = 0;
	lastDecodeTime = 0;
	ogg = NULL;
}

/*
====================
idSampleDecoderLocal::ClearDecoder
====================
*/
void idSampleDecoderLocal::ClearDecoder( void ) {
	Sys_EnterCriticalSection( CRITICAL_SECTION_ONE );

	switch( lastFormat ) {
		case WAVE_FORMAT_TAG_PCM: {
			break;
		}
		case WAVE_FORMAT_TAG_OGG: {
			if ( ogg != NULL ) {
				stb_vorbis_close( ogg );
				ogg = NULL;
				numOGGDecoders--;
			}
			break;
		}
	}

	Clear();

	Sys_LeaveCriticalSection( CRITICAL_SECTION_ONE );
}

/*
====================
idSampleDecoderLocal::GetSample
====================
*/
idSoundSample *idSampleDecoderLocal::GetSample( void ) const {
	return lastSample;
}

/*
====================
idSampleDecoderLocal::GetLastDecodeTime
====================
*/
int idSampleDecoderLocal::GetLastDecodeTime( void ) const {
	return lastDecodeTime;
}

/*
====================
idSampleDecoderLocal::Decode
====================
*/
void idSampleDecoderLocal::Decode( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest ) {
	int readSamples44k;

	if ( sample->objectInfo.wFormatTag != lastFormat || sample != lastSample ) {
		ClearDecoder();
	}

	lastDecodeTime = soundSystemLocal.CurrentSoundTime;

	if ( failed ) {
		memset( dest, 0, sampleCount44k * sizeof( dest[0] ) );
		return;
	}

	// samples can be decoded both from the sound thread and the main thread for shakes
	Sys_EnterCriticalSection( CRITICAL_SECTION_ONE );

	switch( sample->objectInfo.wFormatTag ) {
		case WAVE_FORMAT_TAG_PCM: {
			readSamples44k = DecodePCM( sample, sampleOffset44k, sampleCount44k, dest );
			break;
		}
		case WAVE_FORMAT_TAG_OGG: {
			readSamples44k = DecodeOGG( sample, sampleOffset44k, sampleCount44k, dest );
			break;
		}
		default: {
			readSamples44k = 0;
			break;
		}
	}

	Sys_LeaveCriticalSection( CRITICAL_SECTION_ONE );

	if ( readSamples44k < sampleCount44k ) {
		memset( dest + readSamples44k, 0, ( sampleCount44k - readSamples44k ) * sizeof( dest[0] ) );
	}
}

/*
====================
idSampleDecoderLocal::DecodePCM
====================
*/
int idSampleDecoderLocal::DecodePCM( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest ) {
	const byte *first;
	int pos, size, readSamples;

	lastFormat = WAVE_FORMAT_TAG_PCM;
	lastSample = sample;

	int shift = 22050 / sample->objectInfo.nSamplesPerSec;
	int sampleOffset = sampleOffset44k >> shift;
	int sampleCount = sampleCount44k >> shift;

	if ( sample->nonCacheData == NULL ) {
		assert( false );	// this should never happen ( note: I've seen that happen with the main thread down in idGameLocal::MapClear clearing entities - TTimo )
		failed = true;
		return 0;
	}

	if ( !sample->FetchFromCache( sampleOffset * sizeof( short ), &first, &pos, &size, false ) ) {
		failed = true;
		return 0;
	}

	if ( size - pos < sampleCount * sizeof( short ) ) {
		readSamples = ( size - pos ) / sizeof( short );
	} else {
		readSamples = sampleCount;
	}

	// duplicate samples for 44kHz output
	SIMDProcessor->UpSamplePCMTo44kHz( dest, (const short *)(first+pos), readSamples, sample->objectInfo.nSamplesPerSec, sample->objectInfo.nChannels );

	return ( readSamples << shift );
}

/*
====================
idSampleDecoderLocal::DecodeOGG
====================
*/
int idSampleDecoderLocal::DecodeOGG( idSoundSample *sample, int sampleOffset44k, int sampleCount44k, float *dest ) {
	int readSamples, totalSamples;

	int shift = 22050 / sample->objectInfo.nSamplesPerSec;
	int sampleOffset = sampleOffset44k >> shift;
	int sampleCount = sampleCount44k >> shift;

	// open OGG file if not yet opened
	if ( lastSample == NULL ) {
		// make sure there is room for another decoder
		if ( numOGGDecoders >= MAX_OGG_DECODERS ) {
			return 0;
		}
		if ( sample->nonCacheData == NULL ) {
			assert( false );	// this should never happen
			failed = true;
			return 0;
		}
		int error;
		ogg = stb_vorbis_open_memory( sample->nonCacheData, sample->objectMemSize, &error, NULL );
		if ( ogg == NULL ) {
			failed = true;
			return 0;
		}
		numOGGDecoders++;
		lastFormat = WAVE_FORMAT_TAG_OGG;
		lastSample = sample;
	}

	// seek to the right offset if necessary
	if ( sampleOffset != lastSampleOffset ) {
		// stb seeks in per channel samples, the engine offset counts interleaved samples
		if ( !stb_vorbis_seek( ogg, sampleOffset / sample->objectInfo.nChannels ) ) {
			failed = true;
			return 0;
		}
	}

	lastSampleOffset = sampleOffset;

	// decode OGG samples
	totalSamples = sampleCount;
	readSamples = 0;
	do {
		// per channel decode buffers, stb_vorbis zero fills missing channels
		float channelData[6][4096];
		float *channelBuffers[6];
		for ( int i = 0; i < sample->objectInfo.nChannels; i++ ) {
			channelBuffers[i] = channelData[i];
		}

		int got = stb_vorbis_get_samples_float( ogg, sample->objectInfo.nChannels, channelBuffers, 4096 );
		if ( got == 0 ) {
			failed = true;
			break;
		}
		int ret = got * sample->objectInfo.nChannels;

		SIMDProcessor->UpSampleOGGTo44kHz( dest + ( readSamples << shift ), channelBuffers, ret, sample->objectInfo.nSamplesPerSec, sample->objectInfo.nChannels );

		readSamples += ret;
		totalSamples -= ret;
	} while( totalSamples > 0 );

	lastSampleOffset += readSamples;

	return ( readSamples << shift );
}
