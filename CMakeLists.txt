cmake_minimum_required(VERSION 3.14)
project(printt C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)
include_directories(srcs)

add_executable(printt
        includes/ft_printf.h
        srcs/assoc.c
        srcs/delete.c
        srcs/float.c
        srcs/ft_arg_di.c
        srcs/ft_arg_f.c
        srcs/ft_arg_o.c
        srcs/ft_arg_xx.c
        srcs/ft_itoa_u.c
        srcs/ft_printf.c
        srcs/ft_printf.h
        srcs/ft_strdup.c
        srcs/ft_strjoin.c
        srcs/ft_strnew.c
        srcs/func_str.c
        srcs/parse.c
        srcs/print_c.c
        srcs/print_di.c
        srcs/print_f.c
        srcs/print_o.c
        srcs/print_p.c
        srcs/print_perc.c
        srcs/print_s.c
        srcs/print_u.c
        srcs/print_xx.c
        srcs/treatment.c)
