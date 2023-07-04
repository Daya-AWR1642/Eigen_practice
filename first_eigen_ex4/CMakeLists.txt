cmake_minimum_required(VERSION 3.5)
project(Eigen_ex4)

#finding the Eigen
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

# adding executable file
add_executable(eigen_ex4 eigen_ex4.cpp)

#linking executable with library
target_link_libraries(eigen_ex4 Eigen3::Eigen)
