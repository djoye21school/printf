/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:34 by djoye             #+#    #+#             */
/*   Updated: 2019/10/27 11:30:42 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 16:03:25 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 15:44:02 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char 	*ft_itoa_base(long long dig, int base, char a)
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

char					*ft_float(long double nb, long acc)
{
	char				*num = NULL;
	long				i;
	int					sgn;
	long double			ld;
	char				*res = NULL;

	sgn = ((*(__int128_t*)&nb) >> 79) & 1;
	nb = (nb < 0) ? -nb : nb;
	i = 0;
	while (i++ < acc)
		nb *= 10;
	nb = nb + 0.5;
	while (--i)
		nb /= 10;
	i = (acc > 0) ? 1 : 0;
	i += (sgn == 1) ? 1 : 0;
	ld = nb;
	while (ld > 1 && ++i)
		ld = ld / 10;
	res = (char*)malloc(sizeof(char) * (i + acc + 2));
	num = ft_itoa_base((unsigned long long int)nb, 10, 'A');
	i = 0;
	if (sgn == 1 && ++i)
		res[0] = '-';
	while (*num != '\0')
		res[i++] = *num++;
	res[i] = acc != 0 ? '.' : '\0';
	while (acc-- > 0 && (nb = nb * 10) >= 0 && ++i)
	{
		res[i] = ((unsigned long long)nb % 10 + '0');
		nb = nb - (unsigned long long)nb;
	}
	res[++i] = '\0';
	return (res);
}
