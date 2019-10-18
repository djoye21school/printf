/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:50:24 by djoye             #+#    #+#             */
/*   Updated: 2019/10/15 16:45:31 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_itoa_base(int dig, int base)
{
	char	*s;
	int		i;
	long	nb;
	char	x;
	char	res;

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

int			main(void)
{
	printf("%s", ft_itoa_base(265, 32));
	return (0);
}
