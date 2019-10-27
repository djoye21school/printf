/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdoughnu <sdoughnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 13:21:46 by sdoughnu          #+#    #+#             */
/*   Updated: 2019/10/01 14:23:00 by sdoughnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrl(char *str, int len)
{
	int i;

	i = 0;
	while (i < len && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int     ft_parsestr(const char *format, va_list *ap)
{
	char *str;
	char *go;
    size_t size;
    t_flags yep;

    size = 0;
    go = (char *)format;
    str = go;
    while (*go != '\0')
    {
        if (*go != '\0' && *go != '%')
		{
        	go++;
        	size++;
		}
        else if (*go == '%')
        {
        	ft_putstrl(str, go - str);
        	size = size + ft_treatment(ap, &go, &yep);
        	go++;
        	str = go;
		}
    }
    ft_putstrl(str, go - str);
    return (size);
}

int		ft_printf(const char *format, ...)
{
    int res;
	va_list ap;

	va_start(ap, format);
	res = ft_parsestr(format, &ap);
	va_end(ap);
	return (res);
}

/*int main()
{
 //printf("\n%d\n", ft_printf("{%*c}", -5, 0));
# define INFINITY  1.0 / 0.0
# define NAN  0. / 0.0
  printf("\n%d\n", ft_printf("%f|%-f|%+f|% f|%#f|%0f", -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY));
    printf("\n");
       printf("\n%d\n", printf("%f|%-f|%+f|% f|%#f|%0f", -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY));

       printf("\n");
	printf("\n%d\n", ft_printf("%+8.14f|%+ 8.14f|%+-8.14f|%+#8.14f|%+08.14f|%+ -#08.14f", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY));
	printf("\n");
	printf("\n%d\n", printf("%+8.14f|%+ 8.14f|%+-8.14f|%+#8.14f|%+08.14f|%+ -#08.14f", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY));
}*/