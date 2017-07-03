project(GameEngineLib)

file(GLOB src "*.cpp" "../include/*.h")

add_library(${PROJECT_NAME} SHARED ${src})