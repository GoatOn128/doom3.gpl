# Build digest

commit: 2d1b7247550e

- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x86-debug

status: failure

errors: 214
warnings: 7 in 1 kinds

### errors

FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD5.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Angles.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/math/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Lcp.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Math.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Matrix.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Ode.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Plane.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Pluecker.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Quat.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Polynomial.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Rotation.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Simd.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Simd_Generic.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Vector.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/BitMsg.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/LangDict.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Lexer.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Lib.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/containers/HashIndex.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/containers/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Dict.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Str.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Parser.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/MapFile.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/CmdArgs.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Token.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Base64.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Timer.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Heap.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum_gcc.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/main.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/TypeInfoGen.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/CmdSystem.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/CVarSystem.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/File.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/Unzip.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_debug.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_pathing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_routing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_events.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_pathing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_Vagary.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/anim/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Blend.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Import.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Testmodel.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/Class.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/gamesys/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/DebugGraph.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/Event.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SaveGame.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SysCmds.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SysCvar.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/TypeInfo.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Clip.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Constant.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Drag.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Field.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Spring.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Actor.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_AF.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Base.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Monster.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Parametric.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Player.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_RigidBody.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Static.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Push.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_StaticMulti.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Compiler.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/script/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Interpreter.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Program.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Thread.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Actor.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/AF.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/AFEntity.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/BrittleFracture.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Camera.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Entity.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Fx.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Game_local.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Game_network.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/GameEdit.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/IK.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Item.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Light.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Misc.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Moveable.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Mover.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/MultiplayerGame.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Player.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/PlayerIcon.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/PlayerView.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Projectile.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/SecurityCamera.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Pvs.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/SmokeParticles.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Sound.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Trigger.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Target.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Weapon.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/WorldSpawn.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_debug.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_pathing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_routing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_events.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_pathing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_Vagary.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/anim/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Blend.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Import.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Testmodel.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/Class.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/gamesys/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/DebugGraph.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/Event.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SaveGame.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SysCmds.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SysCvar.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/TypeInfo.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Clip.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Constant.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Drag.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Field.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Grab.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Spring.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Actor.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_AF.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Base.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Monster.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Parametric.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Player.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_RigidBody.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Static.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_StaticMulti.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Push.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Compiler.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/script/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Interpreter.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Program.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Thread.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Actor.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/AF.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/AFEntity.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/BrittleFracture.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Camera.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Entity.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Fx.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Game_local.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Game_network.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/GameEdit.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Grabber.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/IK.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Item.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Light.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Misc.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Moveable.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Mover.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/MultiplayerGame.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Player.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/PlayerIcon.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/PlayerView.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Projectile.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Pvs.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/SecurityCamera.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Sound.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/SmokeParticles.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Target.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Trigger.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Weapon.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/WorldSpawn.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/__/idlib/precompiled.cpp.o
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[2/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[3/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/g
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[3/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/g
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/g
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idli
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/g
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idli
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wor
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/g
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idli
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wor
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3.
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idli
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wor
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3.
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idli
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wor
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3.
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/doo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wor
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3.
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/doo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/i
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3.
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/doo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/i
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[13/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32.cpp:2:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geom
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/doo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/i
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[13/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32.cpp:2:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[14/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o 
/usr/bin/c++ -D_DEBUG -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -g -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/MD4.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/MD4.cpp:2:
```


### warning kinds

- [7x] ‘__GNUC__’ redefined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/HashTable.h:366:9: warning: ‘__GNUC__’ redefined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/HashTable.h:366:9: warning: ‘__GNUC__’ redefined

## ubuntu-latest-x86-release

status: failure

errors: 214
warnings: 7 in 1 kinds

### errors

FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Angles.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/math/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD5.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Lcp.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Math.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Ode.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Matrix.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Plane.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Pluecker.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Polynomial.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Quat.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Rotation.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Simd.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Simd_Generic.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/math/Vector.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/BitMsg.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/LangDict.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Lexer.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Lib.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/containers/HashIndex.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/containers/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Dict.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Str.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Parser.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/MapFile.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/CmdArgs.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Token.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Base64.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Timer.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum_gcc.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/Heap.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/main.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/TypeInfoGen.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/CmdSystem.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/CVarSystem.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/File.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/Unzip.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_pathing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_debug.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AAS_routing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_events.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_pathing.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/ai/AI_Vagary.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/anim/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Blend.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Import.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/anim/Anim_Testmodel.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/Class.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/gamesys/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/DebugGraph.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/Event.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SaveGame.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SysCmds.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/SysCvar.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/gamesys/TypeInfo.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/physics/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Clip.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Drag.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Constant.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Field.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Force_Spring.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Actor.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_AF.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Base.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Monster.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Parametric.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Player.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_Static.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_RigidBody.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Physics_StaticMulti.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/physics/Push.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Compiler.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/script/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Interpreter.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Program.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/script/Script_Thread.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/AF.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/game/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] game/CMakeFiles/game.dir/Actor.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/AFEntity.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/BrittleFracture.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Entity.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Camera.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Fx.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Game_local.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/GameEdit.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Game_network.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/IK.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Item.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Light.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Misc.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Moveable.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Mover.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/MultiplayerGame.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Player.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/PlayerIcon.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/PlayerView.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Projectile.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Pvs.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/SecurityCamera.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Sound.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/SmokeParticles.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Target.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Trigger.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/WorldSpawn.cpp.o
FAILED: [code=1] game/CMakeFiles/game.dir/Weapon.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/ai/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_debug.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_pathing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AAS_routing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_events.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_pathing.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/ai/AI_Vagary.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/anim/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Blend.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Testmodel.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/anim/Anim_Import.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/Class.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/gamesys/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/DebugGraph.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/Event.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SaveGame.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SysCvar.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/SysCmds.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/gamesys/TypeInfo.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Clip.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/physics/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Constant.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Drag.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Field.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Grab.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Force_Spring.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_AF.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Actor.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Base.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Monster.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Player.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Parametric.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_RigidBody.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_Static.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Physics_StaticMulti.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Compiler.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/script/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/physics/Push.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Thread.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Interpreter.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/script/Script_Program.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Actor.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/AFEntity.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/AF.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Camera.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/BrittleFracture.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Entity.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Game_local.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Fx.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Game_network.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/IK.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Item.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/GameEdit.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Grabber.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Light.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Misc.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Mover.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Moveable.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/PlayerIcon.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/MultiplayerGame.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Player.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/PlayerView.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Pvs.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Projectile.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/SecurityCamera.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/SmokeParticles.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Target.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Sound.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Weapon.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/Trigger.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/__/idlib/precompiled.cpp.o
FAILED: [code=1] d3xp/CMakeFiles/d3xp.dir/WorldSpawn.cpp.o
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Box.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Box.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[2/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[3/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Bounds.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Bounds.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[3/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idl
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Frustum.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Frustum.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[4/439] Building CXX object idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idl
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -MF idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o.d -o idlib/CMakeFiles/idlib.dir/bv/Sphere.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/Sphere.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/bv/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[5/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idl
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/DrawVert.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/DrawVert.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[6/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idl
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding2D.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idl
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[7/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Winding.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[8/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/do
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_SweptSpline.cpp.o -c /home/runner/wo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_SweptSpline.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[9/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/do
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geo
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[10/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/do
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[13/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32.cpp:2:
```

- [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o

```
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/Surface_Patch.cpp.o -c /home/runner/work/doom3.gpl/doom3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Surface_Patch.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[11/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/JointTransform.cpp.o -c /home/runner/work/doom3.gpl/do
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/JointTransform.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[12/439] Building CXX object idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -MF idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o.d -o idlib/CMakeFiles/idlib.dir/geometry/TraceModel.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:29:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[13/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/CRC32.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC3
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/CRC32.cpp:2:
/home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../../renderer/qgl.h:51:10: fatal error: GL/gl.h: No such file or directory
   51 | #include <GL/gl.h>
      |          ^~~~~~~~~
compilation terminated.
[14/439] Building CXX object idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o
FAILED: [code=1] idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o 
/usr/bin/c++ -D__IDLIB__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -m32 -O3 -DNDEBUG -fPIC -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -MD -MT idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o -MF idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o.d -o idlib/CMakeFiles/idlib.dir/hashing/MD4.cpp.o -c /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/MD4.cpp
In file included from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/../precompiled.h:142,
                 from /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/hashing/MD4.cpp:2:
```


### warning kinds

- [7x] ‘__GNUC__’ redefined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/TypeInfo/../idlib/../idlib/containers/HashTable.h:366:9: warning: ‘__GNUC__’ redefined
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/../idlib/../idlib/containers/HashTable.h:366:9: warning: ‘__GNUC__’ redefined

## windows-latest-x86-debug

status: failure

errors: 2
warnings: 3074 in 3 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(1501,28): error C3688: invalid literal suffix 'S_COLOR_RED'; literal operator or literal operator template 'operator ""S_COLOR_RED' not found [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(1527,29): error C3688: invalid literal suffix 'S_COLOR_RED'; literal operator or literal operator template 'operator ""S_COLOR_RED' not found [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]

### failure context


### warning kinds

- [3070x] C4458
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Random.h(62,39): warning C4458: declaration of 'seed' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Random.h(124,50): warning C4458: declaration of 'seed' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Complex.h(109,44): warning C4458: declaration of 'r' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Complex.h(109,59): warning C4458: declaration of 'i' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(114,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(114,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,71): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,71): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,86): warning C4458: declaration of 'w' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,43): warning C4458: declaration of 'radius' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,63): warning C4458: declaration of 'theta' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,82): warning C4458: declaration of 'phi' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,37): warning C4458: declaration of 'pitch' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,50): warning C4458: declaration of 'yaw' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,61): warning C4458: declaration of 'roll' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,35): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,44): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,53): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,62): warning C4458: declaration of 'w' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,36): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,45): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,54): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(152,52): warning C4458: declaration of 'origin' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(156,50): warning C4458: declaration of 'axis' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,42): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,55): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,67): warning C4458: declaration of 'dLeft' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,80): warning C4458: declaration of 'dUp' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(169,45): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(169,58): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(178,51): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(183,50): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\DrawVert.h(99,44): warning C4458: declaration of 'color' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(892,40): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(896,41): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(904,34): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(908,35): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.h(298,39): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\containers\StrPool.h(89,50): warning C4458: declaration of 'caseSensitive' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(518,53): warning C4458: declaration of 'base' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(518,69): warning C4458: declaration of 'newBase' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(526,53): warning C4458: declaration of 'base' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(526,69): warning C4458: declaration of 'newBase' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(146,34): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(147,31): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(148,33): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(149,33): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,42): warning C4458: declaration of 'name' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,60): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,71): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,90): warning C4458: declaration of 'description' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,14): warning C4458: declaration of 'valueMin' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,30): warning C4458: declaration of 'valueMax' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,53): warning C4458: declaration of 'valueStrings' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,83): warning C4458: declaration of 'valueCompletion' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1204,101): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1215,95): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1376,101): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_Patch.cpp(477,101): warning C4458: declaration of 'width' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_SweptSpline.cpp(38,64): warning C4458: declaration of 'spline' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_SweptSpline.cpp(50,69): warning C4458: declaration of 'sweptSpline' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2263,83): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2288,98): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2308,99): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1917,74): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1947,89): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1960,90): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\TraceModel.cpp(921,10): warning C4458: declaration of 'verts' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Lcp.cpp(122,58): warning C4458: declaration of 'b' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Lcp.cpp(860,61): warning C4458: declaration of 'b' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(957,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(1628,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(2775,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Polynomial.cpp(39,60): warning C4458: declaration of 'degree' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(120,60): warning C4458: declaration of 'punctuations' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(436,35): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(534,33): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(576,35): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(775,40): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(820,34): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(920,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(938,63): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(992,39): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1028,62): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1073,61): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1098,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1114,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1135,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1159,43): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1172,40): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1228,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1250,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1265,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1448,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1497,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1591,36): warning C4458: declaration of 'filename' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1594,6): warning C4458: declaration of 'length' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1646,47): warning C4458: declaration of 'length' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(167,62): warning C4458: declaration of 'definehash' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(180,50): warning C4458: declaration of 'definehash' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(352,42): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(369,43): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(417,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(578,41): warning C4458: declaration of 'tokens' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1210,6): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1251,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1272,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1368,40): warning C4458: declaration of 'tokens' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1987,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(2009,6): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(2990,30): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(3013,37): warning C4458: declaration of 'filename' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(3013,52): warning C4458: declaration of 'OSPath' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.cpp(603,40): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.cpp(626,34): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\MapFile.cpp(895,49): warning C4458: declaration of 'name' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [3x] C5205
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(120,3): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(122,2): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(4217,3): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [1x] C4456
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(6629,12): warning C4456: declaration of 'm' hides previous local declaration [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]

