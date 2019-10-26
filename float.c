/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:34 by djoye             #+#    #+#             */
/*   Updated: 2019/10/26 11:53:54 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 16:03:25 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 15:44:02 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*ft_itoa_base(long long dig, int base, char a)
{
	char				*s;
	int					i;
	unsigned long long	nb;
	int					res;
	int					sgn;

	sgn = (dig >= 0) ? 1 : -1;
	i = (dig < 0 && base == 10) || dig == 0 ? 1 : 0;
	dig = (sgn >= 0) ? dig : -dig;
	nb = dig;
	while (dig && ++i && base > 1 && base <= 36)
		dig = dig / base;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i--] = '\0';
	s[0] = sgn < 0 && base == 10 ? '-' : '0';
	while (base > 1 && base <= 36 && nb)
	{
		res = nb % base;
		s[i--] = res <= 9 ? res + '0' : res + a - 10;
		nb = nb / base;
	}
	return (s);
}

char					*ft_float(long double nb, int acc)
{
	char				*num;
	unsigned long long	integer;
	int					i;
	int					sgn;
	long double			ld;
	char				*res;

	if (nb != nb)
		return ("nan");
//	printf("%.14Lf orig\n", nb);
	sgn = nb < 0 ? -1 : 1;
	nb = sgn < 0 ? -nb : nb;
	i = 0;
	ld = nb;
	while (ld > 1 && ++i)
		ld = ld / 10;
	i += (sgn < 0) ? 1 : 0;
//    printf("%d len\n", i + acc + 2);
	res = (char*)malloc(sizeof(char) * (i + acc + 2));
	integer = (unsigned long long int)nb;
	integer += ((nb - integer) >= 0.5 && acc == 0) ? 1 : 0;
	num = ft_itoa_base(integer, 10, 'A');
	res[i + acc + 1] = '\0';
	i = 0;
	if ( sgn < 0)
	{
		res[i] = '-';
		i++;
	}
	while (*num)
		res[i++] = *num++;
	res[i] = acc != 0 ? '.' : '\0';
	while (acc-- > 0 && (nb = nb * 10) >= 0 && ++i)
	{
		if ((nb - (unsigned long long)nb) >= 0.5 && acc == 0)
			res[i] = (unsigned long long)nb % 10 + 1 + '0';
		else res[i] = ((unsigned long long)nb % 10 + '0');
		nb = nb - (unsigned long long)nb;
	}
//	printf("%s res\n", res);
	return (res);
}
