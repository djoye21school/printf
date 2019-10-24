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
    unsigned int i;

    if (yep->len == 3)
    {
        h = (unsigned short)va_arg(*ap, int);
        i = (unsigned int)h;
        yep->s = ft_itoa_base(i, 8, (flag > 0) ? 'a' : 'A');
    }
    else if (yep->len == 4)
    {
        hh = (unsigned char)va_arg(*ap, int);
        i = (unsigned int)hh;
        yep->s = ft_itoa_base(i, 8, (flag > 0) ? 'a' : 'A');
    }
}

size_t      ft_o(t_flags *yep, va_list *ap)
{
    int flag;
    unsigned int i;
    unsigned long l;
    unsigned long long ll;

    flag = (*(yep->type) == 'o') ? 1 : -1;
    if (yep->len == 0)
    {
        i = (unsigned long int)va_arg(*ap, unsigned int);
        yep->s = ft_itoa_base(i, 8, (flag > 0) ? 'a' : 'A');
    }
    else if (yep->len == 1)
    {
        l = (unsigned long long)va_arg(*ap, unsigned long);
        yep->s = ft_itoa_base(l, 8, (flag > 0) ? 'a' : 'A');
    }
    else if (yep->len == 2)
    {
        ll = (unsigned long long)va_arg(*ap, unsigned long long);
        yep->s = ft_itoa_base(ll, 8, (flag > 0) ? 'a' : 'A');
    }
    else
        ft_o2(yep, ap, flag);
    return (ft_arg_o(yep, flag));
}
