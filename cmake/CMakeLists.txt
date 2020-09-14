cmake_minimum_required(VERSION 3.16)
message("______________")
message(CMAKESOURCEDIR \t ${CMAKE_SOURCE_DIR})
message(CACHE \t ${CACHE})
message(CMAKE_BUILD_TYPE \t ${CMAKE_BUILD_TYPE})
message(CMAKE_CXX_COMPILER_ID \t ${CMAKE_CXX_COMPILER_ID})
message(CMAKE_PREFIX_PATH \t ${CMAKE_PREFIX_PATH})
message(CMAKE_VERBOSE_MAKEFILE \t ${CMAKE_VERBOSE_MAKEFILE})
message(CMAKE_CURRENT_SOURCE_DIR \t ${CMAKE_CURRENT_SOURCE_DIR})
message("${gflags_SOURCE_DIR}")
message("${gflags_BINARY_DIR}")


set(gflags_DIR ${CMAKESOURCEDIR}/gflags/cmake)
find_package(gflags CONFIG REQUIRED)
add_executable(01_gflags 01_gflags.cpp)

link_libraries(01_gflags gflags/build/include)

set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")

set(LIBS $())