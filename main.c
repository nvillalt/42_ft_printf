#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char	*str = "Hola!";
	int		num = 60;
	int 	n = -5;

	int	mine;
	int original;

	mine = ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	original = printf(" NULL %s NULL ", NULL);

	printf("\n");
	printf("Mi función: %d", mine);
	printf("\n------\n");
	printf("Original: %d", original);
	printf("\n\n");

	mine = ft_printf("Esta string prueba todos los tipos: (%s), (%c), (%d), (%i), (%x), (%X), (%u), (%%)", str, str[0], num, num, num, num, n);
	printf("\n");
	original = printf("Esta string prueba todos los tipos: (%s), (%c), (%d), (%i), (%x), (%X), (%u), (%%)", str, str[0], num, num, num, num, n);

	printf("\n");
	printf("Mi función: %d", mine);
	printf("\n------\n");
	printf("Original: %d", original);
	printf("\n\n");

	mine = ft_printf("\n, %d", str);
	printf("\n");
	original = printf("\n, %d", str);

	printf("\n");
	printf("Mi función: %d", mine);
	printf("\n------\n");
	printf("Original: %d", original);
	printf("\n\n");


	return (0);
}
