
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 14:02:01 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/01 16:48:38 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <stddef.h>

#include <stdio.h>

typedef	struct          t_list
{
	int		            plus;
	int		            min;
	int		            space;
	int		            hash;
    int		            zero;
	long long           width;
	long long           prcn;
	char	            *type;
	int 		        len;
	char                *s;
}				        t_flags;

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strnew(size_t size);
size_t			ft_strlen(char *str);
size_t			ft_putstr(const char *s);
char			*ft_itoa_base(unsigned long long dig, int base, char a, int sgn);
int				ft_float(long double nb, int acc);

size_t      ft_perc(t_flags *yep);

static void     ft_width_p(t_flags *yep);
static void     ft_prcn_p(t_flags *yep);
size_t          ft_p(t_flags *yep, void *tmp);

static void     ft_width_u(t_flags *yep);
static void     ft_prcn_u(t_flags *yep);
size_t      ft_u(t_flags *yep, va_list *ap);

static void     ft_hash_o(t_flags *yep, int num);
static void     ft_width_o(t_flags *yep);
static void     ft_prcn_o(t_flags *yep, int updown);
size_t          ft_arg_o(t_flags *yep, int flag);
static void ft_o2(t_flags *yep, va_list *ap, int flag);
size_t      ft_o(t_flags *yep, va_list *ap);

static void     ft_hash(t_flags *yep, int flag, int num, int updown);
static void     ft_width_x(t_flags *yep, int num, int updown);
static void     ft_prcn_x(t_flags *yep, int updown);
size_t      ft_arg_x(t_flags *yep, int flag);
static void ft_x2(t_flags *yep, va_list *ap, int flag);
size_t      ft_x(t_flags *yep, va_list *ap);

static int      ft_neg(t_flags *yep);
static void     ft_prcn(t_flags *yep, int sign);
static void     ft_addflag(t_flags *yep, int sign);
static  void    ft_width_di(int sign, t_flags *yep);
size_t			ft_arg_di(t_flags *yep);
static void			ft_di2(t_flags *yep, va_list *ap);
size_t			ft_di(t_flags *yep, va_list *ap);

size_t			ft_assoc(va_list *ap, t_flags *yep);

static void		ft_long(t_flags *yep, char **str);
long int		ft_atoi(const char *str);
static int		ft_precis(t_flags *yep, char **str, va_list *ap);
static void		ft_width(t_flags *yep, char **str, va_list *ap);
static void		ft_flags(t_flags *yep, char **str);
int				ft_parse(t_flags *yep, va_list *ap, char *str);

size_t			ft_treatment(va_list *ap, char **format, t_flags *yep);

void			ft_putstrl(char *str, int len);
int				ft_parsestr(const char *format, va_list *ap);
int				ft_printf(char *format, ...);

#endif
