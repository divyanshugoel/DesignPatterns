cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(facade_srcs
src/BankInterface.cpp)

include_directories(
src
include
)

add_library(facade_lib ${facade_srcs})
target_link_libraries(facade_lib pthread)

add_executable(facade src/main.cpp)
target_link_libraries(facade facade_lib)
