cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(adapter_srcs
src/enemyattacker.cpp)

include_directories(
src
include
)

add_library(adapter_lib ${adapter_srcs})
target_link_libraries(adapter_lib pthread)

add_executable(adapter src/main.cpp)
target_link_libraries(adapter adapter_lib)
