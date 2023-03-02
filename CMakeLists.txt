cmake_minimum_required (VERSION 3.0)

project (Neural_Network)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

include_directories (${Eigen_INCLUDE_DIR})

add_executable (Main Main.cpp)