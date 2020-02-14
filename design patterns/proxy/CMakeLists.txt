cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(proxy_srcs
src/proxy.cpp)

include_directories(
src
include
)

add_library(proxy_lib SHARED ${proxy_srcs})
target_link_libraries(proxy_lib pthread)

add_executable(proxy src/main.cpp)
target_link_libraries(proxy proxy_lib)
