/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:30:56 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/23 12:30:57 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_o2(t_flags *yep, va_list *ap, int flag)
{
    unsigned short h;
    unsigned char hh;

    if (yep->len == 3)
    {
        h = (unsigned short)va_arg(*ap, int);
        yep->s = ft_itoa_base(h, 8, (flag > 0) ? 'a' : 'A', 1);
    }
    else if (yep->len == 4)
    {
        hh = (unsigned char)va_arg(*ap, int);
        yep->s = ft_itoa_base(hh, 8, (flag > 0) ? 'a' : 'A', 1);
    }
}

size_t      ft_o(t_flags *yep, va_list *ap)
{
    int flag;
    unsigned int i;
    unsigned long l;
    unsigned long long ll;

    (*(yep->type) == 'o') ? flag = 1 : (-1);
    if (yep->len == 0)
    {
        i = (unsigned int)va_arg(*ap, unsigned int);
        yep->s = ft_itoa_base(i, 8, (flag > 0) ? 'a' : 'A', 1);
    }
    else if (yep->len == 1)
    {
        l = (unsigned long)va_arg(*ap, unsigned long);
        yep->s = ft_itoa_base(l, 8, (flag > 0) ? 'a' : 'A', 1);
    }
    else if (yep->len == 2)
    {
        ll = (unsigned long long)va_arg(*ap, unsigned long long);
        yep->s = ft_itoa_base(ll, 8, (flag > 0) ? 'a' : 'A', 1);
    }
    else
        ft_o2(yep, ap, flag);
    return (ft_arg_o(yep, flag));
}
