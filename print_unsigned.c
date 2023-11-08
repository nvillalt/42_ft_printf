/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:31:45 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/08 19:32:16 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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