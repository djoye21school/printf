/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:24:29 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/08 15:24:32 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(t_flags *yep, char **str)
{
	const char *b = "+-0 #";
	while (**str != '\0' && ft_strchr(b, **str) != 0)
	{
		if (**str == '+')
			yep->plus = 1;
		else if (**str == '-')
			yep->min = 1;
		else if (**str == ' ')
			yep->space = 1;
		else if (**str == '0')
			yep->zero = 1;
		else if (**str == '#')
			yep->hash = 1;
		(**str)++;
	}
}

void	ft_width(int *wd, char **str, va_list *ap)
{
	if (**str == '\0')
		return ;
	if (**str == '*')
	{
		*wd = va_arg(*ap, int);
		*str += 1;
	}
	*wd = ft_atoi(str, wd);
}

void	ft_long(int *rate, char **str)
{
	if (**str == 'l')
	{
		*rate = 1;
		*str += 1;
		if (**str == 'l')
		{
			*rate = 2;
			*str += 1;
		}
	}
	else if (**str == 'h')
	{
		*rate = 3;
		*str += 1;
		if (**str == 'h')
		{
			*rate = 4;
			*str += 1;
		}
	}
	else if (**str == 'L')
	{
		*rate = 5;
		*str += 1;
	}
}

char	*ft_parse(t_flags *yep, int *rate, va_list *ap, char *str)
{
	ft_flags(yep, &str);
	ft_width(&(yep->width), &str, ap);
	if (*str == '.')
	{
		str++;
		ft_width(&(yep->prcn), &str, ap);
	}
	ft_long(rate, &str);
	yep->type = *str;
	return (str);
}