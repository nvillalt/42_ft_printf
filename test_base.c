/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:10:56 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 09:22:37 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) // Se podría usar las fd???
{
	write(1, &c, 1);
}

void	ft_putbase(unsigned int nb) // Hay que pasarlo a unsigned
{
	unsigned int	num;
	char			*conversion;

	conversion = "0123456789abcdef";
	while (nb > 0)
	{
		num = nb % 10;
		if (num <= 16) // Condicion rara, revisar mas adelante
			ft_putchar(conversion[num] + '0');
		nb /= 16;
	}
	// Posiblemente saque los números al revés
}

int	main()
{
	unsigned int i;

	i = 7476;
	printf("%x", i);
	
	ft_putbase(i);

	return (0);
}