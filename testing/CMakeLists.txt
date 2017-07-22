project(LibraryTester)

file(GLOB src "*.h" "*.cpp")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable( ${PROJECT_NAME} ${src})
target_link_libraries(${PROJECT_NAME} GameEngineLib)