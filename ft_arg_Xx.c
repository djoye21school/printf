/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_Xx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:13:47 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/26 17:39:15 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_hash(t_flags *yep, int flag, int num, int updown)
{
	if (num == 0 && yep->hash == 1)
	{
		if (yep->zero == 1 && yep->min == 0 && flag == 1 && yep->prcn < 0)
		{
			if (updown > 0)
				yep->s = ft_strjoin("0x", yep->s);
			else
				yep->s = ft_strjoin("0X", yep->s);
		}
		else if ((yep->zero == 1 && yep->prcn >= 0 && flag == -1) ||
				((yep->zero == 0 || yep->min == 1) && flag == -1))
		{
			if (updown > 0)
				yep->s = ft_strjoin("0x", yep->s);
			else
				yep->s = ft_strjoin("0X", yep->s);
		}
	}
}

static void		ft_width_x(t_flags *yep, int num, int updown)
{
	int len;
	
	len = ft_strlen(yep->s);
	if (yep->width > len)
	{
		while (yep->min == 1 && len < yep->width)
		{
			yep->s = ft_strjoin(yep->s, " ");
			len++;
		}
		if (yep->min == 0 && yep->zero == 1 && yep->hash == 1 &&
				yep->prcn < 0 && num == 0)
			len += 2;
		while (yep->zero == 1 && yep->prcn < 0 && len < yep->width)
		{
			yep->s = ft_strjoin("0", yep->s);
			len++;
		}
		while (len < yep->width)
		{
			yep->s = ft_strjoin(" ", yep->s);
			len++;
		}
	}
	ft_hash(yep, 1, num, updown);
}

static void		ft_prcn_x(t_flags *yep, int updown)
{
	int	num;
	int	len;
	
	num = 0;
	if (*(yep->s) == '0' && *(yep->s + 1) == '\0')
		num++;
	len = ft_strlen(yep->s);
	if (yep->prcn > len)
	{
		while (len < yep->prcn)
		{
			yep->s = ft_strjoin("0", yep->s);
			len++;
		}
	}
	if (yep->prcn == 0 && num == 1)
	{
		free(yep->s);
		yep->s = ft_strdup("");
	}
	ft_hash(yep, -1, num, updown);
	ft_width_x(yep, num, updown);
}

size_t		ft_arg_x(t_flags *yep, int flag)
{
    size_t res;

    ft_prcn_x(yep, flag);
    res = ft_putstr(yep->s);
    return (res);
}
