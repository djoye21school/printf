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

static int      ft_neg(char *s)
{
    char *buf;

    if (*s != '-')
        return (0);
    s++;
    if (!(s = ft_strdup(s)))
        return (-2);
    return (1);
}

static char     *ft_prcn(t_flags *yep, char *s, int sign)
{
    int len;
    char *buf;

    len = ft_strlen(s);
    if (yep->prcn > len)
    {
        while (len < yep->prcn)
        {
            buf = ft_addpre("0", s);
            len++;
        }
        return (buf);
    }
    else
    {
        buf = s;
        //free(s);
        return (buf);
    }
}

static void    ft_addflag(char *s, t_flags *yep, int sign)
{
    if (sign == 0)
    {
        if (yep->space == 1 && yep->plus == 0)
            s = ft_addpre(" ", s);
        else if (yep-> plus == 0)
            s = ft_addpre("+", s);
    }
    else
        s = ft_addpre("-", s);
}

static  void    ft_width_di(char *s, int sign, t_flags *yep)
{
    int len;

    len = ft_strlen(s);
    if (yep->width > len)
    {
        while (yep->min == 1 && yep->width > len)
        {
            s = ft_addsuff(" ", s);
            len++;
        }
        if (yep->zero == 1 && yep->min != 1 && (yep->plus == 1 || sign == 1
        || yep->space == 1) && yep->prcn < 0)
            len++;
        while (yep->zero == 1 && len < yep->width && yep->prcn < 0)
        {
            s = ft_addpre("0", s);
            len++;
        }
        while (len < yep->width)
        {
            s = ft_addpre(" ", s);
            len++;
        }
    }
}

size_t             ft_arg_di(t_flags *yep, char *s)
{
    size_t  res;
    int     sign;
    char *buf;

    if ((sign = ft_neg(s)) == -2)
        return (-2);
    buf = ft_prcn(yep, s, sign);
    if (yep->zero != 1 || yep->min == 1 || yep->prcn > 0)
        ft_addflag(buf, yep, sign);
    ft_width_di(buf, sign, yep);
    if (yep->zero == 1 && yep->min != 1 && yep->prcn < 0)
        ft_addflag(buf, yep, sign);
    res = ft_putstr(buf);
    return (res);
}