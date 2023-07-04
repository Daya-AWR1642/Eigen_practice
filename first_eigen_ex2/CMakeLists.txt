cmake_minimum_required(VERSION 3.5)
project(Eigen_EX2)

#find eigen 
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

# adding my source files
add_executable(eigen_ex2 eigen_ex2.cpp)

#Link Eigen to your executable
target_link_libraries(eigen_ex2 Eigen3::Eigen)

