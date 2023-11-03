/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:20:38 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/03 14:20:55 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_putbase(unsigned int n, int tf)
{
	char	*lowercase;
	char	*uppercase;
	int		num_chars;

	num_chars = 0;
	lowercase = "0123456789abcdef";
	uppercase = "0123456789ABCDEF";
	if (n > 16)
	{
		num_chars += ft_putbase(n / 16, tf);
		num_chars += ft_putbase(n % 16, tf);
	}
	else
	{
		if (tf == 1)
			num_chars += ft_putchar(lowercase[n]);
		else
			num_chars += ft_putchar(uppercase[n]);
	}
	return (num_chars);
}

static int	put_hex_ptr(uintptr_t ptr)
{
	char	*lowercase;
	int		num_chars;

	num_chars = 0;
	lowercase = "0123456789abcdef";
	if (ptr > 16)
	{
		num_chars += put_hex_ptr(ptr / 16);
		num_chars += put_hex_ptr(ptr % 16);
	}
	else
		num_chars += ft_putchar(lowercase[ptr]);
	return (num_chars);
}

int	ft_putptr(void *ptr)
{
	int			num_chars;
	uintptr_t	num;

	num_chars = 0;
	num = (uintptr_t)ptr;
	num_chars += write(1, "0x", 2);
	num_chars += put_hex_ptr(num);
	return (num_chars);
}
