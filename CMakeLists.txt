cmake_minimum_required(VERSION 3.0)

# project name and language
project(c-utils LANGUAGES C)

add_executable(array-len array_len_test.c)
add_executable(random random_test.c)
add_executable(safe-math safe_math_test.c)
add_executable(safe-mem safe_mem_test.c)