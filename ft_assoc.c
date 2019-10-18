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

size_t		ft_ex_di(int rate, va_list *ap, t_flags *yep)
{
	printf("1");
	long long int	res;
	if (rate == 0)
		res = va_arg(*ap, int);
	if (rate == 1)
		res = va_arg(*ap, long int);
	if (rate == 2)
		res = va_arg(*ap, long long int);
	if (rate == 3)
		res = (short int)va_arg(*ap, int);
	if (rate == 4)
		res = (signed char)va_arg(*ap, int);
	printf("\n%lld\n", res);
	return (ft_print_di(ap, yep, res));
}

size_t		ft_ex_o(int rate, va_list *ap, t_flags *yep)
{
	unsigned long long int	res;
	if (rate == 0)
		res = va_arg(*ap, unsigned int);
	if (rate == 1)
		res = va_arg(*ap, unsigned long int);
	if (rate == 2)
		res = va_arg(*ap, unsigned long long int);
	if (rate == 3)
		res = (unsigned short int)va_arg(*ap, unsigned int);
	if (rate == 4)
		res = (unsigned char)va_arg(*ap, unsigned int);
	return (res);
}

size_t		ft_ex_hex(int rate, va_list *ap, t_flags *yep)
{
	unsigned long long int	res;
	if (rate == 0)
		res = (unsigned int)va_arg(*ap, unsigned int);
	if (rate == 1)
		res = (unsigned long int)va_arg(*ap, unsigned long int);
	if (rate == 2)
		res = (unsigned long long int)va_arg(*ap, unsigned long long int);
	if (rate == 3)
		res = (unsigned short int)va_arg(*ap, unsigned long long int);
	if (rate == 4)
		res = (unsigned char)va_arg(*ap, unsigned long long int);
	return (res);
}


size_t		ft_assoc(int rate, va_list *ap, t_flags *yep)
{
	size_t res;
	if (yep->type == 'd' || yep->type == 'i')
	{
		res = ft_ex_di(rate, ap, yep);
	}
	//if (yep->type == 'o')
	//	ft_ex_o(rate, ap, yep);
	return (0);
}