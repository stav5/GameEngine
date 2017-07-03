project(Testing)

file(GLOB src "*.h" "*.cpp")

ADD_EXECUTABLE( ${PROJECT_NAME} ${src})
target_link_libraries(${PROJECT_NAME} GameEngineLib)