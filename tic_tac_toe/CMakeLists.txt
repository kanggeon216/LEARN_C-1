cmake_minimum_required(VERSION 3.0.0)
project(tic_tac_toe VERSION 0.1.0)

message("${CMAKE_MODULE_PATH}")
find_package( OpenCV REQUIRED )

add_executable(tic_tac_toe tic_tac_toe.cpp)
add_executable(drawing tic_tac_toe.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

set(LIBS ${OpenCV_LIBS})

target_link_libraries( tic_tac_toe ${LIBS} )
target_link_libraries( drawing ${LIBS} )
include(CPack)