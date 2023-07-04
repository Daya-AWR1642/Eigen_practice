cmake_minimum_required(VERSION 3.5)
project(Matrix_Example)

#find Eigen 
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN_INCLUDE_DIR})
#Add your source files
add_executable(first_eigen first_eigen.cpp)
#Link Eigen to your executable 
target_link_libraries(first_eigen Eigen3::Eigen)
