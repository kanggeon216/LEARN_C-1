add_subdirectory( pybind11 )

pybind11_add_module(cmake_example example.cpp)