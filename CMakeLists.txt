cmake_minimum_required (VERSION 3.0)

project (Neural_Network)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories (${CMAKE_SOURCE_DIR}/Eigen3/include/eigen3)
include_directories (${CMAKE_SOURCE_DIR}/opencv/build/include/)

add_executable (Neural_Network Main.cpp Test-Image-Processing.cpp)