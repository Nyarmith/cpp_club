project(ch10)
cmake_minimum_required(VERSION 2.8.12)
add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(median_unittest median_unittest.cpp)
target_link_libraries(median_unittest ${CONAN_LIBS})
