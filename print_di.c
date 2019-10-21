/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:31:58 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/21 10:32:02 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char     *ft_di2(t_flags *yep, va_list *ap)
{
    int sign;
    short sh;
    char c;
    char *s;

    if (yep->len == 3)
    {
        sh = (short)va_arg(*ap, int);
        s = ft_itoa_base(sh, 10, 'a', sign = (sh > 0) ? 1 : -1);
    }
    else if (yep->len == 4)
    {
        c = (char)va_arg(*ap, int);
        s = ft_itoa_base(c, 10, 'a', sign = (c > 0) ? 1 : -1);
    }
    return (s);
}

int		ft_di(t_flags *yep, va_list *ap)
{
    char *s;
    int sign;
    int i;
    long l;
    long long ll;

    if (yep->len == 0)
    {
        i = (int)va_arg(*ap, int);
        s = ft_itoa_base(i, 10, 'a', sign = (i > 0) ? 1 : -1);
    }
    else if (yep->len == 1)
    {
        l = (long)va_arg(*ap, long);
        s = ft_itoa_base(l, 10, 'a', sign = (l > 0) ? 1 : -1);
    }
    else if (yep->len == 2)
    {
        ll = (long long)va_arg(*ap, long long);
        s = ft_itoa_base(ll, 10, 'a', sign = (ll > 0) ? 1 : -1);
    }
    else
        s = ft_di2(yep, ap);
    //ft_arg_di(yep, s, ft_strlen(s));
    return (ft_putstr(s));
}
