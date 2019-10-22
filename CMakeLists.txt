cmake_minimum_required(VERSION 3.14)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        addpre.c
        addsuff.c
        assoc.c
        float.c
        print_di.c
        ft_printf.c
        ft_printf.h
        func_str.c
        ft_arg_di.c
        ft_strdel.c
        ft_strdup.c
        parse.c
        ft_strnew.c
        treatment.c)
