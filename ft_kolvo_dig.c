/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kolvo_dig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:33:52 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/09/30 17:05:37 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_kolvo_dig(uintmax_t nbr, int base) //long int
{
	int i;
	
	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}