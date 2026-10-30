cmake_minimum_required( VERSION 3.25 )

project( Doom3 LANGUAGES C CXX )

# ---------------------------------------------------------------------------
# Options
#
# The Visual Studio solution expressed these switches as separate solution
# configurations (Debug, Debug with inlines, Debug with inlines and memory
# log, Dedicated Debug, ...). CMake keeps a single Debug/Release pair and
# moves the configuration differences into the options below.
# ---------------------------------------------------------------------------

option( DEDICATED "Build a dedicated server instead of the full client ( Dedicated Debug / Dedicated Release )" OFF )
option( WITH_INLINES "Enable inline debugging ( Debug with inlines / Dedicated Debug with inlines )" OFF )
option( WITH_MEMORY_LOG "Log every memory allocation ( Debug with inlines and memory log )" OFF )
option( MAYA_IMPORT "Build the MayaImport plugin ( requires the Maya SDK folders in the tree, like the original solution it is off by default )" OFF )

# The Windows build links the bundled curl the same way the curllib project
# did. On Linux the original build ran curl's configure script ( see
# sys/scons/SConscript.curl ), which is not reproduced here, so downloads are
# compiled out instead ( the same as SCons NOCURL=1 / ID_ENABLE_CURL=0 ).
option( ID_ENABLE_CURL "Enable curl based http/ftp downloads ( ID_ENABLE_CURL )" ON )
if( NOT WIN32 AND ID_ENABLE_CURL )
	message( STATUS "curl: the bundled curl needs its configure run, disabling for this platform ( NOCURL=1 behavior )" )
	set( ID_ENABLE_CURL OFF )
endif()

# ---------------------------------------------------------------------------
# Common settings
# ---------------------------------------------------------------------------

# _Debug.props / _Release.props link the static CRT ( MultiThreaded / MultiThreadedDebug )
set( CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>" )

# configuration defines shared by all projects
set( DOOM_CONFIG_DEFINES "$<$<CONFIG:Debug>:_DEBUG>" )
if( WITH_INLINES )
	list( APPEND DOOM_CONFIG_DEFINES "_INLINEDEBUG" )
endif()
if( WITH_MEMORY_LOG )
	list( APPEND DOOM_CONFIG_DEFINES "ID_REDIRECT_NEWDELETE" "ID_DEBUG_MEMORY" "ID_DEBUG_UNINITIALIZED_MEMORY" )
endif()

# interface library carrying the settings from _Common.props plus the flags
# the Linux SCons build put into BASECPPFLAGS
add_library( doom_base INTERFACE )
# the original builds had the neo root on the include path ( SCons '#',
# generated GL code and some headers include from there )
target_include_directories( doom_base INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} )
target_compile_definitions( doom_base INTERFACE ${DOOM_CONFIG_DEFINES} )
if( MSVC )
	target_compile_definitions( doom_base INTERFACE
		WIN32
		_WINDOWS
		_CRT_SECURE_NO_DEPRECATE
		_CRT_NONSTDC_NO_DEPRECATE
		_USE_32BIT_TIME_T )
	# _Release.props turns the stack buffer check off, keep that behavior
	target_compile_options( doom_base INTERFACE "$<$<CONFIG:Release>:/GS->" )
else()
	target_compile_options( doom_base INTERFACE
		-pipe
		-Wall
		-Wno-unknown-pragmas
		-fmessage-length=0
		-fpermissive
		-fno-strict-aliasing )
endif()

# products are placed in the repository root, the game dlls into the
# base/ and d3xp/ folders next to them
set( DOOM3_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/.. )

# multi-config generators append the config name to the output directory,
# pin every config to the same folder so products stay flat
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${DOOM3_OUTPUT_DIR} )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${DOOM3_OUTPUT_DIR} )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${DOOM3_OUTPUT_DIR} )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DOOM3_OUTPUT_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${DOOM3_OUTPUT_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${DOOM3_OUTPUT_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL ${DOOM3_OUTPUT_DIR} )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${DOOM3_OUTPUT_DIR} )

if( CMAKE_SIZEOF_VOID_P EQUAL 4 )
	set( DOOM_ARCH_SUFFIX "x86" )
else()
	set( DOOM_ARCH_SUFFIX "x64" )
endif()

# ---------------------------------------------------------------------------
# Sub projects ( one CMakeLists per solution project )
# ---------------------------------------------------------------------------

add_subdirectory( idlib )
if( ID_ENABLE_CURL )
	add_subdirectory( third-party/curl )
