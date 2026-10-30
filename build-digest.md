# Build digest

commit: a5de20eca521

- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x86-debug

status: failure

errors: 7
warnings: 0 in 0 kinds

### errors

FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1308:3: error: expected unqualified-id before ‘return’
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1309:1: error: expected declaration before ‘}’ token
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:324:27: error: ‘HUGE’ was not declared in this scope
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:1513:35: error: ‘HUGE’ was not declared in this scope
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1308:3: error: expected unqualified-id before ‘return’
 1308 |   return 1;
      |   ^~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1309:1: error: expected declaration before ‘}’ token
 1309 | }
      | ^
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[98/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb.cpp.o
[99/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb2.cpp.o
[100/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_common.cpp.o
[101/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_nv10.cpp.o
[102/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_nv20.cpp.o
[103/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_r200.cpp.o
[104/395] Building CXX object CMakeFiles/doom3.dir/renderer/GuiModel.cpp.o
[105/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_init.cpp.o
[106/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_load.cpp.o
[107/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_files.cpp.o
[108/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_process.cpp.o
[109/395] Building CXX object CMakeFiles/doom3.dir/renderer/Image_program.cpp.o
[110/395] Building CXX object CMakeFiles/doom3.dir/renderer/Interaction.cpp.o
[111/395] Building CXX object CMakeFiles/doom3.dir/renderer/MegaTexture.cpp.o
[112/395] Building CXX object CMakeFiles/doom3.dir/renderer/Material.cpp.o
[113/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_ase.cpp.o
[114/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model.cpp.o
[115/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_beam.cpp.o
[116/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_liquid.cpp.o
[117/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_md3.cpp.o
[118/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_ma.cpp.o
[119/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_lwo.cpp.o
[120/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_md5.cpp.o
[121/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_prt.cpp.o
[122/395] Building CXX object CMakeFiles/doom3.dir/renderer/Model_sprite.cpp.o
[123/395] Building CXX object CMakeFiles/doom3.dir/renderer/ModelDecal.cpp.o
[124/395] Building CXX object CMakeFiles/doom3.dir/renderer/ModelManager.cpp.o
[125/395] Building CXX object CMakeFiles/doom3.dir/renderer/RenderEntity.cpp.o
[126/395] Building CXX object CMakeFiles/doom3.dir/renderer/ModelOverlay.cpp.o
[127/395] Building CXX object CMakeFiles/doom3.dir/renderer/RenderSystem.cpp.o
[128/395] Building CXX object CMakeFiles/doom3.dir/renderer/RenderSystem_init.cpp.o
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp: In member function ‘int codec::BestCodeword(unsigned char*, int, double**)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:324:27: error: ‘HUGE’ was not declared in this scope
  324 |         VQDATA bestDist = HUGE;
      |                           ^~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp: In member function ‘void codec::VQ(int, int, const unsigned char*, float*, double**, bool)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:1513:35: error: ‘HUGE’ was not declared in this scope
 1513 |                 double bestDist = HUGE;
      |                                   ^~~~
At global scope:
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[213/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/renderbump/renderbump.cpp.o
[214/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o
[215/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roqParam.cpp.o
[216/395] Building CXX object CMakeFiles/doom3.dir/ui/BindWindow.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/roq.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/ui/ChoiceWindow.cpp.o
[219/395] Building CXX object CMakeFiles/doom3.dir/ui/FieldWindow.cpp.o
[220/395] Building CXX object CMakeFiles/doom3.dir/ui/DeviceContext.cpp.o
[221/395] Building CXX object CMakeFiles/doom3.dir/ui/EditWindow.cpp.o
[222/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBearShootWindow.cpp.o
[223/395] Building CXX object CMakeFiles/doom3.dir/ui/GameBustOutWindow.cpp.o
[224/395] Building CXX object CMakeFiles/doom3.dir/ui/GuiScript.cpp.o
[225/395] Building CXX object CMakeFiles/doom3.dir/ui/ListGUI.cpp.o
[226/395] Building CXX object CMakeFiles/doom3.dir/ui/GameSSDWindow.cpp.o
[227/395] Building CXX object CMakeFiles/doom3.dir/ui/MarkerWindow.cpp.o
[228/395] Building CXX object CMakeFiles/doom3.dir/ui/ListWindow.cpp.o
[229/395] Building CXX object CMakeFiles/doom3.dir/ui/RegExp.cpp.o
[230/395] Building CXX object CMakeFiles/doom3.dir/ui/RenderWindow.cpp.o
[231/395] Building CXX object CMakeFiles/doom3.dir/ui/SliderWindow.cpp.o
[232/395] Building CXX object CMakeFiles/doom3.dir/ui/SimpleWindow.cpp.o
[233/395] Building CXX object CMakeFiles/doom3.dir/ui/UserInterface.cpp.o
[234/395] Building CXX object CMakeFiles/doom3.dir/ui/Winvar.cpp.o
[235/395] Building CXX object CMakeFiles/doom3.dir/sys/sys_local.cpp.o
[236/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_net.cpp.o
[237/395] Building CXX object CMakeFiles/doom3.dir/ui/Window.cpp.o
[238/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_signal.cpp.o
[239/395] Building CXX object CMakeFiles/doom3.dir/sys/posix/posix_main.cpp.o
[240/395] Building CXX object CMakeFiles/doom3.dir/sys/linux/stack.cpp.o
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 7
warnings: 522 in 5 kinds

### errors

FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1308:3: error: expected unqualified-id before ‘return’
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1309:1: error: expected declaration before ‘}’ token
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:324:27: error: ‘HUGE’ was not declared in this scope
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:1513:35: error: ‘HUGE’ was not declared in this scope
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/renderer/Cinematic.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1308:3: error: expected unqualified-id before ‘return’
 1308 |   return 1;
      |   ^~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/Cinematic.cpp:1309:1: error: expected declaration before ‘}’ token
 1309 | }
      | ^
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[101/395] Building CXX object CMakeFiles/doom3.dir/renderer/draw_arb.cpp.o
[102/395] Building CXX object CMakeFiles/doom3.dir/framework/async/AsyncServer.cpp.o
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
  184 | ID_INLINE void idList<type>::Clear( void ) {
      |                ^~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/containers/List.h:173:14: note: called from here
  173 |         Clear();
      |         ~~~~~^~
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Dict.h: In member function ‘void idAsyncServer::RunFrame()’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/async/../../idlib/../idlib/Dict.h:173:11: warning: inlining failed in call to ‘idDict::~idDict() noexcept’: call is unlikely and code size would grow [-Winline]
```

- [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o

```
FAILED: [code=1] CMakeFiles/doom3.dir/tools/compilers/roqvq/codec.cpp.o 
/usr/bin/c++ -DGLIMP -DID_ENABLE_CURL=0 -DXTHREADS -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/build/generated -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/ogg -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbis -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc -I/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/oss/include -I/home/run
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp: In member function ‘int codec::BestCodeword(unsigned char*, int, double**)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:324:27: error: ‘HUGE’ was not declared in this scope
  324 |         VQDATA bestDist = HUGE;
      |                           ^~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp: In member function ‘void codec::VQ(int, int, const unsigned char*, float*, double**, bool)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/roqvq/codec.cpp:1513:35: error: ‘HUGE’ was not declared in this scope
 1513 |                 double bestDist = HUGE;
      |                                   ^~~~
At global scope:
cc1plus: note: unrecognized command-line option ‘-Wno-permissive’ may have been intended to silence earlier diagnostics
[216/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/usurface.cpp.o
[217/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/dmap/ubrush.cpp.o
[218/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/roqvq/NSBitmapImageRep.cpp.o
[219/395] Building CXX object CMakeFiles/doom3.dir/tools/compilers/renderbump/renderbump.cpp.o
In function ‘void RasterizeTriangle(const srfTriangles_t*, const idVec3*, int, renderBump_t*)’,
    inlined from ‘void RenderBumpTriangles(srfTriangles_t*, renderBump_t*)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:976:20,
    inlined from ‘void RenderBump_f(const idCmdArgs&)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:1308:22:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:844:38: warning: ‘sampledColor[0]’ may be used uninitialized [-Wmaybe-uninitialized]
  844 |                         colorDest[0] = sampledColor[0];
      |                         ~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp: In function ‘void RenderBump_f(const idCmdArgs&)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:640:17: note: ‘sampledColor[0]’ was declared here
  640 |         byte    sampledColor[4];
      |                 ^~~~~~~~~~~~
In function ‘void RasterizeTriangle(const srfTriangles_t*, const idVec3*, int, renderBump_t*)’,
    inlined from ‘void RenderBumpTriangles(srfTriangles_t*, renderBump_t*)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:976:20,
    inlined from ‘void RenderBump_f(const idCmdArgs&)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:1308:22:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:845:38: warning: ‘sampledColor[1]’ may be used uninitialized [-Wmaybe-uninitialized]
  845 |                         colorDest[1] = sampledColor[1];
      |                         ~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp: In function ‘void RenderBump_f(const idCmdArgs&)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:640:17: note: ‘sampledColor[1]’ was declared here
  640 |         byte    sampledColor[4];
      |                 ^~~~~~~~~~~~
In function ‘void RasterizeTriangle(const srfTriangles_t*, const idVec3*, int, renderBump_t*)’,
    inlined from ‘void RenderBumpTriangles(srfTriangles_t*, renderBump_t*)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:976:20,
    inlined from ‘void RenderBump_f(const idCmdArgs&)’ at /home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:1308:22:
/home/runner/work/doom3.gpl/doom3.gpl/neo/tools/compilers/renderbump/renderbump.cpp:846:38: warning: ‘sampledColor[2]’ may be used uninitialized [-Wmaybe-uninitialized]
```


### warning kinds

- [333x] -inline
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
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:1647:28: warning: inlining failed in call to ‘stbi_uc stbi__get8(stbi__context*)’: --param inline-unit-growth limit reached [-Winline]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/../third-party/stb/stb_image.h:1647:28: warning: inlining failed in call to ‘stbi_uc stbi__get8(stbi__context*)’: call is unlikely and code size would grow [-Winline]
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
- [2x] array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:142:26: warning: array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]

## windows-latest-x86-debug

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\config-win32.h(30,1): error C1189: #error:  This manual configuration requires MSVC 2010-2013 (IDE Project builds) [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]

### failure context


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

