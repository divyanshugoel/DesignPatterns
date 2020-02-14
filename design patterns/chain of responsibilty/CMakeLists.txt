cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(chain_srcs
src/chainofresponsibility.cpp)

include_directories(
src
include
)

add_library(chain_lib ${chain_srcs})
target_link_libraries(chain_lib pthread)

add_executable(chain src/main.cpp)
target_link_libraries(chain chain_lib)
