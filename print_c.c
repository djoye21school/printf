/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 09:27:38 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/24 09:27:40 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_width_c(t_flags *yep)
{
    int len;

    len = ft_strlen(yep->s);
    if (yep->width > len)
    {
        while (yep->min == 1 && len < yep->width)
        {
            yep->s = ft_strjoin(yep->s, " ");
            len++;
        }
        while (yep->zero == 1 && len < yep->width)
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

size_t      ft_c(t_flags *yep, char c)
{
    int num;
    size_t res;

    num = 0;
    yep->s = ft_strnew(1);
    if (c == 0)
        num++;
    *(yep->s) = c;
    //if (num == 1)
    //    yep->width--;
    if (yep->width > 0)
        ft_width_c(yep);
    //if (num == 1)
    //    ft_spec_c(yep);
    res = ft_putstr(yep->s);
    return (res);
}
