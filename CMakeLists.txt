cmake_minimum_required(VERSION 3.9)
set(CMAKE_LEGACY_CYGWIN_WIN32 1)

PROJECT( GameEngine )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include )

ADD_SUBDIRECTORY( source )
add_subdirectory( testing )