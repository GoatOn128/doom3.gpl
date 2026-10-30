# Compact build digest

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

## windows-latest-x86-debug

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\config-win32.h(30,1): error C1189: #error:  This manual configuration requires MSVC 2010-2013 (IDE Project builds) [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]

### failure context


### warning kinds

