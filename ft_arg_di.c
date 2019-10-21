/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:38:49 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/21 14:22:13 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_no_prcn(t_flags *yep, char *s, int len)
{
    int res;
    char flag;
    if (yep->plus == 1 && *s != '-')
    {
        len++;
        flag = "+";
    }
    if (yep->space == 1 && *s != '-' && yep->plus == 0)
        flag = " ";
    else
        yep->space = 0;
    if (yep->zero == 0 && yep->min == 0 && yep->width > len)
    return (res);
}

int     ft_arg_di(t_flags *yep, char *s, int len)
{
    int res;

    if (yep->prcn  0)
        res = ft_no_prcn(yep, s, len);
    else if (yep->min == 1)
        res = ft_align(yep, s, len);
    else if (yep->min == 0)
        ft_align(yep, s, len);
    return (res);
}
