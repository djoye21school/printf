/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_o.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:31:10 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/23 12:31:12 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void     ft_hash_o(t_flags *yep, int num)
{
    if (yep->hash != 0 && num != 1)
    {
        if ((yep->zero == 0 || yep->min != 0)
            || (yep->zero != 0 && yep->prcn > 0))
            yep->s = ft_strjoin("0", yep->s);
    }
}

static void     ft_width_o(t_flags *yep)
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
        if (yep->zero != 0 && yep->min == 0 && yep->prcn < 0
            && yep->hash != 0)
            len++;
        while (yep->prcn < 0 && yep->zero != 0 && len < yep->width)
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

static void     ft_prcn_o(t_flags *yep, int updown)
{
    int num;
    int len;

    num = 0;
    if (*(yep->s) == '0' && (*(yep->s + 1)) == '\0')
        num++;
    ft_hash_o(yep, num);
    len = ft_strlen(yep->s);
    if (yep->prcn > len)
    {
        while (len < yep->prcn)
        {
            yep->s = ft_strjoin("0", yep->s);
            len++;
        }
    }
    ft_width_o(yep);
}

size_t          ft_arg_o(t_flags *yep, int flag)
{
    size_t res;

    ft_prcn_o(yep, flag);
    res = ft_putstr(yep->s);
    return (res);
}
