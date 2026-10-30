# Build digest

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

## ubuntu-latest-x86-release

status: cancelled

errors: 0
warnings: 501 in 5 kinds

### errors


### failure context


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
- [145x] -maybe-uninitialized
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
- [4x] -stringop-truncation
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Session.cpp:1445:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/posix/posix_signal.cpp:165:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_network.cpp:1518:24: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_local.cpp:2335:32: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
- [2x] array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:142:26: warning: array subscript -1 is below array bounds of ‘char [1024]’ [-Warray-bounds=]

## windows-latest-x86-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release

status: failure

errors: 1
warnings: 99 in 1 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\ws.c(1963,22): error C2491: 'curl_ws_start_frame': definition of dllimport function not allowed [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]

### failure context


### warning kinds

- [99x] C4273
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\curl_share.c(71,9): warning C4273: 'curl_share_init': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\curl_share.c(194,12): warning C4273: 'curl_share_setopt': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\curl_share.c(359,12): warning C4273: 'curl_share_cleanup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(233,10): warning C4273: 'curl_global_init': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(249,10): warning C4273: 'curl_global_init_mem': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(289,6): warning C4273: 'curl_global_cleanup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(330,10): warning C4273: 'curl_global_trace': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(350,12): warning C4273: 'curl_global_sslset': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(368,7): warning C4273: 'curl_easy_init': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(849,10): warning C4273: 'curl_easy_perform': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(883,6): warning C4273: 'curl_easy_cleanup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(902,10): warning C4273: 'curl_easy_getinfo': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1002,7): warning C4273: 'curl_easy_duphandle': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1142,6): warning C4273: 'curl_easy_reset': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1194,10): warning C4273: 'curl_easy_pause': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1300,10): warning C4273: 'curl_easy_recv': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1371,10): warning C4273: 'curl_easy_send': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1396,10): warning C4273: 'curl_easy_upkeep': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1409,10): warning C4273: 'curl_easy_ssls_import': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easy.c(1437,10): warning C4273: 'curl_easy_ssls_export': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easygetopt.c(53,31): warning C4273: 'curl_easy_option_by_name': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easygetopt.c(59,31): warning C4273: 'curl_easy_option_by_id': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\easygetopt.c(65,31): warning C4273: 'curl_easy_option_next': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\escape.c(36,7): warning C4273: 'curl_escape': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\escape.c(42,7): warning C4273: 'curl_unescape': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\escape.c(156,7): warning C4273: 'curl_easy_escape': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\escape.c(312,7): warning C4273: 'curl_easy_unescape': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\escape.c(339,6): warning C4273: 'curl_free': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\formdata.c(615,14): warning C4273: 'curl_formadd': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\formdata.c(633,5): warning C4273: 'curl_formget': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\formdata.c(671,6): warning C4273: 'curl_formfree': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\getenv.c(26,7): warning C4273: 'curl_getenv': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\headers.c(56,11): warning C4273: 'curl_easy_header': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\headers.c(218,21): warning C4273: 'curl_easy_nextheader': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\http2.c(3002,7): warning C4273: 'curl_pushheader_bynum': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\http2.c(3009,7): warning C4273: 'curl_pushheader_byname': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1094,6): warning C4273: 'curl_mime_free': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1246,12): warning C4273: 'curl_mime_init': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1278,16): warning C4273: 'curl_mime_addpart': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1303,10): warning C4273: 'curl_mime_name': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1320,10): warning C4273: 'curl_mime_filename': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1337,10): warning C4273: 'curl_mime_data': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1364,10): warning C4273: 'curl_mime_filedata': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1412,10): warning C4273: 'curl_mime_type': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1438,10): warning C4273: 'curl_mime_encoder': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1461,10): warning C4273: 'curl_mime_headers': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1479,10): warning C4273: 'curl_mime_data_cb': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mime.c(1553,10): warning C4273: 'curl_mime_subparts': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1247,5): warning C4273: 'curl_mvsnprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1272,5): warning C4273: 'curl_msnprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1395,7): warning C4273: 'curl_mvaprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1417,7): warning C4273: 'curl_maprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1444,5): warning C4273: 'curl_msprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1476,5): warning C4273: 'curl_mvfprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1488,5): warning C4273: 'curl_mfprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1498,5): warning C4273: 'curl_mprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1508,5): warning C4273: 'curl_mvsprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\mprintf.c(1515,5): warning C4273: 'curl_mvprintf': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(377,8): warning C4273: 'curl_multi_init': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(573,11): warning C4273: 'curl_multi_add_handle': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(884,11): warning C4273: 'curl_multi_remove_handle': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(1240,11): warning C4273: 'curl_multi_fdset': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(1295,11): warning C4273: 'curl_multi_waitfds': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(1644,11): warning C4273: 'curl_multi_wait': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(1660,11): warning C4273: 'curl_multi_poll': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(1676,11): warning C4273: 'curl_multi_wakeup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(2972,11): warning C4273: 'curl_multi_perform': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(2984,11): warning C4273: 'curl_multi_cleanup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3094,10): warning C4273: 'curl_multi_info_read': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3330,11): warning C4273: 'curl_multi_setopt': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3464,11): warning C4273: 'curl_multi_socket': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3476,11): warning C4273: 'curl_multi_socket_action': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3489,11): warning C4273: 'curl_multi_socket_all': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3562,11): warning C4273: 'curl_multi_timeout': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3835,11): warning C4273: 'curl_multi_assign': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3916,8): warning C4273: 'curl_multi_get_handles': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(3946,11): warning C4273: 'curl_multi_get_offt': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(4214,11): warning C4273: 'curl_multi_notify_enable': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\multi.c(4226,11): warning C4273: 'curl_multi_notify_disable': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\parsedate.c(718,8): warning C4273: 'curl_getdate': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\setopt.c(2932,10): warning C4273: 'curl_easy_setopt': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\slist.c(85,20): warning C4273: 'curl_slist_append': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\slist.c(124,6): warning C4273: 'curl_slist_free_all': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strequal.c(76,5): warning C4273: 'curl_strequal': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strequal.c(87,5): warning C4273: 'curl_strnequal': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strerror.c(34,13): warning C4273: 'curl_easy_strerror': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strerror.c(326,13): warning C4273: 'curl_multi_strerror': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strerror.c(385,13): warning C4273: 'curl_share_strerror': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\strerror.c(420,13): warning C4273: 'curl_url_strerror': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\urlapi.c(1412,8): warning C4273: 'curl_url': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\urlapi.c(1417,6): warning C4273: 'curl_url_cleanup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\urlapi.c(1434,8): warning C4273: 'curl_url_dup': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\urlapi.c(1682,11): warning C4273: 'curl_url_get': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\urlapi.c(2090,11): warning C4273: 'curl_url_set': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\version.c(140,7): warning C4273: 'curl_version': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\version.c(574,25): warning C4273: 'curl_version_info': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\ws.c(1596,10): warning C4273: 'curl_ws_recv': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\ws.c(1855,10): warning C4273: 'curl_ws_send': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\third-party\curl\lib\ws.c(1948,29): warning C4273: 'curl_ws_meta': inconsistent dll linkage [D:\a\doom3.gpl\doom3.gpl\build\third-party\curl\curllib.vcxproj]

