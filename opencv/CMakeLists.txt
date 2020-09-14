cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
add_executable( 01_canny 01_canny.cpp )
add_executable( 02_template 02_template.cpp )
add_executable( 03_video 03_video.cpp )

set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")

set(LIBS ${OpenCV_LIBS})
target_link_libraries( 01_canny ${LIBS})
target_link_libraries( 02_template ${LIBS})
target_link_libraries( 03_video ${LIBS})

add_custom_command(
    OUTPUT stamped_file
    COMMAND 01_canny
    VERBATIM
)
add_custom_target(
    RUN ALL
)

#cmake_minimum_required(VERSION 3.10)

#set(CMAKE_CXX_FLAGS "-Wall -std=c++2a")
#project(sample VERSION 1.0)

#add_executable(
#    00_macro
#    00_macro.cpp
#)

#add_executable(
#    01_primitivies
#    01_primitives.cpp
#)
#
#add_subdirectory(common/fmt)