# idLib ( idlib.vcxproj -> idlib.lib )
#
# The MSVC list comes straight from idlib.vcxproj ( 51 files including the
# precompiled header source ). The Linux list follows sys/scons/SConscript.idlib
# which omits the SIMD variants and adds Frustum_gcc.cpp compiled without
# optimizations.

if( MSVC )
	set( IDLIB_SOURCES
		bv/Bounds.cpp
		bv/Box.cpp
		bv/Frustum.cpp
		bv/Sphere.cpp
		containers/HashIndex.cpp
		geometry/DrawVert.cpp
		geometry/JointTransform.cpp
		geometry/Surface.cpp
		geometry/Surface_Patch.cpp
		geometry/Surface_Polytope.cpp
		geometry/Surface_SweptSpline.cpp
		geometry/TraceModel.cpp
		geometry/Winding.cpp
		geometry/Winding2D.cpp
		hashing/CRC32.cpp
		hashing/MD4.cpp
		hashing/MD5.cpp
		math/Angles.cpp
		math/Complex.cpp
		math/Lcp.cpp
		math/Math.cpp
		math/Matrix.cpp
		math/Ode.cpp
		math/Plane.cpp
		math/Pluecker.cpp
		math/Polynomial.cpp
		math/Quat.cpp
		math/Rotation.cpp
		math/Simd.cpp
		math/Simd_3DNow.cpp
		math/Simd_AltiVec.cpp
		math/Simd_Generic.cpp
		math/Simd_MMX.cpp
		math/Simd_SSE.cpp
		math/Simd_SSE2.cpp
		math/Simd_SSE3.cpp
		math/Vector.cpp
		Base64.cpp
		CmdArgs.cpp
		Lexer.cpp
		Parser.cpp
		Str.cpp
		Token.cpp
		BitMsg.cpp
		Dict.cpp
		Heap.cpp
		LangDict.cpp
		Lib.cpp
		MapFile.cpp
		precompiled.cpp
		Timer.cpp )
else()
	set( IDLIB_SOURCES
		bv/Bounds.cpp
		bv/Frustum.cpp
		bv/Sphere.cpp
		bv/Box.cpp
		geometry/DrawVert.cpp
		geometry/Winding2D.cpp
		geometry/Surface_SweptSpline.cpp
		geometry/Winding.cpp
		geometry/Surface.cpp
		geometry/Surface_Patch.cpp
		geometry/TraceModel.cpp
		geometry/JointTransform.cpp
		hashing/CRC32.cpp
		hashing/MD4.cpp
		hashing/MD5.cpp
		math/Angles.cpp
		math/Lcp.cpp
		math/Math.cpp
		math/Matrix.cpp
		math/Ode.cpp
		math/Plane.cpp
		math/Pluecker.cpp
		math/Polynomial.cpp
		math/Quat.cpp
		math/Rotation.cpp
		math/Simd.cpp
		math/Simd_Generic.cpp
		math/Vector.cpp
		BitMsg.cpp
		LangDict.cpp
		Lexer.cpp
		Lib.cpp
		containers/HashIndex.cpp
		Dict.cpp
		Str.cpp
		Parser.cpp
		MapFile.cpp
		CmdArgs.cpp
		Token.cpp
		Base64.cpp
		Timer.cpp
		Heap.cpp
		bv/Frustum_gcc.cpp )
endif()

# position independent code so the static library can be linked into the
# game shared libraries on Linux ( SCons built a PIC copy for the game )
add_library( idlib STATIC ${IDLIB_SOURCES} )
set_target_properties( idlib PROPERTIES POSITION_INDEPENDENT_CODE ON )

target_compile_definitions( idlib PRIVATE __IDLIB__ )
if( NOT MSVC )
	# SConscript.idlib keeps Frustum_gcc.cpp out of the optimized set
	set_source_files_properties( bv/Frustum_gcc.cpp PROPERTIES COMPILE_OPTIONS "-O0" )
endif()

target_link_libraries( idlib PUBLIC doom_base )
if( MSVC )
	target_compile_options( idlib PRIVATE /W4 )
endif()
