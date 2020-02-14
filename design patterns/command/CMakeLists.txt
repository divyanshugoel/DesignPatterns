cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(command_srcs
src/device.cpp
include/command.hpp)

include_directories(
src
include
)

add_library(command_lib ${command_srcs})
target_link_libraries(command_lib pthread)

add_executable(command src/main.cpp)
target_link_libraries(command command_lib)
