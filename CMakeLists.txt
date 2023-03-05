cmake_minimum_required (VERSION 3.0)

project (Neural_Network)

include_directories (${CMAKE_SOURCE_DIR}/Eigen3/include/eigen3)

add_executable (Neural_Network Main.cpp)