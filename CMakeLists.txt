cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "-Wall -std=c++2a")
project(sample VERSION 1.0)

add_executable(
    00_macro
    00_macro.cpp
)

add_executable(
    01_primitivies
    01_primitives.cpp
)

add_subdirectory(common/fmt)
