# Build digest

commit: 57791a133882

- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x86-debug

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:86: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:106: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:124: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:144: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:61: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:81: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:99: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:119: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o

```
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o 
/usr/bin/c++ -DID_ENABLE_CURL=0 -DID_TYPEINFO -D_DEBUG -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -I/home/runner/work/doom3.gpl/doom3.gpl/neo/third-party/openal-soft/include -m32 -g -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -Wno-class-memaccess -Wno-write-strings -Wno-template-id-cdtor -Wno-overloaded-virtual -Wno-c++20-compat -Wno-format
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:86: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                      ^~~~~~~~~~
      |                                                                                      loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:106: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                          ^~~~~~~~~~
      |                                                                                                          loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:124: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                                            ^~~~~~~~~~
      |                                                                                                                            loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:144: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                                                                ^~~~~~~~~~
      |                                                                                                                                                loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:61: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                             ^~~~~~~~~~
      |                                                             loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:81: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                 ^~~~~~~~~~
      |                                                                                 loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:99: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                                   ^~~~~~~~~~
      |                                                                                                   loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:119: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                                                       ^~~~~~~~~~
      |                                                                                                                       loff_t
[54/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/bufq.c.o
[55/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/bufref.c.o
[56/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/cf-h2-proxy.c.o
[57/567] Building CXX object TypeInfo/CMakeFiles/typeinfo.dir/__/framework/Unzip.cpp.o
[58/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/cf-h1-proxy.c.o
[59/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/cf-haproxy.c.o
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 10
warnings: 67 in 3 kinds

### errors

FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:86: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:106: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:124: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:144: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:61: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:81: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:99: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:119: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
ninja: build stopped: cannot make progress due to previous errors.

### failure context

- [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o

```
FAILED: [code=1] TypeInfo/CMakeFiles/typeinfo.dir/__/framework/FileSystem.cpp.o 
/usr/bin/c++ -DID_ENABLE_CURL=0 -DID_TYPEINFO -D__DOOM_DLL__ -I/home/runner/work/doom3.gpl/doom3.gpl/neo -I/home/runner/work/doom3.gpl/doom3.gpl/neo/third-party/openal-soft/include -m32 -O3 -DNDEBUG -pipe -Wall -Wno-unknown-pragmas -fmessage-length=0 -fpermissive -fno-strict-aliasing -Wno-class-memaccess -Wno-write-strings -Wno-template-id-cdtor -Wno-overloaded-virtual -Wno-c++20-compat -Wno-forma
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:86: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                      ^~~~~~~~~~
      |                                                                                      loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:106: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                          ^~~~~~~~~~
      |                                                                                                          loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:124: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                                            ^~~~~~~~~~
      |                                                                                                                            loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:480:144: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
  480 |         static int                              CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow );
      |                                                                                                                                                ^~~~~~~~~~
      |                                                                                                                                                loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:61: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                             ^~~~~~~~~~
      |                                                             loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:81: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                 ^~~~~~~~~~
      |                                                                                 loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:99: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                                   ^~~~~~~~~~
      |                                                                                                   loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3610:119: error: ‘curl_off_t’ has not been declared; did you mean ‘loff_t’?
 3610 | int idFileSystemLocal::CurlProgressFunction( void *clientp, curl_off_t dltotal, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow ) {
      |                                                                                                                       ^~~~~~~~~~
      |                                                                                                                       loff_t
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp: In function ‘dword BackgroundDownloadThread(void*)’:
/home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3648:38: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
 3648 |                                 fread(  bgl->file.buffer, bgl->file.length, 1, static_cast<idFile_Permanent*>(bgl->f)->GetFilePtr() );
      |                                 ~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
[50/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/amigaos.c.o
[51/567] Building C object third-party/curl/lib/CMakeFiles/libcurl_static.dir/altsvc.c.o
```


### warning kinds

- [59x] -maybe-uninitialized
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/Winding2D.cpp:95:27: warning: ‘planes’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Plane.h:325:46: warning: ‘plane.idPlane::d’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Plane.h:362:12: warning: ‘plane.idPlane::d’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/../../idlib/math/Math.h:780:19: warning: ‘s’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/idlib/geometry/TraceModel.cpp:1175:41: warning: ‘unsortedSilEdges’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:254:41: warning: ‘bestPlane.idVec3::y’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::x’ may be used uninitialized [-Wmaybe-uninitialized]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/ai/../../idlib/../idlib/math/Vector.h:245:37: warning: ‘nextEdgeNormal.idVec2::y’ may be used uninitialized [-Wmaybe-uninitialized]
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
- [5x] -stringop-truncation
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_network.cpp:1518:24: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/game/Game_local.cpp:2335:32: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_network.cpp:1563:24: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:4795:16: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/d3xp/Game_local.cpp:2599:32: warning: ‘char* __builtin_strncpy(char*, const char*, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-truncation]
- [3x] -unused-result
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/FileSystem.cpp:3648:38: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Unzip.cpp:1134:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/framework/Unzip.cpp:1105:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]

## windows-latest-x86-debug

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(480,53): error C2061: syntax error: identifier 'curl_off_t' [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3610,61): error C2061: syntax error: identifier 'curl_off_t' [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3615,21): error C2065: 'dltotal': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3616,19): error C2065: 'dlnow': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]

### failure context


### warning kinds

## windows-latest-x86-release

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(480,53): error C2061: syntax error: identifier 'curl_off_t' [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3610,61): error C2061: syntax error: identifier 'curl_off_t' [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3615,21): error C2065: 'dltotal': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(3616,19): error C2065: 'dlnow': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\TypeInfo\typeinfo.vcxproj]

### failure context


### warning kinds

