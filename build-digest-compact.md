# Compact build digest

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

