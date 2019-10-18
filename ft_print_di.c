/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:01:23 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/17 18:13:19 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_di(va_list *ap, t_flags *yep, long long int res)
{
	return (ft_putstr(ft_itoa_base(res, 10, 'a', 1)));
}
