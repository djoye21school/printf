cmake_minimum_required(VERSION 3.14)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        assoc.c
        float.c
        ft_arg_di.c
        ft_arg_o.c
        ft_arg_Xx.c
        ft_printf.c
        ft_printf.h
        ft_strdup.c
        ft_strjoin.c
        ft_strnew.c
        func_str.c
        parse.c
        print_c.c
        print_di.c
        print_o.c
        print_p.c
        print_perc.c
        print_u.c
        delete.c
        print_s.c
        ft_itoa_u.c
        print_Xx.c
        treatment.c)
