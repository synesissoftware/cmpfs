
# ######################################################################## #
# File:     /src/CMakeLists.txt
#
# Purpose:  CMake lists file for cmpfs core library
#
# Created:  21st August 2026
# Updated:  21st August 2026
#
# ######################################################################## #


if(_BUILD_AS_UNIX)

	add_definitions(-DUNIX)
	add_definitions(-Dunix)
endif(_BUILD_AS_UNIX)

if(_BUILD_AS_WIN32)

	if(CMAKE_SIZEOF_VOID_P EQUAL 8)

		message (STATUS "Compiling for 64-bit Windows")

		add_definitions(-DWIN64)
	else()

		message (STATUS "Compiling for 32-bit Windows")

		add_definitions(-DWIN32)
	endif()
endif(_BUILD_AS_WIN32)

if(MSVC)
	if(MSVC_VERSION GREATER_EQUAL 1914)

		add_compile_options("/Zc:__cplusplus")
	endif()
endif(MSVC)


set(CORE_SRCS
	compare.api.c
)

add_library(core
	${CORE_SRCS}
)

set_target_properties(core PROPERTIES
	OUTPUT_NAME "cmpfs"
)

target_include_directories(core
	PUBLIC
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_compile_options(core
	PRIVATE
		$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
			-Werror -Wall -Wextra -pedantic
		>
		$<$<CXX_COMPILER_ID:MSVC>:
			/WX /W4
		>
)


# ##########################################################
# install

install(TARGETS core
	EXPORT project-targets
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

install(
	DIRECTORY ${CMAKE_SOURCE_DIR}/include/cmpfs/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/cmpfs/
	FILES_MATCHING
	PATTERN "*.h*"
)


# ############################## end of file ############################# #
