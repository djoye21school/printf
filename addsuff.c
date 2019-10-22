/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addsuff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:58:19 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/22 12:58:21 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_addsuff(char *suff, char *str)
{
    char    *res;
    int     i;
    int len;
    i = -1;

    len = ft_strlen(suff) + ft_strlen(str);
    if (!(ft_strnew(len)))
        return (NULL);
    while (str[++i])
        res[i] = str[i];
    len = 0;
    while (suff[len])
    {
        res[i] = suff[len];
        i++;
        len++;
    }
    free(str);
    return (res);
}
