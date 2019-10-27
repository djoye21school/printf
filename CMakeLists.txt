cmake_minimum_required(VERSION 3.14)
project(222 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(222
        assoc.c
        delete.c
        float.c
        ft_arg_di.c
        ft_arg_f.c
        ft_arg_o.c
        ft_arg_xx.c
        ft_itoa_u.c
        ft_printf.c
        ft_printf.h
        ft_strdup.c
        ft_strjoin.c
        ft_strnew.c
        func_str.c
        parse.c
        print_c.c
        print_di.c
        print_f.c
        print_o.c
        print_p.c
        print_perc.c
        print_s.c
        print_u.c
        print_xx.c
        treatment.c)
