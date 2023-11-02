/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:10:56 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 17:28:10 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
	return (num_chars);		
}

int	main()
{
	unsigned int i;
	int	num;

	i = 7476;
	printf("%x", i);
	
	num = ft_putbase(i);

	printf("%d", num);
	return (0);
}