/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:31:18 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/08 19:32:35 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putbase(unsigned int n, int tf)
{
	char	*lowercase;
	char	*uppercase;
	int		num_chars;

	num_chars = 0;
	lowercase = "0123456789abcdef";
	uppercase = "0123456789ABCDEF";
	if (n >= 16)
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
