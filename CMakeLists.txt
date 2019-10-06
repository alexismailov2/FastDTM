cmake_minimum_required(VERSION 3.5)
project(FastDTM)

# set path to your Eigen installation here
include_directories("/usr/local/eigen/3.2.8")

set(CMAKE_CXX_STANDARD 11)

add_library(fast_dtm
  dtm.cpp
  alias_samples.cpp)

set(SOURCE_FILES main.cpp )

add_executable(FastDTM
  main.cpp)

target_link_libraries(FastDTM
  fast_dtm)

add_subdirectory(pybind11_module)