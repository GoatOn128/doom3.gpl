# Compact build digest

commit: b2dce1f07b14

- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- windows-latest-x86-debug: cancelled
- windows-latest-x86-release: failure

## ubuntu-latest-x86-debug

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

FAILED: [code=1] /home/runner/work/doom3.gpl/doom3.gpl/doom.x86
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:39:(.text+0x16): undefined reference to `cgGetError'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:40:(.text+0x3a): undefined reference to `cgGetErrorString'
collect2: error: ld returned 1 exit status
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] /home/runner/work/doom3.gpl/doom3.gpl/doom.x86

```
FAILED: [code=1] /home/runner/work/doom3.gpl/doom3.gpl/doom.x86 
: && /usr/bin/c++ -m32 -g -m32 -Wl,--dependency-file=CMakeFiles/doom3.dir/link.d CMakeFiles/doom3.dir/cm/CollisionModel_contacts.cpp.o CMakeFiles/doom3.dir/cm/CollisionModel_contents.cpp.o CMakeFiles/doom3.dir/cm/CollisionModel_debug.cpp.o CMakeFiles/doom3.dir/cm/CollisionModel_files.cpp.o CMakeFiles/doom3.dir/cm/CollisionModel_load.cpp.o CMakeFiles/doom3.dir/cm/CollisionModel_rotate.cpp.o CMakeFi
/usr/bin/x86_64-linux-gnu-ld.bfd: CMakeFiles/doom3.dir/sys/linux/main.cpp.o: in function `main':
/home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:545: multiple definition of `main'; CMakeFiles/doom3.dir/sound/OggVorbis/vorbissrc/barkmel.c.o:/home/runner/work/doom3.gpl/doom3.gpl/neo/sound/OggVorbis/vorbissrc/barkmel.c:20: first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: CMakeFiles/doom3.dir/renderer/draw_arb2.cpp.o: in function `cg_error_callback()':
/home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:39:(.text+0x16): undefined reference to `cgGetError'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/doom3.gpl/doom3.gpl/neo/renderer/draw_arb2.cpp:40:(.text+0x3a): undefined reference to `cgGetErrorString'
collect2: error: ld returned 1 exit status
[395/395] Linking CXX shared library /home/runner/work/doom3.gpl/doom3.gpl/libgamex86-d3xp.so
ninja: build stopped: cannot make progress due to previous errors.
```


### warning kinds

## windows-latest-x86-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

