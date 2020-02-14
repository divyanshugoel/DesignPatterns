cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(builder_srcs
src/RobotPlan.cpp
src/RobotBuilder.cpp)

include_directories(
src
include
)

add_library(builder_lib ${builder_srcs})
target_link_libraries(builder_lib pthread)

add_executable(builder src/main.cpp)
target_link_libraries(builder builder_lib)
