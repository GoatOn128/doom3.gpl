// OpenAL function pointers, the al*/alc* names are redirected to these on
// Windows so the DLL is loaded once through Sys_LoadOpenAL ( see idal.cpp )
#ifndef __IDAL_H__
#define __IDAL_H__

extern ALenum ( AL_APIENTRY * idalGetError )( void );
extern void ( AL_APIENTRY * idalGenBuffers )( ALsizei, ALuint * );
extern ALboolean ( AL_APIENTRY * idalIsSource )( ALuint );
extern void ( AL_APIENTRY * idalSourceStop )( ALuint );
extern void ( AL_APIENTRY * idalGetSourcei )( ALuint, ALenum, ALint * );
extern ALint ( AL_APIENTRY * idalGetInteger )( ALenum );
extern void ( AL_APIENTRY * idalcSuspendContext )( ALCcontext * );
extern ALCboolean ( AL_APIENTRY * idalcMakeContextCurrent )( ALCcontext * );
extern void ( AL_APIENTRY * idalcProcessContext )( ALCcontext * );
extern void ( AL_APIENTRY * idalcDestroyContext )( ALCcontext * );
extern const ALCchar * ( AL_APIENTRY * idalcGetString )( ALCdevice *, ALCenum );
extern void ( AL_APIENTRY * idalBufferData )( ALuint, ALenum, const ALvoid *, ALsizei, ALsizei );
extern void ( AL_APIENTRY * idalDeleteBuffers )( ALsizei, const ALuint * );
extern ALboolean ( AL_APIENTRY * idalIsExtensionPresent )( const ALchar * );
extern void ( AL_APIENTRY * idalDeleteSources )( ALsizei, const ALuint * );
extern ALenum ( AL_APIENTRY * idalGetEnumValue )( const ALchar * );
extern void * ( AL_APIENTRY * idalGetProcAddress )( const ALchar * );
extern ALCcontext * ( AL_APIENTRY * idalcCreateContext )( ALCdevice *, const ALCint * );
extern ALCdevice * ( AL_APIENTRY * idalcOpenDevice )( const ALCchar * );
extern void ( AL_APIENTRY * idalListenerfv )( ALenum, const ALfloat * );
extern void ( AL_APIENTRY * idalSourceQueueBuffers )( ALuint, ALsizei, const ALuint * );
extern void ( AL_APIENTRY * idalSourcei )( ALuint, ALenum, ALint );
extern void ( AL_APIENTRY * idalListenerf )( ALenum, ALfloat );
extern void ( AL_APIENTRY * idalcCloseDevice )( ALCdevice * );
extern ALboolean ( AL_APIENTRY * idalIsBuffer )( ALuint );
extern void ( AL_APIENTRY * idalSource3f )( ALuint, ALenum, ALfloat, ALfloat, ALfloat );
extern void ( AL_APIENTRY * idalGenSources )( ALsizei, ALuint * );
extern void ( AL_APIENTRY * idalSourcef )( ALuint, ALenum, ALfloat );
extern void ( AL_APIENTRY * idalSourceUnqueueBuffers )( ALuint, ALsizei, ALuint * );
extern void ( AL_APIENTRY * idalSourcePlay )( ALuint );

#define alGetError idalGetError
#define alGenBuffers idalGenBuffers
#define alIsSource idalIsSource
#define alSourceStop idalSourceStop
#define alGetSourcei idalGetSourcei
#define alGetInteger idalGetInteger
#define alcSuspendContext idalcSuspendContext
#define alcMakeContextCurrent idalcMakeContextCurrent
#define alcProcessContext idalcProcessContext
#define alcDestroyContext idalcDestroyContext
#define alcGetString idalcGetString
#define alBufferData idalBufferData
#define alDeleteBuffers idalDeleteBuffers
#define alIsExtensionPresent idalIsExtensionPresent
#define alDeleteSources idalDeleteSources
#define alGetEnumValue idalGetEnumValue
#define alGetProcAddress idalGetProcAddress
#define alcCreateContext idalcCreateContext
#define alcOpenDevice idalcOpenDevice
#define alListenerfv idalListenerfv
#define alSourceQueueBuffers idalSourceQueueBuffers
#define alSourcei idalSourcei
#define alListenerf idalListenerf
#define alcCloseDevice idalcCloseDevice
#define alIsBuffer idalIsBuffer
#define alSource3f idalSource3f
#define alGenSources idalGenSources
#define alSourcef idalSourcef
#define alSourceUnqueueBuffers idalSourceUnqueueBuffers
#define alSourcePlay idalSourcePlay

#endif // __IDAL_H__
