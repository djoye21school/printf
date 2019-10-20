cmake_minimum_required(VERSION 3.14)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        assoc.c
        float.c
        ft_print_di.c
        ft_printf.c
        ft_printf.h
        func_str.c
        parse.c
        treatment.c)
