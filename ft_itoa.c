/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 13:30:12 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/03/21 20:51:13 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int nbr)
{
	char *str;
	int i = 0;
	int sign = 1;
	unsigned int res;
	if (nbr < 0)
	{
		sign = -1;
		res = nbr * (-1);
		i++;
	}
	else
		res = nbr;
	while (nbr)
	{
		nbr = nbr/ 10;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	if (sign < 0)
		str[0] = '-';
	while (res)
	{
		str[--i] = res % 10 +'0';
		res = res / 10;
	}
	return (str);
}

int		main()
{
	char *str = ft_itoa(-2147483648);
	printf("%s", str);
	return (0);
}
