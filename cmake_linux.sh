#!/bin/sh

BUILDTYPE="debug"
CMAKE_BUILD_TYPE="Debug"
CMAKE_GENERATOR="Ninja"

if [ "$#" -ne "2" ]; then
  echo "Usage cmake_linux.sh <gcc|clang> <debug|release|reldeb>"
  exit 1
fi

if [ "$1" = "gcc" ]; then
  export CXX="g++"
  export CC="gcc"
  DIRECTORY="gcc"
elif [ "$1" = "clang" ]; then
  export CXX="clang++"
  export CC="clang"
  DIRECTORY="clang"
else
  echo "Usage cmake_linux.sh <gcc|clang> <debug|release|reldeb>"
  exit 1
fi

if [ "$2" = "debug" ]; then
  BUILDTYPE="debug"
  CMAKE_BUILD_TYPE="Debug"
elif [ "$2" = "release" ]; then
  BUILDTYPE="release"
  CMAKE_BUILD_TYPE="Release"
elif [ "$2" = "reldeb" ]; then
  BUILDTYPE="relwithdebinfo"
  CMAKE_BUILD_TYPE="RelWithDebInfo"
else
  echo "Usage cmake_linux.sh <gcc|clang> <debug|release|reldeb>"
  exit 1
fi

# the linux sys code is 32-bit only, always build a 32-bit binary
CMAKE_FLAGS="-DCMAKE_C_FLAGS=-m32 -DCMAKE_CXX_FLAGS=-m32 -DCMAKE_EXE_LINKER_FLAGS=-m32 -DCMAKE_SHARED_LINKER_FLAGS=-m32"

BUILDDIR=build/$DIRECTORY/$BUILDTYPE

mkdir -p $BUILDDIR
cd $BUILDDIR

cmake -G"$CMAKE_GENERATOR" -DCMAKE_BUILD_TYPE=$CMAKE_BUILD_TYPE $CMAKE_FLAGS ../../../neo
