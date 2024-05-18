cmake_minimum_required(VERSION 3.15)

project(codeforce)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#add_executable(app problems/0800-0899/816e.cc)
add_executable(app problems/1800-1899/1829/1829b.cc)
target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(app PRIVATE -D_CRT_SECURE_NO_WARNINGS)
