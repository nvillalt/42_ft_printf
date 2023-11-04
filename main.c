#include "ft_printf.h"
#include <stdio.h>

int	main()
{
/* 	char	*str = "Hola!";
	int		num = 60;
	unsigned int n = -5; */

	int	mine;
	int original;

	mine = ft_printf("mine: % %%");
	printf("\n");
	original = printf("oriignal: % %%");

	printf("\n");
	printf("Mi función: %d", mine);
	printf("\n------\n");
	printf("Original: %d", original);
	return (0);
}