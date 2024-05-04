cmake_minimum_required(VERSION 3.15)

project(codeforce)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

add_executable(app problems/1400-1499/1476a.cc)
target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
