/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:30:26 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/08 19:32:52 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex_ptr(uintptr_t ptr)
{
	char	*lowercase;
	int		num_chars;

	num_chars = 0;
	lowercase = "0123456789abcdef";
	if (ptr >= 16)
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
