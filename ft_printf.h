
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

typedef	struct	t_list
{
	int		plus;
	int		min;
	int		space;
	int		hash;
	int		zero;
	long long width;
	int		prcn;
	char	type;
	int		len;
}				t_flags;


size_t          ft_putstr(const char *s);
char			*ft_itoa_base(unsigned long long dig, int base, char a, int sgn);
int				ft_float(long double nb, int acc);

int		ft_print_di(va_list *ap, t_flags *yep, long long int res);

size_t		ft_ex_di(int rate, va_list *ap, t_flags *yep);
size_t		ft_ex_o(int rate, va_list *ap, t_flags *yep);
size_t		ft_ex_hex(int rate, va_list *ap, t_flags *yep);
size_t		ft_assoc(int rate, va_list *ap, t_flags *yep);

int			ft_atoi(char **str, int *nbr);
char		*ft_strchr(const char *s, int c);


static void     ft_precis(t_flags *yep, char **str, va_list *ap);
static void     ft_width(t_flags *yep, char **str, va_list *ap);
static void     ft_flags(t_flags *yep, char **str);
char		*ft_parse(t_flags *yep, int *rate, va_list *ap, char *str);

char		*ft_strchr(const char *s, int c);
size_t		ft_treatment(va_list *ap, char **format);

void		ft_putstrl(char *str, int len);
int			ft_parsestr(const char *format, va_list *ap);
int			ft_printf(char *format, ...);

#endif
