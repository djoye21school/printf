/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assoc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:10:58 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/10 14:11:03 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_assoc(va_list *ap, t_flags *yep)
{
	size_t res;

	res = 0;
	if (*(yep->type ) == 'd' || *(yep->type) == 'i')
		res = ft_di(yep, ap);
	/*else if (*(yep->type) == 'o')
	    res = ft_o(yep, ap);
	else if (*(yep->type) == 'u')
	    res = ft_u(yep, ap);
	else if (*(yep->type) == 'x' || *(yep->type) == 'X')
	    res = ft_x(yep, ap);
	else if (*(yep->type) == 'c')
	    res = ft_c(yep, (char)va_arg(*ap, int);
	else if (*(yep->type) == 's')
	    res = ft_s(yep, (char *)va_arg(*ap, char *));
	else if (*(yep->type) == 'p')
	    res = ft_p(yep, va_arg(*ap, void *));
	else if (*(yep->type) == 'f')
	    res = ft_f(yep, ap);
	else if (*(yep->type) == '%')
	    res = ft_prc(yep, ap);
	else
	    ft_c(yep, ap);
	*/return (res);
}