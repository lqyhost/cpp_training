cmake_minimum_required(VERSION 3.8)
project(cpp_training)

set(CMAKE_CXX_STANDARD 11)

# base

#p1
add_executable(p1_1 b1_program/1_1_process.cpp)
add_executable(p1_2 b1_program/1_2_func.cpp)
add_executable(p1_3 b1_program/1_3_class.cpp)

#p4
add_executable(p4_1 b4_function/4_1_hanoi.cpp)
add_executable(p4_2 b4_function/4_2_reorder.cpp)
add_executable(p4_3 b4_function/4_3_prime_judge.cpp)

