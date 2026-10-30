# Build digest

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

## ubuntu-latest-x86-release

status: failure

errors: 14
warnings: 682 in 25 kinds

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
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:34:10: fatal error: jpeg-6/jpeglib.h: No such file or directory
   34 | #include "jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~
compilation terminated.
[99/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb.cpp.o
[100/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb2.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp: In function ‘void R_LoadARBProgram(int)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:418:9: warning: ‘start’ may be used uninitialized [-Wmaybe-uninitialized]
  418 |         if ( !start ) {
      |         ^~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:372:18: note: ‘start’ was declared here
  372 |         char    *start, *end;
      |                  ^~~~~
At global scope:
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[101/395] Building CXX object CMakeFiles/doom3.dir/framework/async/AsyncServer.cpp.o
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Lib.h:238,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/AsyncServer.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Dict.h: In member function ‘void idAsyncServer::ProcessReliableClientMessages(int)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Dict.h:173:11: warning: inlining failed in call to ‘idDict::~idDict() noexcept’: call is unlikely and code size would grow [-Winline]
  173 | ID_INLINE idDict::~idDict( void ) {
      |           ^~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/AsyncServer.cpp:1368:25: note: called from here
 1368 |                         }
      |                         ^
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Lib.h:171:
In destructor ‘idList<type>::~idList() [with type = idStr]’,
    inlined from ‘void idAsyncServer::ProcessDownloadRequestMessage(netadr_t, const idBitMsg&)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/AsyncServer.cpp:2825:1:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/containers/List.h:184:16: warning: inlining failed in call to ‘void idList<type>::Clear() [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  184 | ID_INLINE void idList<type>::Clear( void ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/containers/List.h:173:14: note: called from here
  173 |         Clear();
      |         ~~~~~^~
In destructor ‘idList<type>::~idList() [with type = idStr]’,
    inlined from ‘void idAsyncServer::ProcessDownloadRequestMessage(netadr_t, const idBitMsg&)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/AsyncServer.cpp:2825:1:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/containers/List.h:184:16: warning: inlining failed in call to ‘void idList<type>::Clear() [with type = idStr]’: call is unlikely and code size would grow [-Winline]
```

- [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Image_files.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
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
[108/395] Building CXX object CMakeFiles/doom3.dir/renderer/GuiModel.cpp.o
[109/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_load.cpp.o
[110/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_process.cpp.o
[111/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_program.cpp.o
[112/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_init.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp: In member function ‘void idImageManager::PrintMemInfo(MemInfo_t*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Image_init.cpp:2214:16: warning: ‘void operator delete(void*, unsigned int)’ called on pointer returned from a mismatched allocation function [-Wmismatched-new-delete]
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.h:42,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[214/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/NSBitmapImageRep.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Lib.h:171,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:28:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h: In member function ‘void roqParam::InitFromFile(const char*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:263:40: note: called from here
  263 |                         file.AssureSize( num_files, empty );
      |                         ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/NSBitmapImageRep.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Lib.h:171,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:28:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h: In member function ‘void roqParam::InitFromFile(const char*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:263:40: note: called from here
  263 |                         file.AssureSize( num_files, empty );
      |                         ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:264:40: note: called from here
  264 |                         file.AssureSize( num_files, empty );
      |                         ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Lib.h:210:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  509 | ID_INLINE void idStr::operator=( const idStr &text ) {
      |                ^~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:273:53: note: called from here
  273 |                                         file[field] = token;
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.cpp:31:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roq.h:36:10: fatal error: ../../../renderer/jpeg-6/jpeglib.h: No such file or directory
   36 | #include "../../../renderer/jpeg-6/jpeglib.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Lib.h:171,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:28:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h: In member function ‘void roqParam::InitFromFile(const char*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:263:40: note: called from here
  263 |                         file.AssureSize( num_files, empty );
      |                         ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  470 | ID_INLINE void idList<type>::AssureSize( int newSize, const type &initValue ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:264:40: note: called from here
  264 |                         file.AssureSize( num_files, empty );
      |                         ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Lib.h:210:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  509 | ID_INLINE void idStr::operator=( const idStr &text ) {
      |                ^~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:273:53: note: called from here
  273 |                                         file[field] = token;
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  509 | ID_INLINE void idStr::operator=( const idStr &text ) {
      |                ^~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/roqParam.cpp:278:46: note: called from here
  278 |                                         arg1 = token;
      |                                         ~~~~~^~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:736:16: warning: inlining failed in call to ‘void idStr::Append(const idStr&)’: call is unlikely and code size would grow [-Winline]
  736 | ID_INLINE void idStr::Append( const idStr &text ) {
```

- [code=1] CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/sys/linux/libXNVCtrl/NVCtrl.c.o 
/usr/bin/cc -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/runn
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
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
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
[253/395] Building CXX object CMakeFiles/doom3.dir/TypeInfo/TypeInfoGen.cpp.o
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/Lib.h:171,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/precompiled.h:113,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/TypeInfoGen.cpp:28:
/home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/List.h: In member function ‘void idTypeInfoGen::ParseScope(const char*, bool, idParser&, idClassTypeInfo*)’:
```


### warning kinds

- [289x] -inline
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/List.h:184:16: warning: inlining failed in call to ‘void idList<type>::Clear() [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/StrList.h:65:16: warning: inlining failed in call to ‘void idList<type>::Sort(int (*)(const type*, const type*)) [with type = idStr]’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/HashTable.h:145:11: warning: inlining failed in call to ‘idHashTable<Type>::~idHashTable() noexcept [with Type = idList<idStr>]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idStr]’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/DeclManager.cpp:176:7: warning: inlining failed in call to ‘idDeclManagerLocal::idDeclManagerLocal()’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/Str.h:387:11: warning: inlining failed in call to ‘idStr::idStr(const char*)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/Dict.h:173:11: warning: inlining failed in call to ‘idDict::~idDict() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Session_local.h:71:3: warning: inlining failed in call to ‘mapSpawnData_t::~mapSpawnData_t() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/List.h:207:16: warning: inlining failed in call to ‘void idList<type>::DeleteContents(bool) [with type = idDict*]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/Str.h:348:11: warning: inlining failed in call to ‘idStr::idStr(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/List.h:360:16: warning: inlining failed in call to ‘void idList<type>::Resize(int) [with type = idStr]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idStr]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Dict.h:173:11: warning: inlining failed in call to ‘idDict::~idDict() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../framework/async/ServerScan.h:72:7: warning: inlining failed in call to ‘idServerScan::~idServerScan() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/containers/List.h:184:16: warning: inlining failed in call to ‘void idList<type>::Clear() [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/../idlib/../idlib/Str.h:387:11: warning: inlining failed in call to ‘idStr::idStr(const char*)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<idDrawVert>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<int>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<shadowCache_s>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<idPlane>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<silEdge_t>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:203:16: warning: inlining failed in call to ‘void idBTree<objType, keyType, maxChildrenPerNode>::Remove(idBTreeNode<objType, keyType>*) [with objType = idDynamicBlock<dominantTri_s>; keyType = int; int maxChildrenPerNode = 4]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/containers/BTree.h:114:41: warning: inlining failed in call to ‘idBTreeNode<objType, keyType>* idBTree<objType, keyType, maxChildrenPerNode>::Add(objType*, keyType) [with objType = idDynamicBlock<int>; keyType = int; int maxChildrenPerNode = 4]’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/mdct.c:317:11: warning: inlining failed in call to ‘mdct_butterflies.isra’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/containers/PlaneSet.h:51:15: warning: inlining failed in call to ‘int idPlaneSet::FindPlane(const idPlane&, float, float)’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/geometry/Surface.h:145:11: warning: inlining failed in call to ‘idSurface::~idSurface() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/containers/List.h:470:16: warning: inlining failed in call to ‘void idList<type>::AssureSize(int, const type&) [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/../../../idlib/../idlib/Str.h:736:16: warning: inlining failed in call to ‘void idStr::Append(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idStr]’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:184:16: warning: inlining failed in call to ‘void idList<type>::Clear() [with type = idStr]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/HashTable.h:145:11: warning: inlining failed in call to ‘idHashTable<Type>::~idHashTable() noexcept [with Type = const idMaterial*]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/guied/../../idlib/../idlib/Dict.h:173:11: warning: inlining failed in call to ‘idDict::~idDict() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/RegExp.h:108:11: warning: inlining failed in call to ‘idRegisterList::~idRegisterList() noexcept’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idWinVar*]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = drawWin_t]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idWindow*]’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idWinVar*]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/math/Extrapolate.h:119:16: warning: inlining failed in call to ‘type idExtrapolate<type>::GetCurrentValue(float) const [with type = idVec4]’: --param max-inline-insns-single limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idClassTypeInfo*]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/Str.h:348:11: warning: inlining failed in call to ‘idStr::idStr(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/Str.h:736:16: warning: inlining failed in call to ‘void idStr::Append(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/Str.h:509:16: warning: inlining failed in call to ‘void idStr::operator=(const idStr&)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idEnumTypeInfo*]’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/Str.h:749:16: warning: inlining failed in call to ‘void idStr::Append(const char*)’: call is unlikely and code size would grow [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/List.h:646:15: warning: inlining failed in call to ‘int idList<type>::Append(const type&) [with type = idClassVariableInfo]’: --param max-inline-insns-single limit reached [-Winline]
- [163x] -maybe-uninitialized
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:95:27: warning: ‘planes’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Plane.h:325:46: warning: ‘plane.idPlane::d’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Plane.h:362:12: warning: ‘plane.idPlane::d’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Math.h:780:19: warning: ‘s’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:1175:41: warning: ‘unsortedSilEdges’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/cm/CollisionModel_load.cpp:2058:25: warning: ‘planeType’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/cm/CollisionModel_load.cpp:1924:46: warning: ‘planeDist’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:439:44: warning: ‘dir.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:439:44: warning: ‘dir.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:439:44: warning: ‘dir.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:452:50: warning: ‘stepLeft.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:452:50: warning: ‘stepLeft.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/math/Vector.h:452:50: warning: ‘stepLeft.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:418:9: warning: ‘start’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/math/Vector.h:431:48: warning: ‘origin.idDrawVert::xyz.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/math/Vector.h:431:39: warning: ‘origin.idDrawVert::xyz.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/math/Vector.h:431:30: warning: ‘origin.idDrawVert::xyz.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Model_lwo.cpp:402:13: warning: ‘key’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Model_lwo.cpp:2060:30: warning: ‘tex’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Model_lwo.cpp:2082:24: warning: ‘shdr’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Model_lwo.cpp:1993:23: warning: ‘i’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../idlib/../idlib/math/Vector.h:448:50: warning: ‘scale’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/RenderWorld_portals.cpp:388:52: warning: ‘firstPortalStack’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_deform.cpp:539:69: warning: ‘plane.idPlane::d’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1085:101: warning: ‘oldBounds.idBounds::b[0].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1081:93: warning: ‘oldBounds.idBounds::b[0].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1082:101: warning: ‘oldBounds.idBounds::b[0].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1083:101: warning: ‘oldBounds.idBounds::b[1].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1084:101: warning: ‘oldBounds.idBounds::b[1].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1085:101: warning: ‘oldBounds.idBounds::b[1].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1265:47: warning: ‘oldFloatTime’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1266:53: warning: ‘oldTime’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1505:55: warning: ‘oldFloatTime’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_light.cpp:1506:61: warning: ‘oldTime’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/tr_rendertools.cpp:1793:87: warning: ‘textLen’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/lpc.c:77:8: warning: ‘*aut’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/mapping0.c:601:9: warning: ‘mag_memo’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/mapping0.c:601:9: warning: ‘mag_sort’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/psy.c:633:12: warning: ‘A’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/psy.c:633:16: warning: ‘B’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/psy.c:633:7: warning: ‘D’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/psy.c:783:3: warning: ‘work’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/vorbisfile.c:1011:17: warning: ‘eosflag’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘area.aasArea_s::bounds.idBounds::b[0].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘area.aasArea_s::bounds.idBounds::b[0].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘area.aasArea_s::bounds.idBounds::b[0].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘area.aasArea_s::bounds.idBounds::b[1].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘area.aasArea_s::bounds.idBounds::b[1].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘area.aasArea_s::bounds.idBounds::b[1].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘area.aasArea_s::center.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘area.aasArea_s::center.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘area.aasArea_s::center.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../tools/compilers/aas/AASFile.h:155:16: warning: ‘area.aasArea_s::travelFlags’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:15: warning: ‘*(const __vector(4) float*)((char*)&area + offsetof(aasArea_t, aasArea_s::bounds.idBounds::b[0].idVec3::x))’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:15: warning: ‘area’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:426:15: warning: ‘area.aasArea_s::center.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../tools/compilers/aas/AASFile.h:155:16: warning: ‘area.aasArea_s::reach’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../tools/compilers/aas/AASFile.h:155:16: warning: ‘area.aasArea_s::rev_reach’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:48: warning: ‘floor_bestNormal.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:48: warning: ‘floor_bestNormal.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:48: warning: ‘floor_bestNormal.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:16: warning: ‘floor_bestStart.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:16: warning: ‘floor_bestStart.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:16: warning: ‘floor_bestStart.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:297:33: warning: ‘floor_bestEnd.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/AASReach.cpp:668:67: warning: ‘floor_bestArea1FloorEdgeNum’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:452:50: warning: ‘floor_bestEnd.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:452:50: warning: ‘floor_bestEnd.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘water_bestStart.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘water_bestStart.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘water_bestStart.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:452:50: warning: ‘water_bestEnd.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:452:50: warning: ‘water_bestEnd.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:452:50: warning: ‘water_bestEnd.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:448:50: warning: ‘water_bestNormal.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:448:50: warning: ‘water_bestNormal.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/../../../idlib/../idlib/math/Vector.h:448:50: warning: ‘water_bestNormal.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/BrushBSP.cpp:1124:44: warning: ‘side’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/BrushBSP.cpp:1185:38: warning: ‘side’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/aas/BrushBSP.cpp:1401:35: warning: ‘nextPortal’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/leakfile.cpp:100:35: warning: ‘nextportal’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/leakfile.cpp:79:22: warning: ‘nextnode’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/optimize.cpp:1141:38: warning: ‘second’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/optimize.cpp:1160:45: warning: ‘third’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:431:24: warning: ‘middle’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/optimize.cpp:1171:59: warning: ‘checkNext’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:431:24: warning: ‘second’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:431:24: warning: ‘third’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/optimize.cpp:665:9: warning: ‘v1’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/optimize.cpp:665:9: warning: ‘v3’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘split.idDrawVert::tangents[0].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘split.idDrawVert::tangents[0].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘split.idDrawVert::tangents[0].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:424:11: warning: ‘split.idDrawVert::tangents[1].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:425:11: warning: ‘split.idDrawVert::tangents[1].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/math/Vector.h:426:11: warning: ‘split.idDrawVert::tangents[1].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/geometry/DrawVert.h:40:7: warning: ‘split.idDrawVert::color[0]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/geometry/DrawVert.h:40:7: warning: ‘split.idDrawVert::color[1]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/geometry/DrawVert.h:40:7: warning: ‘split.idDrawVert::color[2]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/dmap/../../../idlib/../idlib/geometry/DrawVert.h:40:7: warning: ‘split.idDrawVert::color[3]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:844:38: warning: ‘sampledColor[0]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:845:38: warning: ‘sampledColor[1]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:846:38: warning: ‘sampledColor[2]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:847:38: warning: ‘sampledColor[3]’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/ui/../idlib/../idlib/containers/List.h:661:9: warning: ‘fontInfo’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Matrix.h:1821:75: warning: ‘child’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/IK.cpp:609:48: warning: ‘newPivotFoot’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/SmokeParticles.cpp:274:40: warning: ‘active’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘force.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:439:44: warning: ‘torque.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Matrix.h:1821:75: warning: ‘child’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[0].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[1].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:424:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:425:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Vector.h:426:15: warning: ‘<unnamed>.idRotation::axis.idMat3::mat[2].idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../idlib/math/Matrix.h:742:92: warning: ‘a2.idVec3::z’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/../idlib/../d3xp/Entity.h:607:22: warning: ‘*(unsigned char*)((char*)&ts + offsetof(SetTimeState, SetTimeState::previousFast))’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/AFEntity.cpp:3227:9: warning: ‘head’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/AFEntity.cpp:3370:9: warning: ‘head’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/IK.cpp:609:48: warning: ‘newPivotFoot’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/SmokeParticles.cpp:291:40: warning: ‘active’ may be used uninitialized [-Wmaybe-uninitialized]
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
- [17x] -unused-result
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Unzip.cpp:1134:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Unzip.cpp:1105:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3646:38: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:340:15: warning: ignoring return value of ‘char* getcwd(char*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:638:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:640:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:642:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:647:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:652:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:653:14: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:692:30: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_main.cpp:742:38: warning: ignoring return value of ‘ssize_t write(int, const void*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:391:39: warning: ignoring return value of ‘int system(const char*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:404:31: warning: ignoring return value of ‘int system(const char*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
- [7x] -stringop-truncation
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Session.cpp:1445:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_signal.cpp:165:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_network.cpp:1518:24: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_local.cpp:2335:32: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_network.cpp:1563:24: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:4795:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:2599:32: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
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
- [2x] array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:142:26: warning: array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]
- [2x] -incompatible-pointer-types
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:32:5: warning: initialization of ‘int (*)(Display *, XExtCodes *)’ from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/libXNVCtrl/NVCtrl.c:33:5: warning: initialization of ‘int (*)(Display *, XEvent *, xEvent *)’ {aka ‘int (*)(Display *, XEvent *, struct _xEvent *)’} from incompatible pointer type ‘int (*)(void)’ [-Wincompatible-pointer-types]
- [1x] array subscript 8 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../idlib/Token.h:121:37: warning: array subscript 8 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
- [1x] array subscript 7 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../idlib/Token.h:121:37: warning: array subscript 7 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
- [1x] array subscript 10 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../idlib/Token.h:121:37: warning: array subscript 10 is outside array bounds of ‘void [76]’ [-Warray-bounds=]
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

## windows-latest-x86-release

status: cancelled

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

