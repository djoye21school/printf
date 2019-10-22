/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addpre.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:43:03 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/22 12:43:04 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_addpre(char *pre, char *str)
{
    char    *res;
    int     i;
    int len;
    i = -1;

    len = ft_strlen(pre) + ft_strlen(str);
    if (!(ft_strnew(len)))
        return (NULL);
    while (pre[++i])
        res[i] = pre[i];
    len = 0;
    while (str[len])
    {
        res[i] = str[len];
        i++;
        len++;
    }
    free(str);
    return (res);
}