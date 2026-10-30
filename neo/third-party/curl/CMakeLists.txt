# curllib ( curllib.vcxproj -> curllib.lib )
#
# The bundled curl tree: every C source under lib/, which also covers the
# vtls / vauth / vquic / vssh / vdns / curlx subdirectories the modern curl
# keeps there, the public headers from include/, and the lib internal
# headers ( setup.h ) picked up from lib/.

file( GLOB_RECURSE CURL_SOURCES lib/*.c )

add_library( curllib STATIC ${CURL_SOURCES} )

target_include_directories( curllib PUBLIC include lib )
# static build of the curl tree: CURL_STATICLIB keeps the public headers from
# declaring dllimport ( USRDLL / CURLLIB_EXPORTS were for the old DLL project ).
# PUBLIC so consumers of the public headers ( FileSystem.cpp ) get the same
# linkage the library itself was built with
target_compile_definitions( curllib PUBLIC CURL_STATICLIB )
if( MSVC )
	target_compile_options( curllib PRIVATE /W3 )
endif()
