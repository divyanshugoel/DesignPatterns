cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(decorator_srcs
src/pizza.cpp)

include_directories(
src
include
)

add_library(decorator_lib ${decorator_srcs})
target_link_libraries(decorator_lib pthread)

add_executable(decorator src/main.cpp)
target_link_libraries(decorator decorator_lib)