## windows-latest-x86-release

status: failure

errors: 2
warnings: 3084 in 5 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(1501,28): error C3688: invalid literal suffix 'S_COLOR_RED'; literal operator or literal operator template 'operator ""S_COLOR_RED' not found [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(1527,29): error C3688: invalid literal suffix 'S_COLOR_RED'; literal operator or literal operator template 'operator ""S_COLOR_RED' not found [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]

### failure context


### warning kinds

- [3070x] C4458
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Random.h(62,39): warning C4458: declaration of 'seed' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Random.h(124,50): warning C4458: declaration of 'seed' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Complex.h(109,44): warning C4458: declaration of 'r' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Complex.h(109,59): warning C4458: declaration of 'i' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(114,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(114,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(409,71): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,41): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,56): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,71): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(873,86): warning C4458: declaration of 'w' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,43): warning C4458: declaration of 'radius' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,63): warning C4458: declaration of 'theta' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Vector.h(1952,82): warning C4458: declaration of 'phi' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,37): warning C4458: declaration of 'pitch' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,50): warning C4458: declaration of 'yaw' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Angles.h(120,61): warning C4458: declaration of 'roll' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,35): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,44): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,53): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(247,62): warning C4458: declaration of 'w' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,36): warning C4458: declaration of 'x' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,45): warning C4458: declaration of 'y' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Quat.h(346,54): warning C4458: declaration of 'z' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(152,52): warning C4458: declaration of 'origin' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(156,50): warning C4458: declaration of 'axis' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,42): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,55): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,67): warning C4458: declaration of 'dLeft' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(160,80): warning C4458: declaration of 'dUp' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(169,45): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(169,58): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(178,51): warning C4458: declaration of 'dNear' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.h(183,50): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\DrawVert.h(99,44): warning C4458: declaration of 'color' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(892,40): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(896,41): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(904,34): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.h(908,35): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.h(298,39): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\containers\StrPool.h(89,50): warning C4458: declaration of 'caseSensitive' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(518,53): warning C4458: declaration of 'base' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(518,69): warning C4458: declaration of 'newBase' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(526,53): warning C4458: declaration of 'base' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\BitMsg.h(526,69): warning C4458: declaration of 'newBase' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(146,34): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(147,31): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(148,33): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(149,33): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,42): warning C4458: declaration of 'name' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,60): warning C4458: declaration of 'value' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,71): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(278,90): warning C4458: declaration of 'description' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,14): warning C4458: declaration of 'valueMin' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,30): warning C4458: declaration of 'valueMax' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,53): warning C4458: declaration of 'valueStrings' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\framework\CVarSystem.h(279,83): warning C4458: declaration of 'valueCompletion' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1204,101): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1215,95): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\bv\Frustum.cpp(1376,101): warning C4458: declaration of 'dFar' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_Patch.cpp(477,101): warning C4458: declaration of 'width' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_SweptSpline.cpp(38,64): warning C4458: declaration of 'spline' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\Surface_SweptSpline.cpp(50,69): warning C4458: declaration of 'sweptSpline' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2263,83): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2288,98): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(2308,99): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1917,74): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1947,89): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Curve.h(1960,90): warning C4458: declaration of 'order' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\geometry\TraceModel.cpp(921,10): warning C4458: declaration of 'verts' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Lcp.cpp(122,58): warning C4458: declaration of 'b' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Lcp.cpp(860,61): warning C4458: declaration of 'b' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(957,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(1628,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(2775,9): warning C4458: declaration of 'mat' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Polynomial.cpp(39,60): warning C4458: declaration of 'degree' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(120,60): warning C4458: declaration of 'punctuations' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(436,35): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(534,33): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(576,35): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(775,40): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(820,34): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(920,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(938,63): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(992,39): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1028,62): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1073,61): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1098,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1114,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1135,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1159,43): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1172,40): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1228,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1250,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1265,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1448,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1497,10): warning C4458: declaration of 'token' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1591,36): warning C4458: declaration of 'filename' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1594,6): warning C4458: declaration of 'length' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Lexer.cpp(1646,47): warning C4458: declaration of 'length' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(167,62): warning C4458: declaration of 'definehash' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(180,50): warning C4458: declaration of 'definehash' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(352,42): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(369,43): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(417,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(578,41): warning C4458: declaration of 'tokens' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1210,6): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1251,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1272,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1368,40): warning C4458: declaration of 'tokens' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(1987,12): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(2009,6): warning C4458: declaration of 'skip' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(2990,30): warning C4458: declaration of 'flags' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(3013,37): warning C4458: declaration of 'filename' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Parser.cpp(3013,52): warning C4458: declaration of 'OSPath' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.cpp(603,40): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\Str.cpp(626,34): warning C4458: declaration of 'len' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\MapFile.cpp(895,49): warning C4458: declaration of 'name' hides class member [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [8x] C4740
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3470,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3481,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3492,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3503,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3514,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3525,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3536,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd_SSE.cpp(3547,1): warning C4740: flow in or out of inline asm code suppresses global optimization [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [3x] C5205
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(120,3): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(122,2): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Simd.cpp(4217,3): warning C5205: delete of an abstract class 'idSIMDProcessor' that has a non-virtual destructor results in undefined behavior [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [2x] C4750
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Lcp.cpp(667,1): warning C4750: 'void __thiscall idLCP_Square::CalcForceDelta(int,float)': function with _alloca() inlined into a loop [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(3662,1): warning C4750: 'class idMatX & __thiscall idMatX::SwapRows(int,int)': function with _alloca() inlined into a loop [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]
- [1x] C4456
  - D:\a\doom3.gpl\doom3.gpl\neo\idlib\math\Matrix.cpp(6629,12): warning C4456: declaration of 'm' hides previous local declaration [D:\a\doom3.gpl\doom3.gpl\build\idlib\idlib.vcxproj]

