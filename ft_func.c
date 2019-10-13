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
		*str++;
	}
	*nbr = tmp;
	return (0);
}

/*void	ft_putnbr(int nb)
{
	unsigned int res;
	if (nb < 0)
	{
		ft_putchar('-');
		res = nb * (-1);
	}
	else
		res = nb;
	while (res >= 10)
	{
		ft_putnbr(res / 10);
		res = res % 10;
	}
	ft_putchar('0' + res);
}
 */