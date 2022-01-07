cmake_minimum_required(VERSION 3.21)
project(s21_decimal C)

set(CMAKE_C_STANDARD 17)

add_executable(s21_decimal main.c s21_decimal.c s21_decimal.h)
