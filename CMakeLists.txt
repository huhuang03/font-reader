cmake_minimum_required(VERSION 3.16)

project(font-reader)

file(GLOB_RECURSE SRC src/*.cc src/*.h)
add_executable(font-reader ${SRC})

add_subdirectory(second-part/reader-util/src)
target_link_libraries(font-reader reader-util)

find_package(Boost COMPONENTS filesystem REQUIRED)
target_link_libraries(font-reader Boost::filesystem)