// OpenAL function table, port of the old generated neo/openal/idal.cpp to
// the modern OpenAL signatures ( const-correct strings, no ALvoid/ALCvoid )
#include "idal.h"

ALenum ( AL_APIENTRY * idalGetError )( void ) = NULL;
void ( AL_APIENTRY * idalGenBuffers )( ALsizei, ALuint * ) = NULL;
ALboolean ( AL_APIENTRY * idalIsSource )( ALuint ) = NULL;
void ( AL_APIENTRY * idalSourceStop )( ALuint ) = NULL;
void ( AL_APIENTRY * idalGetSourcei )( ALuint, ALenum, ALint * ) = NULL;
ALint ( AL_APIENTRY * idalGetInteger )( ALenum ) = NULL;
void ( AL_APIENTRY * idalcSuspendContext )( ALCcontext * ) = NULL;
ALCboolean ( AL_APIENTRY * idalcMakeContextCurrent )( ALCcontext * ) = NULL;
void ( AL_APIENTRY * idalcProcessContext )( ALCcontext * ) = NULL;
void ( AL_APIENTRY * idalcDestroyContext )( ALCcontext * ) = NULL;
const ALCchar * ( AL_APIENTRY * idalcGetString )( ALCdevice *, ALCenum ) = NULL;
void ( AL_APIENTRY * idalBufferData )( ALuint, ALenum, const ALvoid *, ALsizei, ALsizei ) = NULL;
void ( AL_APIENTRY * idalDeleteBuffers )( ALsizei, const ALuint * ) = NULL;
ALboolean ( AL_APIENTRY * idalIsExtensionPresent )( const ALchar * ) = NULL;
void ( AL_APIENTRY * idalDeleteSources )( ALsizei, const ALuint * ) = NULL;
ALenum ( AL_APIENTRY * idalGetEnumValue )( const ALchar * ) = NULL;
void * ( AL_APIENTRY * idalGetProcAddress )( const ALchar * ) = NULL;
ALCcontext * ( AL_APIENTRY * idalcCreateContext )( ALCdevice *, const ALCint * ) = NULL;
ALCdevice * ( AL_APIENTRY * idalcOpenDevice )( const ALCchar * ) = NULL;
void ( AL_APIENTRY * idalListenerfv )( ALenum, const ALfloat * ) = NULL;
void ( AL_APIENTRY * idalSourceQueueBuffers )( ALuint, ALsizei, const ALuint * ) = NULL;
void ( AL_APIENTRY * idalSourcei )( ALuint, ALenum, ALint ) = NULL;
void ( AL_APIENTRY * idalListenerf )( ALenum, ALfloat ) = NULL;
void ( AL_APIENTRY * idalcCloseDevice )( ALCdevice * ) = NULL;
ALboolean ( AL_APIENTRY * idalIsBuffer )( ALuint ) = NULL;
void ( AL_APIENTRY * idalSource3f )( ALuint, ALenum, ALfloat, ALfloat, ALfloat ) = NULL;
void ( AL_APIENTRY * idalGenSources )( ALsizei, ALuint * ) = NULL;
void ( AL_APIENTRY * idalSourcef )( ALuint, ALenum, ALfloat ) = NULL;
void ( AL_APIENTRY * idalSourceUnqueueBuffers )( ALuint, ALsizei, ALuint * ) = NULL;
void ( AL_APIENTRY * idalSourcePlay )( ALuint ) = NULL;

