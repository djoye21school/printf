/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:05:34 by djoye             #+#    #+#             */
/*   Updated: 2019/10/26 20:32:08 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 16:03:25 by djoye            ###   ########.fr       */
/*   Updated: 2019/10/25 15:44:02 by djoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char            *ft_itoa_f(unsigned long long dig, int base, char a, int sgn)
{
    char                *s;
    int                 i;
    unsigned long long  nb;
    int                 res;

    nb = dig;
    i = (sgn < 0 && base == 10) || dig == 0 ? 1 : 0;
    while (dig && ++i && base > 1 && base <= 36)
        dig = dig / base;
    if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    s[i--] = '\0';
    s[0] = sgn < 0 && base == 10 ? '-' : '0';
    while (base > 1 && base <= 36 && nb)
    {
        res = nb % base;
        s[i--] = res <= 9 ? res + '0' : res + a - 10;
        nb = nb / base;
    }
    return (s);
}

char					*ft_float(long double nb, int acc)
{
	char				*num = NULL;
	unsigned long long	integer;
	int					i;
	int					sgn;
	long double			ld;
	char				*res = NULL;
	long double			tmp;
	char 	*ptr;
	int c;

	if (nb != nb)
		return ("nan\n");
	sgn = nb < 0 ? -1 : 1;
	nb = nb < 0 ? -nb : nb;
	ld = nb;
    i = (sgn < 0) ? 1 : 0;
	while (ld > 1 && ++i)
		ld = ld / 10;
	printf("%d \n", i);
	ptr = (char*)malloc(sizeof(char) * (i + acc + 2));
	res = ptr;
	ptr[i + acc + 1] = '\0';
	ld = nb;
	tmp = nb;
	while ((((unsigned long long)ld == 0 && ld > 1)))
	{
		while (((unsigned long long)ld == 0 && ld > 1 && ++i))
			ld = ld / 10;
		num = ft_itoa_f((unsigned long long)ld, 10, 'A', sgn);
		while (*num)
			*res++ = *num++;
		while (i-- > 0)
			ld = ld * 10;
		ld = nb - ld;
		printf("\n%d\n", i);
	}
//		num = ft_itoa_f((unsigned long long)ld, 10, 'A', sgn);
//		while (*num)
//			*res++ = *num++;
//		while (ld > 1 && ++i)
//			ld = ld / 10;
	integer = (unsigned long long int)nb;
	integer += ((nb - integer) >= 0.5 && acc == 0) ? 1 : 0;
	i = 0;
	if (sgn < 0)
		*res++ = '-';
	while (*num)
		*res++ = *num++;
	*res = acc != 0 ? '.' : '\0';
	while (acc-- > 0 && (nb = nb * 10) >= 0)
	{
	    if ((nb - (unsigned long long) nb) >= 0.5 && acc == 0)
	        *++res = (unsigned long long) nb % 10 + 1 + '0';
	    else *++res = ((unsigned long long) nb % 10 + '0');
            nb = nb - (unsigned long long) nb;
	}
	*++res = '\0';
//	printf("\n%s\n", res);
	return (ptr);
}


/*char					*ft_float(long double nb, int acc)
{
    int					i;
    int					sgn;
    char				*res;
    int					c;

    if (nb != nb)
        return ("nan");
    sgn = nb < 0 ? -1 : 1;
    nb = sgn < 0 ? -nb : nb;
    c = (sgn < 0) ? 1 : 0;
    while (nb > 1 && c++)
        nb = nb / 10;
    res = (char*)malloc(sizeof(char) * (c + acc + 2));
    res[c + acc + 1] = '\0';
    i = 0;
    res[0] = sgn < 0 ? '-' : '0';
    while (i <= c && (nb = nb * 10) >= 0)
    {
        if ((nb - (unsigned long long)nb) >= 0.5 && acc == 0)
            res[i++] = (unsigned long long)nb % 10 + 1 + '0';
        else
            res[i++] = ((unsigned long long)nb % 10 + '0');
        nb = nb - (unsigned long long)nb;
    }
    res[i] = acc != 0 ? '.' : '\0';
    while (acc-- > 0 && (nb = nb * 10) >= 0 && ++i)
    {
        if ((nb - (unsigned long long)nb) >= 0.5 && acc == 0)
            res[i] = ((unsigned long long)nb % 10 + '0' + 1);
        else
            res[i] = ((unsigned long long)nb % 10 + '0');
        nb = nb - (unsigned long long)nb;
    }
    res[++i] = '\0';
    return (res);
}
*/

int 	main()
{
	long double nb;
	int			acc;

	nb = (long double)32345345325325534534534535344324.32423;
	acc = 10;
	printf("%s str\n", ft_float(nb, acc));
	printf("%.*Lf\n", acc, nb);
	return (0);
}
