#include "ft_printf.h"

int	main()
{
	printf("%d\n", printf("%.f\n", -2222225.1654234563));
    printf("%d\n", printf("%0100.10d\n", -516543));
	return (0);
}
