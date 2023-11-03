/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:43:28 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/03 12:45:52 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_types(unsigned int total, char c, va_list args)
{
	if (c == 'c')
		total += ft_putchar(va_arg(args, char));
	else if (c == 's')
		total += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		total += ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		total += ft_putbase(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		total += ft_putbase(va_arg(args, unsigned int), 0);
	else if (c == 'p')
		total += ft_putptr(va_arg(args, void *));
	else if (c == 'u')
		total += ft_putunsig(va_arg(args, unsigned int));
	else
		total += ft_putchar('%');
	return (total);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	total;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			total += ft_putchar(&str[i]);
		else if (str[i] == '%')
		{
			i++;
			total += print_types(total, &str[i], args);
		}
		i++;
	}
	total += i;
	return (total);
}
