cmake_minimum_required(VERSION 3.5)
project(Eigen_Ex3)

# find Eigen 
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

#Adding source file
add_executable(eigen_ex3 eigen_ex3.cpp)

#linking eigen to executable file
target_link_libraries(eigen_ex3 Eigen3::Eigen)