const char* InitializeIDAL( HMODULE h ) {
idalGetError = ( ALenum ( AL_APIENTRY * )( void ) )GetProcAddress( h, "alGetError" );
if ( !idalGetError) {
  return "alGetError";
}
idalGenBuffers = ( void ( AL_APIENTRY * )( ALsizei, ALuint * ) )GetProcAddress( h, "alGenBuffers" );
if ( !idalGenBuffers) {
  return "alGenBuffers";
}
idalIsSource = ( ALboolean ( AL_APIENTRY * )( ALuint ) )GetProcAddress( h, "alIsSource" );
if ( !idalIsSource) {
  return "alIsSource";
}
idalSourceStop = ( void ( AL_APIENTRY * )( ALuint ) )GetProcAddress( h, "alSourceStop" );
if ( !idalSourceStop) {
  return "alSourceStop";
}
idalGetSourcei = ( void ( AL_APIENTRY * )( ALuint, ALenum, ALint * ) )GetProcAddress( h, "alGetSourcei" );
if ( !idalGetSourcei) {
  return "alGetSourcei";
}
idalGetInteger = ( ALint ( AL_APIENTRY * )( ALenum ) )GetProcAddress( h, "alGetInteger" );
if ( !idalGetInteger) {
  return "alGetInteger";
}
idalcSuspendContext = ( void ( AL_APIENTRY * )( ALCcontext * ) )GetProcAddress( h, "alcSuspendContext" );
if ( !idalcSuspendContext) {
  return "alcSuspendContext";
}
idalcMakeContextCurrent = ( ALCboolean ( AL_APIENTRY * )( ALCcontext * ) )GetProcAddress( h, "alcMakeContextCurrent" );
if ( !idalcMakeContextCurrent) {
  return "alcMakeContextCurrent";
}
idalcProcessContext = ( void ( AL_APIENTRY * )( ALCcontext * ) )GetProcAddress( h, "alcProcessContext" );
if ( !idalcProcessContext) {
  return "alcProcessContext";
}
idalcDestroyContext = ( void ( AL_APIENTRY * )( ALCcontext * ) )GetProcAddress( h, "alcDestroyContext" );
if ( !idalcDestroyContext) {
  return "alcDestroyContext";
}
idalcGetString = ( const ALCchar * ( AL_APIENTRY * )( ALCdevice *, ALCenum ) )GetProcAddress( h, "alcGetString" );
if ( !idalcGetString) {
  return "alcGetString";
}
idalBufferData = ( void ( AL_APIENTRY * )( ALuint, ALenum, const ALvoid *, ALsizei, ALsizei ) )GetProcAddress( h, "alBufferData" );
if ( !idalBufferData) {
  return "alBufferData";
}
idalDeleteBuffers = ( void ( AL_APIENTRY * )( ALsizei, const ALuint * ) )GetProcAddress( h, "alDeleteBuffers" );
if ( !idalDeleteBuffers) {
  return "alDeleteBuffers";
}
idalIsExtensionPresent = ( ALboolean ( AL_APIENTRY * )( const ALchar * ) )GetProcAddress( h, "alIsExtensionPresent" );
if ( !idalIsExtensionPresent) {
  return "alIsExtensionPresent";
}
idalDeleteSources = ( void ( AL_APIENTRY * )( ALsizei, const ALuint * ) )GetProcAddress( h, "alDeleteSources" );
if ( !idalDeleteSources) {
  return "alDeleteSources";
}
idalGetEnumValue = ( ALenum ( AL_APIENTRY * )( const ALchar * ) )GetProcAddress( h, "alGetEnumValue" );
if ( !idalGetEnumValue) {
  return "alGetEnumValue";
}
idalGetProcAddress = ( void * ( AL_APIENTRY * )( const ALchar * ) )GetProcAddress( h, "alGetProcAddress" );
if ( !idalGetProcAddress) {
  return "alGetProcAddress";
}
idalcCreateContext = ( ALCcontext * ( AL_APIENTRY * )( ALCdevice *, const ALCint * ) )GetProcAddress( h, "alcCreateContext" );
if ( !idalcCreateContext) {
  return "alcCreateContext";
}
idalcOpenDevice = ( ALCdevice * ( AL_APIENTRY * )( const ALCchar * ) )GetProcAddress( h, "alcOpenDevice" );
if ( !idalcOpenDevice) {
  return "alcOpenDevice";
}
idalListenerfv = ( void ( AL_APIENTRY * )( ALenum, const ALfloat * ) )GetProcAddress( h, "alListenerfv" );
if ( !idalListenerfv) {
  return "alListenerfv";
}
idalSourceQueueBuffers = ( void ( AL_APIENTRY * )( ALuint, ALsizei, const ALuint * ) )GetProcAddress( h, "alSourceQueueBuffers" );
if ( !idalSourceQueueBuffers) {
  return "alSourceQueueBuffers";
}
idalSourcei = ( void ( AL_APIENTRY * )( ALuint, ALenum, ALint ) )GetProcAddress( h, "alSourcei" );
if ( !idalSourcei) {
  return "alSourcei";
}
idalListenerf = ( void ( AL_APIENTRY * )( ALenum, ALfloat ) )GetProcAddress( h, "alListenerf" );
if ( !idalListenerf) {
  return "alListenerf";
}
idalcCloseDevice = ( void ( AL_APIENTRY * )( ALCdevice * ) )GetProcAddress( h, "alcCloseDevice" );
if ( !idalcCloseDevice) {
  return "alcCloseDevice";
}
idalIsBuffer = ( ALboolean ( AL_APIENTRY * )( ALuint ) )GetProcAddress( h, "alIsBuffer" );
if ( !idalIsBuffer) {
  return "alIsBuffer";
}
idalSource3f = ( void ( AL_APIENTRY * )( ALuint, ALenum, ALfloat, ALfloat, ALfloat ) )GetProcAddress( h, "alSource3f" );
if ( !idalSource3f) {
  return "alSource3f";
}
idalGenSources = ( void ( AL_APIENTRY * )( ALsizei, ALuint * ) )GetProcAddress( h, "alGenSources" );
if ( !idalGenSources) {
  return "alGenSources";
}
idalSourcef = ( void ( AL_APIENTRY * )( ALuint, ALenum, ALfloat ) )GetProcAddress( h, "alSourcef" );
if ( !idalSourcef) {
  return "alSourcef";
}
idalSourceUnqueueBuffers = ( void ( AL_APIENTRY * )( ALuint, ALsizei, ALuint * ) )GetProcAddress( h, "alSourceUnqueueBuffers" );
if ( !idalSourceUnqueueBuffers) {
  return "alSourceUnqueueBuffers";
}
idalSourcePlay = ( void ( AL_APIENTRY * )( ALuint ) )GetProcAddress( h, "alSourcePlay" );
if ( !idalSourcePlay) {
  return "alSourcePlay";
}
return NULL;
}
