# curllib ( curllib.vcxproj -> curllib.lib )
#
# The bundled curl 7.9 tree, built the same way as the original project: all
# C sources under lib/, the public headers from include/, and the lib internal
# headers ( setup.h ) picked up from lib/.

file( GLOB CURL_SOURCES lib/*.c )

add_library( curllib STATIC ${CURL_SOURCES} )

target_include_directories( curllib PUBLIC include lib )
target_compile_definitions( curllib PRIVATE USRDLL CURLLIB_EXPORTS )
if( MSVC )
	target_compile_options( curllib PRIVATE /W3 )
endif()
