/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:20:55 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/01 15:09:09 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "ft_kolvo_dig.c"

char	ft_base_up(int n)
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

char	ft_base_dw(int n)
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

char	*ft_base_pos(unsigned long nbr, int base, int flag)
{
	int check;
	int dig;
	char *str;
	char s;
	
	dig = ft_kolvo_dig(nbr, base);
	if (!(str = (char *)malloc(sizeof(char) * (dig + 1))))
		return (NULL);
	str[dig] = '\0';
	while (dig)
	{
		check = nbr % base;
		if (flag == 1)
			s = ft_base_up(check);
		else
			s = ft_base_dw(check);
		str[--dig] = s;
		nbr = nbr / base;
	}
	return (str);
}

#include <stdio.h>

int		main()
{
	printf("%s\n", ft_base_pos(-34, 16, 1));
	printf("%s\n", ft_base_pos(-34, 8, 1));
	long i;
	i = -34;
	printf("%lx\n", i);
	printf("%lu\n", i);
	return (0);
}
