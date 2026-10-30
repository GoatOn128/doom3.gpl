# Build digest

commit: c9ee4fdd7877

- ubuntu-latest-x86-debug: success
- ubuntu-latest-x86-release: success
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release

status: success

errors: 0
warnings: 2 in 1 kinds

### errors


### failure context


### warning kinds

- [2x] writing 1 byte into a region of size 0 [-Wstringop-overflow=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:142:28: warning: writing 1 byte into a region of size 0 [-Wstringop-overflow=]

## windows-latest-x86-debug

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(327,20): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1516,21): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1582,15): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1597,16): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]

### failure context


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

