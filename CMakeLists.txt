cmake_minimum_required(VERSION 3.8)
project(pk_process)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES lib/inc/pk_process.h lib/src/pk_process.cpp)
include_directories(./lib/inc)

set (CMAKE_CXX_FLAGS "-static-libgcc -static-libstdc++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../sample/bin)

add_executable(HelloWorld ${SOURCE_FILES} sample/HelloWorld.cpp)
