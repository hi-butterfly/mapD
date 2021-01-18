cmake_minimum_required(VERSION 3.13)
project(mapD C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

add_executable(mapD main.c)