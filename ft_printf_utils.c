/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:40:03 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:03 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	num_char;

	num_char = write(1, &c, 1);
	return (num_char);
}

int	ft_putstr(char *s)
{
	int	num_chars;

	num_chars = 0;
	while (*s != '\0')
	{
		num_chars += write(1, s, 1);
		s++;
	}
	return (num_chars);
}
int	ft_putnbr(int n)
{
	long int	num;
	int			num_chars;

	num = n;
	if (num < 0)
	{
		num_chars = write (1, "-", 1);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		num_chars += ft_putchar(num + '0');
	return (num_chars);
}
int	ft_putbase(unsigned int n, int bool)
{
	char	*lowercase;
	char	*uppercase;
	int		num_chars;

	num_chars = 0;
	lowercase = "0123456789abcdef";
	uppercase = "0123456789ABCDEF";
	if (n > 16)
	{
		ft_putbase(n / 16, bool);
		ft_putbase(n % 16, bool);
	}
	else
	{
		if (bool == 1)
			num_chars += ft_putchar(lowercase[n]);
		else
			num_chars += ft_putchar(uppercase[n]);
	}
	printf("Num_Chars en putbase: %d\n", num_chars);
	return (num_chars);		
}