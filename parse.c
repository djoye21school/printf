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

static void     ft_flags(t_flags *yep, char **str)
{
    while (**str && (**str == ' ' || **str == '-' || **str == '+' ||
    **str == '0' || **str == '#'))
    {
        (**str == '-') ? yep->min = 1 : 0;
        (**str == '+') ? yep->plus = 1 : 0;
        (**str == ' ') ? yep->space = 1 : 0;
        (**str == '0') ? yep->zero = 1 : 0;
        (**str == '#') ? yep->hash = 1 : 0;
        (*str)++;
    }
    if (yep->space == 1 && yep->plus == 1) // в приоритете +, ставится знак
        yep->space = 0;
    if (yep->zero == 1 && yep->minus == 1) // в приоритете -, выравнивается по правому краю
        yep->zero = 0;
}

static void     ft_width(t_flags *yep, char **str, va_list *ap)
{
    if (**str == '*')
    {
        yep->width = (long long)va_arg(*ap, long long int);
        if (yep->width < 0)
        {
            yep->width = yep->width * (-1);
            yep->min = 1;
        }
        (*str)++;
    }
    else
    {
        yep->width = ft_atoi(*str);
        while (**str && **str >= 'a' && **str <= 'z')
            (*str)++;
    }
}

static void     ft_precis(t_flags *yep, char **str, va_list *ap)
{
    //если точность -***, то точность не учитывается
    // учитывается последний * при %23***d ...
    if
}

char	*ft_parse(t_flags *yep, int *rate, va_list *ap, char *str)
{
	ft_flags(yep, &str);
	ft_width(yep, &str, ap);
	if (**str == '*' || (**str >= '0' && **str <= '9'))
        ft_width(yep, &str, ap);
	if (*str == '.')
	{
		ft_precis(yep, &str, ap);
	}
	ft_long(rate, &str);
	yep->type = *str;
	return (str);
}