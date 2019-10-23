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

static void    ft_di2(t_flags *yep, va_list *ap)
{
    int sign;
    short sh;
    char c;

    if (yep->len == 3)
    {
        sh = (short)va_arg(*ap, int);
        yep->s = ft_itoa_base(sh, 10, 'a', sign = (sh > 0) ? 1 : -1);
    }
    else if (yep->len == 4)
    {
        c = (char)va_arg(*ap, int);
        yep->s = ft_itoa_base(c, 10, 'a', sign = (c > 0) ? 1 : -1);
    }
}

size_t		ft_di(t_flags *yep, va_list *ap)
{
    int sign;
    int i;
    long l;
    long long ll;

    if (yep->len == 0 && *(yep->type) != 'D' && *(yep->type) != 'I')
    {
        i = (int)va_arg(*ap, int);
        yep->s = ft_itoa_base(i, 10, 'a', sign = (i > 0) ? 1 : -1);
    }
    else if (yep->len == 1 || *(yep->type) == 'D' || *(yep->type) == 'I')
    {
        l = (long)va_arg(*ap, long);
        yep->s = ft_itoa_base(l, 10, 'a', sign = (l > 0) ? 1 : -1);
    }
    else if (yep->len == 2)
    {
        ll = (long long)va_arg(*ap, long long);
        yep->s = ft_itoa_base(ll, 10, 'a', sign = (ll > 0) ? 1 : -1);
    }
    else
        ft_di2(yep, ap);
    return (ft_arg_di(yep));
}