endif()
add_subdirectory( TypeInfo )
add_subdirectory( game )
add_subdirectory( d3xp )
if( MAYA_IMPORT )
	add_subdirectory( MayaImport )
endif()

# ---------------------------------------------------------------------------
# Linux GL platform code
#
# The SCons build generated the GL loading / logging sources from m4 and
# python descriptions under sys/gllog ( see sys/scons/SConscript.gl ). The
# same generation steps are reproduced here into the build tree.
# ---------------------------------------------------------------------------

set( GLIMP_GEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated )

if( NOT WIN32 AND NOT DEDICATED )
	find_program( M4_EXECUTABLE m4 REQUIRED )
	find_program( PYTHON_EXECUTABLE python3 REQUIRED )

	add_custom_command(
		OUTPUT ${GLIMP_GEN_DIR}/gl_extensions.cpp
		COMMAND ${CMAKE_COMMAND} -E make_directory ${GLIMP_GEN_DIR}
		COMMAND ${M4_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sys/gllog/gl_extensions.cpp.m4 > ${GLIMP_GEN_DIR}/gl_extensions.cpp
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/sys/gllog
		DEPENDS sys/gllog/gl_extensions.cpp.m4 sys/gllog/gl_def.m4
		COMMENT "m4: gl_extensions.cpp" )

	add_custom_command(
		OUTPUT ${GLIMP_GEN_DIR}/glimp_logfuncs.cpp
		COMMAND ${CMAKE_COMMAND} -E make_directory ${GLIMP_GEN_DIR}
		COMMAND ${PYTHON_EXECUTABLE} ${DOOM3_OUTPUT_DIR}/tools/gen_logfuncs.py ${CMAKE_CURRENT_SOURCE_DIR}/sys/gllog ${GLIMP_GEN_DIR}/glimp_logfuncs.cpp
		DEPENDS sys/gllog/logfunc.py sys/gllog/read.py sys/gllog/gl.api sys/gllog/glX.api sys/gllog/wgl.api
			${DOOM3_OUTPUT_DIR}/tools/gen_logfuncs.py
		COMMENT "python: glimp_logfuncs.cpp" )

	add_custom_command(
		OUTPUT ${GLIMP_GEN_DIR}/glimp_dlopen.cpp ${GLIMP_GEN_DIR}/glimp_logging.cpp ${GLIMP_GEN_DIR}/glimp_stub.cpp ${GLIMP_GEN_DIR}/glimp_local.h
		COMMAND ${CMAKE_COMMAND} -E make_directory ${GLIMP_GEN_DIR}
		COMMAND ${M4_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sys/linux/glimp_dlopen.cpp.m4 > ${GLIMP_GEN_DIR}/glimp_dlopen.cpp
		COMMAND ${M4_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sys/linux/glimp_logging.cpp.m4 > ${GLIMP_GEN_DIR}/glimp_logging.cpp
		COMMAND ${M4_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sys/linux/glimp_stub.cpp.m4 > ${GLIMP_GEN_DIR}/glimp_stub.cpp
		COMMAND ${M4_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sys/linux/glimp_local.h.m4 > ${GLIMP_GEN_DIR}/glimp_local.h
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/sys/linux
		DEPENDS sys/linux/glimp_dlopen.cpp.m4 sys/linux/glimp_logging.cpp.m4
			sys/linux/glimp_stub.cpp.m4 sys/linux/glimp_local.h.m4 sys/gllog/gl_def.m4
			${GLIMP_GEN_DIR}/glimp_logfuncs.cpp
		COMMENT "m4: glimp platform code" )

	set( GLIMP_SOURCES
		${GLIMP_GEN_DIR}/gl_extensions.cpp
		${GLIMP_GEN_DIR}/glimp_dlopen.cpp
		${GLIMP_GEN_DIR}/glimp_logging.cpp )
endif()

# ---------------------------------------------------------------------------
# DoomDLL ( DOOM3.exe / doom.x86 )
#
# Source list from doomdll.vcxproj: the MFC based tools ( radiant, guied,
# editors and helpers ) are excluded from the build in every configuration of
# the original solution and stay out of this one as well. The Linux list
# follows sys/scons/SConscript.core.
# ---------------------------------------------------------------------------

set( ENGINE_SOURCES
	cm/CollisionModel_contacts.cpp
	cm/CollisionModel_contents.cpp
	cm/CollisionModel_debug.cpp
	cm/CollisionModel_files.cpp
	cm/CollisionModel_load.cpp
	cm/CollisionModel_rotate.cpp
	cm/CollisionModel_trace.cpp
	cm/CollisionModel_translate.cpp
	framework/CmdSystem.cpp
	framework/Common.cpp
	framework/Compressor.cpp
	framework/Console.cpp
	framework/CVarSystem.cpp
	framework/DeclAF.cpp
	framework/DeclEntityDef.cpp
	framework/DeclFX.cpp
	framework/DeclManager.cpp
	framework/DeclParticle.cpp
	framework/DeclPDA.cpp
	framework/DeclSkin.cpp
	framework/DeclTable.cpp
	framework/DemoFile.cpp
	framework/EditField.cpp
	framework/EventLoop.cpp
	framework/File.cpp
	framework/FileSystem.cpp
	framework/KeyInput.cpp
	framework/Session.cpp
	framework/Session_menu.cpp
	framework/Unzip.cpp
	framework/UsercmdGen.cpp
	framework/async/AsyncClient.cpp
	framework/async/AsyncNetwork.cpp
	framework/async/AsyncServer.cpp
	framework/async/MsgChannel.cpp
	framework/async/NetworkSystem.cpp
	framework/async/ServerScan.cpp
	renderer/Cinematic.cpp
	renderer/draw_arb.cpp
	renderer/draw_arb2.cpp
	renderer/draw_common.cpp
	renderer/draw_nv10.cpp
	renderer/draw_nv20.cpp
	renderer/draw_r200.cpp
	renderer/GuiModel.cpp
	renderer/Image_files.cpp
	renderer/Image_init.cpp
	renderer/Image_load.cpp
	renderer/Image_process.cpp
	renderer/Image_program.cpp
	renderer/Interaction.cpp
	renderer/Material.cpp
	renderer/MegaTexture.cpp
	renderer/Model.cpp
	renderer/Model_ase.cpp
	renderer/Model_beam.cpp
	renderer/Model_liquid.cpp
	renderer/Model_lwo.cpp
	renderer/Model_ma.cpp
	renderer/Model_md3.cpp
	renderer/Model_md5.cpp
	renderer/Model_prt.cpp
	renderer/Model_sprite.cpp
	renderer/ModelDecal.cpp
	renderer/ModelManager.cpp
	renderer/ModelOverlay.cpp
	renderer/RenderEntity.cpp
	renderer/RenderSystem.cpp
	renderer/RenderSystem_init.cpp
	renderer/RenderWorld.cpp
	renderer/RenderWorld_demo.cpp
	renderer/RenderWorld_load.cpp
	renderer/RenderWorld_portals.cpp
	renderer/tr_backend.cpp
	renderer/tr_deform.cpp
	renderer/tr_font.cpp
	renderer/tr_guisurf.cpp
	renderer/tr_light.cpp
	renderer/tr_lightrun.cpp
	renderer/tr_main.cpp
	renderer/tr_orderIndexes.cpp
	renderer/tr_polytope.cpp
	renderer/tr_render.cpp
	renderer/tr_rendertools.cpp
	renderer/tr_shadowbounds.cpp
	renderer/tr_stencilshadow.cpp
	renderer/tr_subview.cpp
	renderer/tr_trace.cpp
	renderer/tr_trisurf.cpp
	renderer/tr_turboshadow.cpp
	renderer/VertexCache.cpp
	sound/snd_cache.cpp
	sound/snd_decoder.cpp
	sound/snd_efxfile.cpp
	sound/snd_emitter.cpp
	sound/snd_shader.cpp
	sound/snd_system.cpp
	sound/snd_wavefile.cpp
	sound/snd_world.cpp
	sound/OggVorbis/oggsrc/bitwise.c
	sound/OggVorbis/oggsrc/framing.c
	sound/OggVorbis/vorbissrc/analysis.c
	sound/OggVorbis/vorbissrc/barkmel.c
	sound/OggVorbis/vorbissrc/bitrate.c
	sound/OggVorbis/vorbissrc/block.c
	sound/OggVorbis/vorbissrc/codebook.c
	sound/OggVorbis/vorbissrc/envelope.c
	sound/OggVorbis/vorbissrc/floor0.c
	sound/OggVorbis/vorbissrc/floor1.c
	sound/OggVorbis/vorbissrc/info.c
	sound/OggVorbis/vorbissrc/lookup.c
	sound/OggVorbis/vorbissrc/lpc.c
	sound/OggVorbis/vorbissrc/lsp.c
	sound/OggVorbis/vorbissrc/mapping0.c
	sound/OggVorbis/vorbissrc/mdct.c
	sound/OggVorbis/vorbissrc/psy.c
	sound/OggVorbis/vorbissrc/registry.c
	sound/OggVorbis/vorbissrc/res0.c
	sound/OggVorbis/vorbissrc/sharedbook.c
	sound/OggVorbis/vorbissrc/smallft.c
	sound/OggVorbis/vorbissrc/synthesis.c
	sound/OggVorbis/vorbissrc/vorbisenc.c
	sound/OggVorbis/vorbissrc/vorbisfile.c
	sound/OggVorbis/vorbissrc/windowvb.c
	tools/compilers/aas/AASBuild.cpp
	tools/compilers/aas/AASBuild_file.cpp
	tools/compilers/aas/AASBuild_gravity.cpp
	tools/compilers/aas/AASBuild_ledge.cpp
	tools/compilers/aas/AASBuild_merge.cpp
	tools/compilers/aas/AASCluster.cpp
	tools/compilers/aas/AASFile.cpp
	tools/compilers/aas/AASFile_optimize.cpp
	tools/compilers/aas/AASFile_sample.cpp
	tools/compilers/aas/AASFileManager.cpp
	tools/compilers/aas/AASReach.cpp
	tools/compilers/aas/Brush.cpp
	tools/compilers/aas/BrushBSP.cpp
	tools/compilers/dmap/dmap.cpp
	tools/compilers/dmap/facebsp.cpp
	tools/compilers/dmap/gldraw.cpp
	tools/compilers/dmap/glfile.cpp
	tools/compilers/dmap/leakfile.cpp
	tools/compilers/dmap/map.cpp
	tools/compilers/dmap/optimize.cpp
	tools/compilers/dmap/optimize_gcc.cpp
	tools/compilers/dmap/output.cpp
	tools/compilers/dmap/portals.cpp
	tools/compilers/dmap/shadowopt3.cpp
	tools/compilers/dmap/tritjunction.cpp
	tools/compilers/dmap/tritools.cpp
	tools/compilers/dmap/ubrush.cpp
	tools/compilers/dmap/usurface.cpp
	tools/compilers/renderbump/renderbump.cpp
	tools/compilers/roqvq/codec.cpp
	tools/compilers/roqvq/NSBitmapImageRep.cpp
	tools/compilers/roqvq/roq.cpp
	tools/compilers/roqvq/roqParam.cpp
	ui/BindWindow.cpp
	ui/ChoiceWindow.cpp
	ui/DeviceContext.cpp
	ui/EditWindow.cpp
	ui/FieldWindow.cpp
	ui/GameBearShootWindow.cpp
	ui/GameBustOutWindow.cpp
	ui/GameSSDWindow.cpp
	ui/GuiScript.cpp
	ui/ListGUI.cpp
	ui/ListWindow.cpp
	ui/MarkerWindow.cpp
	ui/RegExp.cpp
	ui/RenderWindow.cpp
	ui/SimpleWindow.cpp
	ui/SliderWindow.cpp
	ui/UserInterface.cpp
	ui/Window.cpp
	ui/Winvar.cpp )

if( WIN32 )
	# sys sources from doomdll.vcxproj ( win_taskkeyhook.cpp is excluded from
	# the build in every configuration of the original solution )
	list( APPEND ENGINE_SOURCES
		sys/sys_local.cpp
		sys/win32/win_cpu.cpp
		sys/win32/win_glimp.cpp
		sys/win32/win_input.cpp
		sys/win32/win_main.cpp
		sys/win32/win_net.cpp
		sys/win32/win_qgl.cpp
		sys/win32/win_shared.cpp
		sys/win32/win_snd.cpp
		sys/win32/win_syscon.cpp
		sys/win32/win_wndproc.cpp
		openal/eaxguid.cpp
		sys/win32/rc/CreateResourceIDs.cpp
		sys/win32/rc/doom.rc )
else()
	# sys sources from sys/scons/SConscript.core
	list( APPEND ENGINE_SOURCES
		sys/sys_local.cpp
		sys/posix/posix_net.cpp
		sys/posix/posix_main.cpp
		sys/posix/posix_signal.cpp
		sys/posix/posix_threads.cpp
		sys/linux/stack.cpp
		sys/linux/main.cpp
		sys/stub/util_stub.cpp
		tools/guied/GEWindowWrapper_stub.cpp
		TypeInfo/TypeInfoGen.cpp )
	if( DEDICATED )
		list( APPEND ENGINE_SOURCES sys/linux/dedicated.cpp )
	else()
		list( APPEND ENGINE_SOURCES
			sys/linux/glimp.cpp
			sys/posix/posix_input.cpp
			sys/linux/input.cpp
			sys/linux/libXNVCtrl/NVCtrl.c
			sys/linux/sound.cpp
			sys/linux/sound_alsa.cpp
			openal/stubs.cpp
			${GLIMP_SOURCES} )
	endif()
endif()

add_executable( doom3 ${ENGINE_SOURCES} )

set_target_properties( doom3 PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${DOOM3_OUTPUT_DIR} )
if( WIN32 )
	set_target_properties( doom3 PROPERTIES OUTPUT_NAME "DOOM3" )
else()
	set_target_properties( doom3 PROPERTIES OUTPUT_NAME "doom.${DOOM_ARCH_SUFFIX}" )
endif()

target_compile_definitions( doom3 PRIVATE __DOOM_DLL__ )
if( DEDICATED )
	target_compile_definitions( doom3 PRIVATE ID_DEDICATED )
	if( NOT WIN32 )
		# SConscript.core also hardlinks GL for the dedicated linux server
		target_compile_definitions( doom3 PRIVATE ID_GL_HARDLINK )
	endif()
endif()
if( NOT ID_ENABLE_CURL )
	target_compile_definitions( doom3 PRIVATE ID_ENABLE_CURL=0 )
endif()

target_link_libraries( doom3 PRIVATE idlib doom_base )
add_dependencies( doom3 typeinfo )

if( MSVC )
	# _DoomDLL.props
	target_compile_definitions( doom3 PRIVATE __DOOM__ )
	target_include_directories( doom3 PRIVATE
		sound/OggVorbis/ogg
		sound/OggVorbis/vorbis
		sound/vorbis/include )
	target_compile_options( doom3 PRIVATE /W3 )
	# 16 MB stack and large address awareness from _DoomDLL.props
	target_link_options( doom3 PRIVATE /STACK:16777216,16777216 )
	if( CMAKE_SIZEOF_VOID_P EQUAL 4 )
		target_link_options( doom3 PRIVATE /LARGEADDRESSAWARE )
	endif()
	target_link_libraries( doom3 PRIVATE
		dbghelp
		dinput8
		dsound
		dxguid
		glu32
		iphlpapi
		odbc32
		odbccp32
		opengl32
		winmm
		wsock32 )
	# openal import library from the third-party tree, the EAX GUIDs the engine
	# references are defined in openal/eaxguid.cpp instead of the old eaxguid.lib
	target_link_libraries( doom3 PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/third-party/openal-soft/libs/Win32/OpenAL32.lib )
	if( ID_ENABLE_CURL )
		target_link_libraries( doom3 PRIVATE curllib )
	endif()
	set_target_properties( doom3 PROPERTIES WIN32_EXECUTABLE TRUE )
else()
	# threading define for X11 and the hidden visibility from the SCons build
	target_compile_definitions( doom3 PRIVATE XTHREADS )
	target_compile_options( doom3 PRIVATE -fvisibility=hidden )
	if( NOT DEDICATED )
		# GLimp code gets the generated headers first on the include path
		target_include_directories( doom3 PRIVATE ${GLIMP_GEN_DIR} )
		target_compile_definitions( doom3 PRIVATE GLIMP )
	endif()
	target_include_directories( doom3 PRIVATE
		sound/OggVorbis/ogg
		sound/OggVorbis/vorbis
		sound/OggVorbis/vorbissrc
		sys/linux/oss/include )
	target_link_libraries( doom3 PRIVATE pthread dl z )
	if( NOT DEDICATED )
		target_link_libraries( doom3 PRIVATE X11 Xext Xxf86vm )
	endif()
	# release optimizations from SConstruct BUILD="release"
	target_compile_options( doom3 PRIVATE
		"$<$<CONFIG:Release>:-ffast-math;-fno-unsafe-math-optimizations;-fomit-frame-pointer;-Winline>" )
	if( CMAKE_SIZEOF_VOID_P EQUAL 4 )
		target_compile_options( doom3 PRIVATE "$<$<CONFIG:Release>:-march=pentium3>" )
	endif()
endif()
