/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:19:20 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/03 14:17:14 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(int c)
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
	num_chars = 0;
	if (num < 0)
	{
		num_chars++;
		write (1, "-", 1);
		num *= -1;
	}
	if (num > 9)
	{
		num_chars += ft_putnbr(num / 10);
		num_chars += ft_putnbr(num % 10);
	}
	else
		num_chars += ft_putchar(num + '0');
	return (num_chars);
}

int	ft_putunsig(unsigned int n)
{
	int				num_chars;
	unsigned int	num;

	num = n;
	num_chars = 0;
	if (n > 9)
	{
		num_chars += ft_putunsig(num / 10);
		num_chars += ft_putunsig(num % 10);
	}
	else
		num_chars += ft_putchar(num + '0');
	return (num_chars);
}
/* Due to the recursive nature of the function,
   it must constantly return to num_chars.
   The return is 1 and thus it properly adds up. */