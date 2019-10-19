/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:17:36 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/09 10:17:41 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *str)
{
    int i;
    int sign;
    unsigned long int nbr;

    sign = 1;
    nbr = 0;
    while (*str == ' ' || *str == '\n' || *str == '\t' || *str = '\v' ||
            *str == '\f' || *str == '\r')
        str++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }

    return ((long int)nbr * sign);
}


char	*ft_strchr(const char *s, int c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (char *)(&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return (char *)(&s[i]);
	return (NULL);
}

size_t		ft_putstr(const char *s)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
