cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(template_srcs
src/sandwichmaker.cpp)

include_directories(
src
include
)

add_library(template_lib ${template_srcs})
target_link_libraries(template_lib pthread)

add_executable(template src/main.cpp)
target_link_libraries(template template_lib)
