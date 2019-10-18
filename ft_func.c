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

int		ft_atoi(char **str, int *nbr)
{
	long int tmp;

	tmp = 0;
	if (**str == '\0')
		return (0);
	while (**str >= '0' && **str <= '9')
	{
		tmp = (tmp * 10) + (**str - '0');
		(*str)++;
	}
	*nbr = tmp;
	return (0);
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
		return ;
	while (s[i] != 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
