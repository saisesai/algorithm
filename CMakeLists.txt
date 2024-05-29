cmake_minimum_required(VERSION 3.15)

project(codeforce)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#add_executable(app codeforces/0800-0899/816e.cc) # TreeDP with backpack
add_executable(app codeforces/0500-0599/598/598f.cc) # 2D Computational Geometry
#add_executable(app atcoder/abc/351/351b.cc)
target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(app PRIVATE -D_CRT_SECURE_NO_WARNINGS)
