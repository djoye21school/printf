/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:37:03 by djoye             #+#    #+#             */
/*   Updated: 2019/10/19 16:08:37 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char 	*math(int argc, char **argv)
{
	int 	len;
	int 	i;
	char	*str;
	char	m;
	char	tmp;

	len = 0;
	i = 1;
	while (i < argc && *argv[i]++) 
	{
		if (!(*argv[i]))
			i++;
		len++;
	}
	len += i; 
	str = (char*)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	i = 1;
	m = 0;
	while (--len >= 0)
	{
		if (argv[i][m] == '\0')
		{
			m = 0;
			i++;
		}
		str[len] = argv[i][m] != '\0' ? argv[i][m] : '0';
//		printf("%s\n", argv[i]);
		m++;

	}
	return (str);
}

int		main (int argc, char **argv)
{
	printf("\n%s", math(argc, argv));
	return (argc);
}
