/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:08:41 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/23 16:08:46 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void     ft_width_u(t_flags *yep)
{
    int len;

    len = ft_strlen(yep->s);
    if (yep->width > len)
    {
        while (yep->min != 0 && len < yep->width)
        {
            yep->s = ft_strjoin(yep->s, " ");
            len++;
        }
        while (yep->zero != 0 && yep->prcn < 0 && len < yep->width)
        {
            yep->s = ft_strjoin("0", yep->s);
            len++;
        }
        while (len < yep->width)
        {
            yep->s = ft_strjoin(" ", yep->s);
            len++;
        }
    }
}

static void     ft_prcn_u(t_flags *yep)
{
    int len;

    len = ft_strlen(yep->s);
    if (yep->prcn > len)
    {
        while (len < yep->prcn)
        {
            yep->s = ft_strjoin("0", yep->s);
            len++;
        }
    }
}

size_t      ft_u(t_flags *yep, va_list *ap)
{
    size_t res;
    if (yep->len == 0)
        yep->s = ft_itoa_base((unsigned)va_arg(*ap, unsigned int), 10, 'a', 1);
    else if (yep->len == 1)
        yep->s = ft_itoa_base((unsigned long)va_arg(*ap, unsigned long), 10,
                'a', 1);
    else if (yep->len == 2)
        yep->s = ft_itoa_base(
                (unsigned long long)va_arg(*ap, unsigned long long), 10, 'a', 1);
    else if (yep->len == 3)
        yep->s = ft_itoa_base((unsigned short)va_arg(*ap, unsigned),
                10, 'a', 1);
    else if (yep->len == 4)
        yep->s = ft_itoa_base((unsigned char)va_arg(*ap, unsigned), 10, 'a', 1);
    ft_prcn_u(yep);
    ft_width_u(yep);
    res = ft_putstr(yep->s);
    return(res);
}