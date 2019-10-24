NAME = libftprintf.a
MKEX = gcc -o
COMP = gcc -c
AR = ar -rc
SRC =   ft_arg_o.c      ft_strjoin.c    print_di.c      treatment.c \
        assoc.c         ft_printf.c     ft_strnew.c     print_o.c \
        float.c             func_str.c      print_p.c \
        ft_arg_Xx.c     parse.c         print_perc.c \
        ft_arg_di.c     ft_strdup.c     print_Xx.c      print_u.c


FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	@$(AR) $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\033[32m$(NAME) OK ! \033[0m"

$(OBJECT) :
	@$(COMP) $(SRC) $(FLAGS)
	@echo "\033[33mCompilation OK\033[0m"

clean :
	@/bin/rm -f $(OBJECT)
	@echo "\033[33mObject deleted\033[0m"


fclean : clean
	@/bin/rm -f $(NAME)
	@echo "\033[33mExec deleted\033[0m"

re : fclean all