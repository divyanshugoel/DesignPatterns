cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(observer_srcs   src/observer.cpp    )
include_directories(
src
include
)

add_library(observer_lib ${observer_srcs})
target_link_libraries(observer_lib pthread)

add_executable(observer src/main.cpp)
target_link_libraries(observer observer_lib)
#add_dependencies(observer auv_generate_messages_cpp)
