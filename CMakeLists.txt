cmake_minimum_required(VERSION 3.16)

project(font-reader)

file(GLOB_RECURSE SRC src/*.cc src/*.h)
add_executable(font-reader ${SRC})