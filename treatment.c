/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:16:37 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/01 17:07:24 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_treatment(va_list *ap, char **format, t_flags *yep)
{
	int     check;

	yep->plus = 0;
	yep->min = 0;
	yep->space = 0;
	yep->hash = 0;
	yep->zero = 0;
	yep->width = 0;
	yep->prcn = -1;
	yep->len = 0;
	yep->type = NULL;
	if (**format == '%')
	{
		(*format)++;
		if (**format != '\0')
		{
			if ((ft_parse(yep, ap, *format)) == -1)
			    return (-1);
			*format = yep->type;
			return (ft_assoc(ap, yep));
		}
	}
	return (0);
}