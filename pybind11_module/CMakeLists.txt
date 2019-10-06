project(dtm)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(${CMAKE_CURRENT_LIST_DIR}/..)

add_subdirectory(pybind11)

pybind11_add_module(dtm dtm.cpp)

target_link_libraries(dtm PRIVATE fast_dtm)
  