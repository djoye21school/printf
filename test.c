/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 10:44:39 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/02 14:19:13 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int		ft_ft(t_flags *pow)
{
	//pow->minus = 1;
	return (0);
}

int		main()
{
	long double a;
	int *r;
	char *s = {"Hello"};
	long int b;
	long int w;
	int p;
	long int d;
	char t;
	int z;
	int q;
	char g;

	a = 56.34;
	/*g = 'l';
	printf("%C\n", g);
	a = 56.6669;
	b = 4294967296;
	//t = 255;
	*r = 2;
	w = 3276718366736;
	p = 23;
	d = 429496;
	//char v = 23535;
	q = -1;*/

	int tyu;
	tyu = 398773;
	printf("%d\n", printf("hello %####.23x %0.15o\n", tyu, tyu));
	printf("\n------------------------------------------\n");
	/*char *yui;
	char *tt;
	tt = ft_strnew(20);
	tt = ft_strdup(s);
	yui = tt;
	free(tt);
	printf("%s\n", yui);
	*/printf("---------------------------------\n");
	int rt = 12;
	//printf("%d\n", printf("%.*289d\n", 20, 75));
	printf("----------------\n");
	int as = -23506;
	printf("%d\n", printf("%10d\n", as));
	//(ft_ft(&pow) == 0) ? (pow.minus = 0) : ((pow.minus = 2), (b++));
	//printf("%d\n", pow.minus);
	printf("\n------------DUO-----------\n");
	printf("%#x\n", 423243);
	printf("000000000000000\n");
	write(1, &b, 1);
	printf("\n");
	printf("%.24Lf\n", a);
	/*printf("------float-------\n");
	//printf("%-458f  2345\n", a);
	printf("-----int------\n");
	printf("%4d\n", -234);
	printf("------------------------\n");
	printf("%.70s\n", s);
	printf("------str-----\n");
	//printf("%hhX\n", t );
	//printf("%p\n", &r );
	//printf("\n");
	z = printf("%s\n",  s);
	printf("%+0010d\n", z);
	printf("%.3d\n teyu", 948474 );
	printf("%0*x\n", 8, 15 );
	printf("%u\n", q);*/
	return (0);
}