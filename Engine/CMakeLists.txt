cmake_minimum_required(VERSION 3.12)

set(ENGINE_PROJECT_NAME Engine)

add_library(${ENGINE_PROJECT_NAME} STATIC
	src/test.cpp
	includes/test.h
	)

target_include_directories(${ENGINE_PROJECT_NAME} PRIVATE src)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)