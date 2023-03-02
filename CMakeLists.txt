cmake_minimum_required (VERSION 3.0)
project (Neural_Network)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

include_directories (${EIGEN3_INCLUDE_DIR})

add_executable (Neural_Network Main.cpp)

target_link_libraries("${PROJECT_NAME}" Eigen3::Eigen)