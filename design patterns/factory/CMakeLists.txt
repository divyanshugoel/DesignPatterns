cmake_minimum_required(VERSION 2.8.3)
project(observer)
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(factory_srcs   src/windowTypes.cpp    )
include_directories(
src
include
)

add_library(factory_lib ${factory_srcs})
target_link_libraries(factory_lib pthread)

add_executable(factory src/main.cpp)
target_link_libraries(factory factory_lib)
#add_dependencies(factory auv_generate_messages_cpp)
