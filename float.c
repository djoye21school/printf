/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:34 by djoye             #+#    #+#             */
/*   Updated: 2019/10/16 11:01:27 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char			*ft_itoa_base(long long dig, int base)
{
	char		*s;
	int			i;
	long long	nb;
	char		x;
	char		res;

	nb = dig;
	i = dig <= 0 ? 1 : 0;
	while (dig && ++i && base > 1 && base <= 32)
		dig = dig / base;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i--] = '\0';
	if (nb < 0)
		s[0] = '-';
	nb = nb < 0 ? -nb : nb;
	x = base <= 10 ? '0' : 'A' - 10;
	while (nb && base > 1 && base <= 32)
	{
		res = nb % base + x;
		res = res < 'A' && res > '9' ? res - 'A' + '9' + 1 : res;
		s[i--] = res;
		nb = nb / base;
	}
	return (s);
}

long double		ft_float(long double nb, int acc)
{
	char		*num;
	long long	integer;

	integer = (long long int)nb;
	nb = nb - integer;
	num = ft_itoa_base(integer, 10);
	while (*num)
		write(1, num++, 1);
	write(1, ".", 1);
	while (acc--)
		nb = nb * 10;
	integer = (long long int)nb;
	num = ft_itoa_base(integer, 10);
	while (*num)
		write(1, num++, 1);
	return (0);
}

int				main(void)
{
	long double i;

	i = 1234567890123.12345678901234567890;
	ft_float(i, 15);
	printf("\n%0.15Lf\n", i);
	return (0);
}
