# Build digest

commit: 36439e6ddd2b

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

errors: 8
warnings: 46 in 4 kinds

### errors

D:\a\doom3.gpl\doom3.gpl\neo\framework\FileSystem.cpp(48,11): error C1083: Cannot open include file: '../curl/include/curl/curl.h': No such file or directory [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\sound\snd_system.cpp(167,93): error C2664: 'ALenum (ALubyte *)': cannot convert argument 1 from 'const char [16]' to 'ALubyte *' [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\sound\snd_system.cpp(167,147): error C2664: 'ALenum (ALubyte *)': cannot convert argument 1 from 'const char [16]' to 'ALubyte *' [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(324,20): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1513,21): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1579,15): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\tools\compilers\roqvq\codec.cpp(1594,16): error C2065: 'INFINITY': undeclared identifier [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_snd.cpp(32,10): error C1083: Cannot open include file: 'DxErr.h': No such file or directory [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]

### failure context


### warning kinds

- [28x] C4838
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(146,2): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(158,33): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(159,2): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(159,23): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(159,35): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(159,48): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(163,2): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(180,53): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(183,76): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(184,2): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(184,15): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(184,35): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(196,46): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(197,52): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(200,76): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(201,2): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(201,15): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(201,35): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(218,54): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(220,23): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(221,77): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(222,3): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(222,36): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(234,47): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(237,23): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(238,77): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(239,3): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(239,35): warning C4838: conversion from 'char' to 'const unsigned char' requires a narrowing conversion [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
- [11x] C5208
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_local.h(100,16): warning C5208: unnamed class used in typedef name cannot declare members other than non-static data members, member enumerations, or member classes [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
- [6x] C4644
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(960,9): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(964,9): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(968,9): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(1022,8): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(1026,8): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_input.cpp(1030,8): warning C4644: usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
- [1x] C4477
  - D:\a\doom3.gpl\doom3.gpl\neo\sys\win32\win_main.cpp(1302,3): warning C4477: 'sprintf' : format string '%08x' requires an argument of type 'unsigned int', but variadic argument 3 has type 'PVOID' [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

