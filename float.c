/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:34 by djoye             #+#    #+#             */
/*   Updated: 2019/10/17 16:13:48 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char			*ft_itoa_base(unsigned long long dig, int base, char a, int sgn)
{
	char				*s;
	int					i;
	unsigned long long	nb;
	int					res;

	nb = dig;
	i = (sgn < 0 && base == 10) || dig == 0 ? 1 : 0;
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

int				ft_float(long double nb, int acc)
{
	char				*num;
	unsigned long long	integer;
	int					i;
	int					sgn;

	sgn = nb < 0 ? -1 : 1;
	nb = sgn < 0 ? -nb : nb;
	i = acc;
	integer = (unsigned long long int)nb;
	nb = nb - integer;
	num = ft_itoa_base(integer, 10, 'A', sgn);
	while (*num)
		write(1, num++, 1);
	write(1, ".", 1);
	while (i-- && (nb = nb * 10) > 0)
		if (nb < 1)
			write(1, "0", 1);
	integer = (unsigned long long int)nb;
	integer += (nb - integer) >= 0.5 ? 1 : 0;
	num = ft_itoa_base(integer, 10, 'A', 1);
	if (num[0] != '0')
		while (*num)
			write(1, num++, 1);
	else
		while (acc-- > 0)
			write(1, "0", 1);
	return (0);
}

/*int				main(void)
{
	long double			ld;
	int					acc;
	unsigned long long	u;
	long long			l;
	long long			adr;

	ld = (long double)-3244243.54645;
	adr = (long long)&acc;
	printf("%s\n", ft_itoa_base(adr, 16, 'a', 1));
	printf("%d\n", printf("%p\n", &acc));
//	printf("%d\n a dfasfdasisdf %Lf" ,printf("%p\n", &acc), (long double)0/0);
	acc = 18;

	u = ld;

	ft_float(ld, acc);
	printf("\n%.*Lf\n", acc, ld);
//	printf("\n size %d\n", sizeof(ld));
//	printf("\n size %d\n", sizeof(u));
//	printf("\n size %d\n", sizeof(acc));
//	printf("\n%llu", u);
//	printf("\n%lli", l);
//	printf("\n%lli", u - l);
	return (0);
}
 */
