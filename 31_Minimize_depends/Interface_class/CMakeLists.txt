cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

set(PROJECT_SRC_ROOT ${CMAKE_CURRENT_LIST_DIR}/)

include_directories(${PROJECT_SRC_ROOT}/include)

aux_source_directory(${PROJECT_SRC_ROOT}/src SRC_FILES)
message(STATUS "ROOT is ${PROJECT_SRC_ROOT}")
message(STATUS "SRC_FILES are ${SRC_FILES}")

# Compile options
add_compile_options(-std=c++11)


add_executable(main ${SRC_FILES} main.cpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
