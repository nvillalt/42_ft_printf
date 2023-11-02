#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	unsigned int	n = 98767;
	int	num = 0;

	printf("%X\n", n);
	num = ft_putbase(n, 0);

	printf("\n");

	printf("%d\n", num);
	return (0);
}