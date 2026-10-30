# MayaImport ( MayaImport.vcxproj -> MayaImport.dll )
#
# The original project builds against the Maya 5.0 SDK expected at
# mssdk/include and MayaImport/Maya5.0 inside the tree, with the import
# libraries at MayaImport/maya5.0/libs ( see _MayaImport.props ). None of
# those folders ship with the GPL release, so the root CMakeLists keeps this
# project behind the MAYA_IMPORT option.

add_library( MayaImport MODULE
	MayaImport/maya_main.cpp
	../idlib/precompiled.cpp
	MayaImport/mayaimport.def )

target_compile_definitions( MayaImport PRIVATE
	_USRDLL
	MAYAIMPORT_EXPORTS
	MAYA_IMPORT
	REQUIRE_IOSTREAM )

target_include_directories( MayaImport PRIVATE
	../mssdk/include
	MayaImport/Maya5.0 )

target_link_directories( MayaImport PRIVATE MayaImport/maya5.0/libs )
target_link_libraries( MayaImport PRIVATE
	Foundation
	OpenMaya
	OpenMayaAnim
	idlib )

if( MSVC )
	target_compile_options( MayaImport PRIVATE /W3 )
endif()
