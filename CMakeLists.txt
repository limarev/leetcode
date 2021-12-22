cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 17)

find_package(Catch2 REQUIRED)

project(tests)

add_subdirectory(two_sum)
add_executable(tests tests.cpp)

target_link_libraries(tests PRIVATE two_sum Catch2::Catch2)

include(Catch)
catch_discover_tests(tests)

