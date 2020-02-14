cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(protoype_srcs
src/animal.cpp)

include_directories(
src
include
)

add_library(protoype_lib ${protoype_srcs})
target_link_libraries(protoype_lib pthread)

add_executable(protoype src/main.cpp)
target_link_libraries(protoype protoype_lib)
