cmake_minimum_required(VERSION 3.14)
project(C_Programming C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Programming helloworld.c)
add_executable(for for.c)
add_executable(datatype datatype.c)
add_executable(float_min_max float_min_max.c)
add_executable(variable variable.c)
add_executable(constants constants.c)

add_executable(static static.c)
add_executable(extern extern.c extern2.c )
