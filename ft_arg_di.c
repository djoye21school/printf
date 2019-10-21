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

int     ft_prcn_wid(t_flags *yep, char *s, int len)
{
    int res;
    if (yep->plus == 1 && *s != '-')
        len++;
    if (yep->space == 1 && *s != '-')

    return (res);
}

int     ft_arg_di(t_flags *yep, char *s, int len)
{
    int res;

    if (yep->prcn_sign == -1)
        res = ft_prcn_wid(yep, s, len);
    else if (yep->min == 1)
        res = ft_align(yep, s, len);
    else if (yep->min == 0)
        ft_not_align(yep, s, len);
    return (res);
}
