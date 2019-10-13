
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
# include <wchar.h>
# include <string.h>

typedef	struct	t_list
{
	int		plus;
	int		min;
	int		space;
	int		hash;
	int		zero;
	int		width;
	int		prcn;
	char	type;
}				t_flags;

int		ft_printf(char *format, ...);
int		ft_parsestr(const char *format, va_list *ap);
void	ft_putstrl(char *str, int len);
size_t	ft_treatment(va_list *ap, char **format);


char	*ft_parse(t_flags *yep, int *wid, va_list *ap, char *str);
int		ft_flags(t_flags *yep, char **str);
char	*ft_strchr(const char *s, int c);

size_t		ft_assoc(int rate, va_list *ap, t_flags *yep);

int		ft_kolvo_dig(uintmax_t nbr, int base);
char	*ft_base_pos(unsigned long nbr, int base, int flag);
int		ft_atoi(char **str, int *nbr);
void	ft_putnbr(int nb);

//char	*ft_base_neg(long long nbr, int base, int flag);

typedef struct	s_list
{

}		t_buf;


#endif
