/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_neg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:20:41 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/01 15:21:00 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//перевод в др системы счисления, когда подается отриц число
char	ft_up(int n)
{
	if (n == 10)
		return ('A');
	if (n == 11)
		return ('B');
	if (n == 12)
		return ('C');
	if (n == 13)
		return ('D');
	if (n == 14)
		return ('E');
	if (n == 15)
		return ('F');
	return (n + '0');
}

char	ft_dw(int n)
{
	if (n == 10)
		return ('a');
	if (n == 11)
		return ('b');
	if (n == 12)
		return ('c');
	if (n == 13)
		return ('d');
	if (n == 14)
		return ('e');
	if (n == 15)
		return ('f');
	return (n + '0');
}

char	*ft_base_neg(long long nbr, int base, int flag)
{
	int i;
	int dig;
	char *str;
	char s;
	long long res;
	
	res = 4294967296 + nbr;
	dig = ft_kolvo_dig(res, base);
	if (!(str = (char *)malloc(sizeof(char) * (dig + 1))))
		return (NULL);
	str[dig] = '\0';
	while (dig)
	{
		i = res % base;
		if (flag == 1)
			s = ft_up(i);
		else
			s = ft_dw(i);
		str[--dig] = s;
		res = res / base;
	}
	return (str);
}

#include <stdio.h>

int		main()
{
	int r;
	r = -222;
	printf("%s\n", ft_base_neg(-222, 8, 1));
	int i;
	i = -222;
	printf("%o\n", i);
	return (0);
}
