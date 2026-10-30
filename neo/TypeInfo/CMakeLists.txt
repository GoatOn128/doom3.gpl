# typeinfo ( TypeInfo.vcxproj -> typeinfo.exe )
#
# Source list from TypeInfo.vcxproj: the generator itself plus the framework
# files it links against. It runs from the repository root and writes
# game/gamesys/GameTypeInfo.h ( the game and d3xp projects depend on it ).

add_executable( typeinfo
	main.cpp
	TypeInfoGen.cpp
	../framework/CmdSystem.cpp
	../framework/CVarSystem.cpp
	../framework/File.cpp
	../framework/FileSystem.cpp
	../framework/Unzip.cpp )

target_compile_definitions( typeinfo PRIVATE
	ID_ENABLE_CURL=0
	ID_TYPEINFO
	__DOOM_DLL__ )

target_link_libraries( typeinfo PRIVATE idlib )

if( WIN32 )
	set_target_properties( typeinfo PROPERTIES OUTPUT_NAME typeinfo )
else()
	# the SCons build put the linux binary into the tree as typeinfo.x86
	set_target_properties( typeinfo PROPERTIES OUTPUT_NAME typeinfo.${DOOM_ARCH_SUFFIX} )
endif()
