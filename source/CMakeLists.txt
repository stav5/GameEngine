project(GameEngineLib)

file(GLOB src "*.cpp" "../include/*.h")

add_definitions(-Dbuild_shared)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} SHARED ${src})