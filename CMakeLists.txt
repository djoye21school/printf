cmake_minimum_required(VERSION 3.14)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        ft_arg_Xx.c
        ft_arg_o.c
        print_Xx.c
        print_o.c
        print_p.c
        assoc.c
        float.c
        ft_arg_di.c
        ft_printf.c
        ft_printf.h
        ft_strdup.c
        ft_strnew.c
        ft_strjoin.c
        func_str.c
        print_perc.c
        parse.c
        print_di.c
        print_u.c
        treatment.c)
