cmake_minimum_required(VERSION 2.7)

PROJECT( GameEngine )

if(${CMAKE_SIZEOF_VOID_P} EQUAL 8)
	set(PROCESSOR_ARCH "64")
else()
	set(PROCESSOR_ARCH "32")
endif()


if(WIN32)
	set(PLATFORM "windows")
elseif(UNIX AND NOT APPLE)
	set(PLATFORM "linux")
elseif(APPLE)
	set(PLATFORM "mac")
endif()

# Set output folder
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${PLATFORM}${PROCESSOR_ARCH})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${PLATFORM}${PROCESSOR_ARCH})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${PLATFORM}${PROCESSOR_ARCH})

add_subdirectory( source )
add_subdirectory( testing )
