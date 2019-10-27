/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:52:11 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/25 12:52:12 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_f(t_flags *yep, va_list *ap)
{
	int	flag;

	flag = 0;
	yep->prcn == -1 ? yep->prcn = 6 : yep->prcn;
	yep->prcn == -2 ? yep->prcn = 0 : yep->prcn;
	if (yep->len == 5)
		yep->s = ft_float((long double)va_arg(*ap, long double),
				yep->prcn);
	else
		yep->s = ft_float((double)va_arg(*ap, double), yep->prcn);
	if (ft_strcmp(yep->s, "inf") == 0 || ft_strcmp(yep->s, "-inf") == 0)
		flag = 1;
	if (ft_strcmp(yep->s, "nan") == 0)
		flag = 2;
	if (flag == 0)
	{
		if (yep->hash == 1 && yep->prcn == 0)
			yep->s = ft_strjoin(yep->s, ".");
	}
	return (ft_arg_f(yep, flag));
}
