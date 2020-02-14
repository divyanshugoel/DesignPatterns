cmake_minimum_required(VERSION 2.8.3)
project(bridge)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(bridge_srcs
    src/entertainmentDevice.cpp
    src/remoteButton.cpp
      )
include_directories(
src
include
)

add_library(bridge_lib ${bridge_srcs})
target_link_libraries(bridge_lib pthread)

add_executable(bridge src/main.cpp)
target_link_libraries(bridge bridge_lib)
#add_dependencies(observer auv_generate_messages_cpp)
