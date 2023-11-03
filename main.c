#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	//long unsigned int ptr;
	char			*str = "Hola";
	//unsigned int	n = 98767;
	int	num = 0;

	//ptr = &str;
	//printf("%X\n", n);
	//printf("%ld\n", ptr);
	num = ft_putptr(str);

	printf("--------\n");

	printf("%p\n", &str);
	printf("Num: %d\n", num);
	return (0);
}