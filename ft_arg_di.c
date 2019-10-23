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

static int      ft_neg(t_flags *yep)
{
    char *buf;

    if (*(yep->s) != '-')
        return (0);
    (yep->s)++;
    if (!(yep->s = ft_strdup(yep->s)))
        return (-2);
    return (1);
}

static void     ft_prcn(t_flags *yep, int sign)
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

static void    ft_addflag(t_flags *yep, int sign)
{
    if (sign == 0)
    {
        if (yep->space == 1 && yep->plus == 0)
            yep->s = ft_strjoin(" ", yep->s);
        else if (yep-> plus == 1)
            yep->s = ft_strjoin("+", yep->s);
    }
    else
        yep->s = ft_strjoin("-", yep->s);
}

static  void    ft_width_di(int sign, t_flags *yep)
{
    int len;

    len = ft_strlen(yep->s);
    if (yep->width > len)
    {
        while (yep->min == 1 && yep->width > len)
        {
            yep->s = ft_strjoin(yep->s, " ");
            len++;
        }
        if (yep->zero == 1 && yep->min == 0 && (yep->plus == 1 || sign == 1
        || yep->space == 1) && yep->prcn < 0)
            len++;
        while (yep->zero == 1 && len < yep->width && yep->prcn < 0)
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

size_t             ft_arg_di(t_flags *yep)
{
    size_t  res;
    int     sign;

    res = 0;
    if ((sign = ft_neg(yep)) == -2)
        return (-2);
    ft_prcn(yep, sign);
    if (yep->zero != 1 || yep->min == 1 || yep->prcn > 0)
        ft_addflag(yep, sign);
    ft_width_di(sign, yep);
    if (yep->zero == 1 && yep->min != 1 && yep->prcn < 0)
        ft_addflag(yep, sign);
    res = ft_putstr(yep->s);
    return (res);
}