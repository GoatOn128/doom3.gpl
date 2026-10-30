# Compact build digest

commit: 6c0a1f8f4368

- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x86-debug

status: failure

errors: 14
warnings: 201 in 17 kinds

### errors

FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:34:10: fatal error: jpeg-6/jpeglib.h: No such file or directory
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:44:37: error: conflicting types for ‘close_display’; have ‘int(Display *, XExtCodes *)’
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:311:13: error: conflicting types for ‘wire_to_event’; have ‘int(Display *, XEvent *, xEvent *)’ {aka ‘int(Display *, XEvent *, struct _xEvent *)’}
FAILED: [code=1] CMakeFiles/doom3.dir/sys/linux/sound.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound.cpp:282:17: error: call of overloaded ‘abs(unsigned int)’ is ambiguous
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:34:10: fatal error: jpeg-6/jpeglib.h: No such file or directory
   34 | #include "jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~
compilation terminated.
[97/395] Building CXX object CMakeFiles/doom3.dir/framework/async/NetworkSystem.cpp.o
[98/395] Building CXX object CMakeFiles/doom3.dir/framework/async/ServerScan.cpp.o
[99/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb.cpp.o
[100/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb2.cpp.o
[101/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_common.cpp.o
[102/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_nv10.cpp.o
[103/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_nv20.cpp.o
[104/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_r200.cpp.o
[105/395] Building CXX object CMakeFiles/doom3.dir/renderer/GuiModel.cpp.o
[106/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_files.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Lib.h:210,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_files.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h: In function ‘float* stbi__hdr_load(stbi__context*, int*, int*, int*, int, stbi__result_info*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7239:8: note: in expansion of macro ‘strncmp’
 7239 |    if (strncmp(token, "-Y ", 3))  return stbi__errpf("unsupported data layout", "Unsupported HDR format");
      |        ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7243:8: note: in expansion of macro ‘strncmp’
 7243 |    if (strncmp(token, "+X ", 3))  return stbi__errpf("unsupported data layout", "Unsupported HDR format");
      |        ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h: In function ‘int stbi__hdr_info(stbi__context*, int*, int*, int*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7369:8: note: in expansion of macro ‘strncmp’
 7369 |    if (strncmp(token, "-Y ", 3)) {
```

- [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Lib.h:210,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_files.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h: In function ‘float* stbi__hdr_load(stbi__context*, int*, int*, int*, int, stbi__result_info*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7239:8: note: in expansion of macro ‘strncmp’
 7239 |    if (strncmp(token, "-Y ", 3))  return stbi__errpf("unsupported data layout", "Unsupported HDR format");
      |        ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7243:8: note: in expansion of macro ‘strncmp’
 7243 |    if (strncmp(token, "+X ", 3))  return stbi__errpf("unsupported data layout", "Unsupported HDR format");
      |        ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h: In function ‘int stbi__hdr_info(stbi__context*, int*, int*, int*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7369:8: note: in expansion of macro ‘strncmp’
 7369 |    if (strncmp(token, "-Y ", 3)) {
      |        ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/Str.h:42:33: error: ‘use_idStr_Cmpn’ was not declared in this scope
   42 | #define strncmp                 use_idStr_Cmpn
      |                                 ^~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:7376:8: note: in expansion of macro ‘strncmp’
 7376 |    if (strncmp(token, "+X ", 3)) {
      |        ^~~~~~~
At global scope:
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[107/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_load.cpp.o
[108/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_init.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp: In member function ‘void idImageManager::PrintMemInfo(MemInfo_t*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp:2214:16: warning: ‘void operator delete(void*, unsigned int)’ called on pointer returned from a mismatched allocation function [-Wmismatched-new-delete]
 2214 |         delete sortIndex;
      |                ^~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp:2187:41: note: returned from ‘void* operator new [](unsigned int)’
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.h:42,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[212/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/NSBitmapImageRep.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[213/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[214/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/renderbump/renderbump.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/ui/BindWindow.cpp.o
[219/395] Building CXX object CMakeFiles/doom3.dir/ui/ChoiceWindow.cpp.o
[220/395] Building CXX object CMakeFiles/doom3.dir/ui/DeviceContext.cpp.o
[221/395] Building CXX object CMakeFiles/doom3.dir/ui/FieldWindow.cpp.o
[222/395] Building CXX object CMakeFiles/doom3.dir/ui/EditWindow.cpp.o
[223/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBearShootWindow.cpp.o
[224/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBustOutWindow.cpp.o
[225/395] Building CXX object CMakeFiles/doom3.dir/ui/GuiScript.cpp.o
[226/395] Building CXX object CMakeFiles/doom3.dir/ui/GameSSDWindow.cpp.o
[227/395] Building CXX object CMakeFiles/doom3.dir/ui/ListGUI.cpp.o
[228/395] Building CXX object CMakeFiles/doom3.dir/ui/ListWindow.cpp.o
[229/395] Building CXX object CMakeFiles/doom3.dir/ui/MarkerWindow.cpp.o
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/NSBitmapImageRep.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[213/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[214/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/renderbump/renderbump.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/ui/BindWindow.cpp.o
[219/395] Building CXX object CMakeFiles/doom3.dir/ui/ChoiceWindow.cpp.o
[220/395] Building CXX object CMakeFiles/doom3.dir/ui/DeviceContext.cpp.o
[221/395] Building CXX object CMakeFiles/doom3.dir/ui/FieldWindow.cpp.o
[222/395] Building CXX object CMakeFiles/doom3.dir/ui/EditWindow.cpp.o
[223/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBearShootWindow.cpp.o
[224/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBustOutWindow.cpp.o
[225/395] Building CXX object CMakeFiles/doom3.dir/ui/GuiScript.cpp.o
[226/395] Building CXX object CMakeFiles/doom3.dir/ui/GameSSDWindow.cpp.o
[227/395] Building CXX object CMakeFiles/doom3.dir/ui/ListGUI.cpp.o
[228/395] Building CXX object CMakeFiles/doom3.dir/ui/ListWindow.cpp.o
[229/395] Building CXX object CMakeFiles/doom3.dir/ui/MarkerWindow.cpp.o
[230/395] Building CXX object CMakeFiles/doom3.dir/ui/RegExp.cpp.o
[231/395] Building CXX object CMakeFiles/doom3.dir/ui/RenderWindow.cpp.o
[232/395] Building CXX object CMakeFiles/doom3.dir/ui/SimpleWindow.cpp.o
[233/395] Building CXX object CMakeFiles/doom3.dir/ui/SliderWindow.cpp.o
[234/395] Building CXX object CMakeFiles/doom3.dir/ui/UserInterface.cpp.o
[235/395] Building CXX object CMakeFiles/doom3.dir/ui/Winvar.cpp.o
[236/395] Building CXX object CMakeFiles/doom3.dir/sys/sys_local.cpp.o
[237/395] Building CXX object CMakeFiles/doom3.dir/ui/Window.cpp.o
[238/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_net.cpp.o
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/renderbump/renderbump.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/ui/BindWindow.cpp.o
[219/395] Building CXX object CMakeFiles/doom3.dir/ui/ChoiceWindow.cpp.o
[220/395] Building CXX object CMakeFiles/doom3.dir/ui/DeviceContext.cpp.o
[221/395] Building CXX object CMakeFiles/doom3.dir/ui/FieldWindow.cpp.o
[222/395] Building CXX object CMakeFiles/doom3.dir/ui/EditWindow.cpp.o
[223/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBearShootWindow.cpp.o
[224/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBustOutWindow.cpp.o
[225/395] Building CXX object CMakeFiles/doom3.dir/ui/GuiScript.cpp.o
[226/395] Building CXX object CMakeFiles/doom3.dir/ui/GameSSDWindow.cpp.o
[227/395] Building CXX object CMakeFiles/doom3.dir/ui/ListGUI.cpp.o
[228/395] Building CXX object CMakeFiles/doom3.dir/ui/ListWindow.cpp.o
[229/395] Building CXX object CMakeFiles/doom3.dir/ui/MarkerWindow.cpp.o
[230/395] Building CXX object CMakeFiles/doom3.dir/ui/RegExp.cpp.o
[231/395] Building CXX object CMakeFiles/doom3.dir/ui/RenderWindow.cpp.o
[232/395] Building CXX object CMakeFiles/doom3.dir/ui/SimpleWindow.cpp.o
[233/395] Building CXX object CMakeFiles/doom3.dir/ui/SliderWindow.cpp.o
[234/395] Building CXX object CMakeFiles/doom3.dir/ui/UserInterface.cpp.o
[235/395] Building CXX object CMakeFiles/doom3.dir/ui/Winvar.cpp.o
[236/395] Building CXX object CMakeFiles/doom3.dir/sys/sys_local.cpp.o
[237/395] Building CXX object CMakeFiles/doom3.dir/ui/Window.cpp.o
[238/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_net.cpp.o
[239/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_signal.cpp.o
[240/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_main.cpp.o
[241/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_threads.cpp.o
[242/395] Building CXX object CMakeFiles/doom3.dir/sys/linux/stack.cpp.o
[243/395] Building CXX object CMakeFiles/doom3.dir/sys/stub/util_stub.cpp.o
[244/395] Building CXX object CMakeFiles/doom3.dir/sys/linux/main.cpp.o
[245/395] Building CXX object CMakeFiles/doom3.dir/tools/guied/GEWindowWrapper_stub.cpp.o
[246/395] Building CXX object CMakeFiles/doom3.dir/TypeInfo/TypeInfoGen.cpp.o
[247/395] Building C object CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o
```

- [code=1] CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o 
/usr/bin/cc -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/
cc1: warning: command-line option ‘-Wno-class-memaccess’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-c++20-compat’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-conversion-null’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-delete-non-virtual-dtor’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-overloaded-virtual=0’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-register’ is valid for C++/ObjC++ but not for C
cc1: warning: command-line option ‘-Wno-template-id-cdtor’ is valid for C++/ObjC++ but not for C
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:11:2: warning: #warning XTRHEADS not defined -- this libXNVCtrl.a will not be thread safe! [-Wcpp]
   11 | #warning XTRHEADS not defined -- this libXNVCtrl.a will not be thread safe!
      |  ^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:32:5: warning: initialization of ‘int (*)(Display *, XExtCodes *)’ from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
   32 |     close_display,                      /* close_display */
      |     ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:32:5: note: (near initialization for ‘nvctrl_extension_hooks.close_display’)
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:23:12: note: ‘close_display’ declared here
   23 | static int close_display();
      |            ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:33:5: warning: initialization of ‘int (*)(Display *, XEvent *, xEvent *)’ {aka ‘int (*)(Display *, XEvent *, struct _xEvent *)’} from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
   33 |     wire_to_event,                      /* wire_to_event */
      |     ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:33:5: note: (near initialization for ‘nvctrl_extension_hooks.wire_to_event’)
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:24:13: note: ‘wire_to_event’ declared here
   24 | static Bool wire_to_event();
      |             ^~~~~~~~~~~~~
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:6:
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:44:37: error: conflicting types for ‘close_display’; have ‘int(Display *, XExtCodes *)’
   44 | static XEXT_GENERATE_CLOSE_DISPLAY (close_display, nvctrl_ext_info)
      |                                     ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/extutil.h:201:5: note: in definition of macro ‘XEXT_GENERATE_CLOSE_DISPLAY’
  201 | int proc (Display *dpy, XExtCodes *codes) \
      |     ^~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:23:12: note: previous declaration of ‘close_display’ with type ‘int(void)’
   23 | static int close_display();
      |            ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:311:13: error: conflicting types for ‘wire_to_event’; have ‘int(Display *, XEvent *, xEvent *)’ {aka ‘int(Display *, XEvent *, struct _xEvent *)’}
  311 | static Bool wire_to_event (Display *dpy, XEvent *host, xEvent *wire)
      |             ^~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:24:13: note: previous declaration of ‘wire_to_event’ with type ‘int(void)’
```

- [code=1] CMakeFiles/doom3.dir/sys/linux/sound.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/sys/linux/sound.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound.cpp: In member function ‘virtual bool idAudioHardwareOSS::Initialize()’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound.cpp:282:17: error: call of overloaded ‘abs(unsigned int)’ is ambiguous
  282 |         if ( abs( m_speed - PRIMARYFREQ ) > 5 ) {
      |              ~~~^~~~~~~~~~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound.cpp:282:17: note: there are 7 candidates
In file included from /usr/include/c++/15/cstdlib:83,
                 from /usr/include/c++/15/stdlib.h:36,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/../../idlib/precompiled.h:97,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound.cpp:39:
/usr/include/stdlib.h:1008:12: note: candidate 1: ‘int abs(int)’
 1008 | extern int abs (int __x) __THROW __attribute__ ((__const__)) __wur;
      |            ^~~
In file included from /usr/include/c++/15/cstdlib:87:
/usr/include/c++/15/bits/std_abs.h:143:3: note: candidate 2: ‘constexpr __float128 std::abs(__float128)’
  143 |   abs(__float128 __x)
      |   ^~~
/usr/include/c++/15/bits/std_abs.h:85:3: note: candidate 3: ‘constexpr long double std::abs(long double)’
   85 |   abs(long double __x)
      |   ^~~
/usr/include/c++/15/bits/std_abs.h:81:3: note: candidate 4: ‘constexpr float std::abs(float)’
   81 |   abs(float __x)
      |   ^~~
/usr/include/c++/15/bits/std_abs.h:77:3: note: candidate 5: ‘constexpr double std::abs(double)’
   77 |   abs(double __x)
      |   ^~~
/usr/include/c++/15/bits/std_abs.h:67:3: note: candidate 6: ‘long long int std::abs(long long int)’
   67 |   abs(long long __x) { return __builtin_llabs (__x); }
      |   ^~~
/usr/include/c++/15/bits/std_abs.h:62:3: note: candidate 7: ‘long int std::abs(long int)’
   62 |   abs(long __i) { return __builtin_labs(__i); }
      |   ^~~
At global scope:
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[252/395] Building CXX object CMakeFiles/doom3.dir/openal/stubs.cpp.o
[253/395] Building CXX object CMakeFiles/doom3.dir/sys/linux/sound_alsa.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound_alsa.cpp: In member function ‘virtual bool idAudioHardwareALSA::Flush()’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound_alsa.cpp:284:14: warning: control reaches end of non-void function [-Wreturn-type]
  284 |         Write( true );
```


### warning kinds

- [26x] command-line option ‘-Wno-class-memaccess’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-class-memaccess’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-c++20-compat’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-c++20-compat’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-conversion-null’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-conversion-null’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-delete-non-virtual-dtor’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-delete-non-virtual-dtor’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-overloaded-virtual=0’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-overloaded-virtual=0’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-register’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-register’ is valid for C++/ObjC++ but not for C
- [26x] command-line option ‘-Wno-template-id-cdtor’ is valid for C++/ObjC++ but not for C
  - cc1: warning: command-line option ‘-Wno-template-id-cdtor’ is valid for C++/ObjC++ but not for C
- [4x] ISO C++ forbids comparison between pointer and integer [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_local.cpp:1250:40: warning: ISO C++ forbids comparison between pointer and integer [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_local.cpp:1619:30: warning: ISO C++ forbids comparison between pointer and integer [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:1386:40: warning: ISO C++ forbids comparison between pointer and integer [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:1802:30: warning: ISO C++ forbids comparison between pointer and integer [-fpermissive]
- [3x] invalid conversion from ‘char’ to ‘const char*’ [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/Parser.cpp:712:36: warning: invalid conversion from ‘char’ to ‘const char*’ [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/Parser.cpp:714:37: warning: invalid conversion from ‘char’ to ‘const char*’ [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/Parser.cpp:731:36: warning: invalid conversion from ‘char’ to ‘const char*’ [-fpermissive]
- [3x] -mismatched-new-delete
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp:2214:16: warning: ‘void operator delete(void*, unsigned int)’ called on pointer returned from a mismatched allocation function [-Wmismatched-new-delete]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/ModelManager.cpp:617:16: warning: ‘void operator delete(void*, unsigned int)’ called on pointer returned from a mismatched allocation function [-Wmismatched-new-delete]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/BrushBSP.cpp:886:16: warning: ‘void operator delete(void*, unsigned int)’ called on pointer returned from a mismatched allocation function [-Wmismatched-new-delete]
- [2x] -narrowing
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/MegaTexture.cpp:364:51: warning: narrowing conversion of ‘((255 * localX) / ((int)TILE_PER_LEVEL))’ from ‘int’ to ‘byte’ {aka ‘unsigned char’} [-Wnarrowing]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/MegaTexture.cpp:364:82: warning: narrowing conversion of ‘((255 * localY) / ((int)TILE_PER_LEVEL))’ from ‘int’ to ‘byte’ {aka ‘unsigned char’} [-Wnarrowing]
- [2x] -incompatible-pointer-types
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:32:5: warning: initialization of ‘int (*)(Display *, XExtCodes *)’ from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:33:5: warning: initialization of ‘int (*)(Display *, XEvent *, xEvent *)’ {aka ‘int (*)(Display *, XEvent *, struct _xEvent *)’} from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
- [1x] -cpp
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:11:2: warning: #warning XTRHEADS not defined -- this libXNVCtrl.a will not be thread safe! [-Wcpp]
- [1x] ‘close_display’ used but never defined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:23:12: warning: ‘close_display’ used but never defined
- [1x] ‘wire_to_event’ used but never defined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:24:13: warning: ‘wire_to_event’ used but never defined
- [1x] -return-type
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/sound_alsa.cpp:284:14: warning: control reaches end of non-void function [-Wreturn-type]
- [1x] invalid conversion from ‘const char**’ to ‘char**’ [-fpermissive]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/script/Script_Compiler.cpp:233:20: warning: invalid conversion from ‘const char**’ to ‘char**’ [-fpermissive]

## windows-latest-x86-debug

status: failure

errors: 3
warnings: 5 in 3 kinds

### errors

C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(322,1): error C1189: #error:  The C++ Standard Library forbids macroizing the keyword "private". Enable warning C4005 to find the forbidden define. [D:\a\doom3.gpl\doom3.gpl\build\d3xp\d3xp.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\d3xp\script\Script_Compiler.cpp(233,13): error C2440: '=': cannot convert from 'const char *[37]' to 'char **' [D:\a\doom3.gpl\doom3.gpl\build\d3xp\d3xp.vcxproj]
C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(322,1): error C1189: #error:  The C++ Standard Library forbids macroizing the keyword "private". Enable warning C4005 to find the forbidden define. [D:\a\doom3.gpl\doom3.gpl\build\game\game.vcxproj]

### failure context


### warning kinds

- [2x] C4005
  - C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(321,9): warning C4005: 'private': macro redefinition [D:\a\doom3.gpl\doom3.gpl\build\d3xp\d3xp.vcxproj]
  - C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(321,9): warning C4005: 'private': macro redefinition [D:\a\doom3.gpl\doom3.gpl\build\game\game.vcxproj]
- [2x] C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h
  - C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(322,1): error C1189: #error:  The C++ Standard Library forbids macroizing the keyword "private". Enable warning C4005 to find the forbidden define. [D:\a\doom3.gpl\doom3.gpl\build\d3xp\d3xp.vcxproj]
  - C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\MSVC\14.51.36231\include\xkeycheck.h(322,1): error C1189: #error:  The C++ Standard Library forbids macroizing the keyword "private". Enable warning C4005 to find the forbidden define. [D:\a\doom3.gpl\doom3.gpl\build\game\game.vcxproj]
- [1x] C4293
  - D:\a\doom3.gpl\doom3.gpl\neo\d3xp\gamesys\SysCmds.cpp(338,31): warning C4293: '<<': shift count negative or too big, undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\d3xp\d3xp.vcxproj]

