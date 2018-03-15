CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(cpp)

add_executable(
  output
  bro.cpp
)
