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

char					*ft_float(long double nb, int acc)
{
	char				*num = NULL;
	unsigned long long	integer;
	int					i;
	int					sgn;
	long double			ld;
	char				*res = NULL;

	if (nb != nb)
		return (ft_strdup("nan"));
	else if (nb == 1.0 / 0.0)
		return (ft_strdup("inf"));
	else if (nb == -1.0 / 0.0)
		return (ft_strdup("-inf"));
	sgn = ((*(__int128_t*)&nb) >> 79) & 1;
	nb = (nb < 0) ? -nb : nb;
	ld = nb;
	i = (sgn == 1) ? 1 : 0;
	while (ld > 1 && ++i)
		ld = ld / 10;
	res = (char*)malloc(sizeof(char) * (i + acc + 2));
	res[i + acc + 1] = '\0';
	integer = (unsigned long long int)nb;
	integer += ((nb - integer) >= 0.5 && acc == 0) ? 1 : 0;
	num = ft_itoa_base(integer, 10, 'A');
	i = 0;
	if (sgn == 1)
	{
		res[i] = '-';
		i++;
	}
	while (*num != '\0')
		res[i++] = *num++;
	res[i] = acc != 0 ? '.' : '\0';
	while (acc-- > 0 && (nb = nb * 10) >= 0 && ++i)
	{
		if ((nb - (unsigned long long) nb) >= 0.5 && acc == 0)
			res[i] = (unsigned long long) nb % 10 + 1 + '0';
		else res[i] = ((unsigned long long) nb % 10 + '0');
		nb = nb - (unsigned long long) nb;
	}
	res[++i] = '\0';
	return (res);
}

/*
int 	main()
{
	long double nb;
	int			acc;

	nb = (long double)0.0;
	acc = 10;
	printf("%s str\n", ft_float(nb, acc));
	printf("%.*Lf\n", acc, nb);
	return (0);
}
*/

/*char					*ft_float(long double nb, int acc)
{
    int					i;
    int					sgn;
    char				*res;
    int					c;

    if (nb != nb)
        return ("nan");
    sgn = nb < 0 ? -1 : 1;
    nb = sgn < 0 ? -nb : nb;
    c = (sgn < 0) ? 1 : 0;
    while (nb > 1 && c++)
        nb = nb / 10;
    res = (char*)malloc(sizeof(char) * (c + acc + 2));
    res[c + acc + 1] = '\0';
    i = 0;
    res[0] = sgn < 0 ? '-' : '0';
    while (i <= c && (nb = nb * 10) >= 0)
    {
        if ((nb - (unsigned long long)nb) >= 0.5 && acc == 0)
            res[i++] = (unsigned long long)nb % 10 + 1 + '0';
        else
            res[i++] = ((unsigned long long)nb % 10 + '0');
        nb = nb - (unsigned long long)nb;
    }
    res[i] = acc != 0 ? '.' : '\0';
    while (acc-- > 0 && (nb = nb * 10) >= 0 && ++i)
    {
        if ((nb - (unsigned long long)nb) >= 0.5 && acc == 0)
            res[i] = ((unsigned long long)nb % 10 + '0' + 1);
        else
            res[i] = ((unsigned long long)nb % 10 + '0');
        nb = nb - (unsigned long long)nb;
    }
    res[++i] = '\0';
    return (res);
}
*/
