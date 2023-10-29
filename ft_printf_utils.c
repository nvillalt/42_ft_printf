/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:40:03 by nvillalt          #+#    #+#             */
/*   Updated: 2023/10/29 10:54:46 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../00Libft/libft.h"
#include "ft_printf.h"

void	ft_putchar(int c) // Se podría usar las fd???
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (1, "-", 1);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10);
			ft_putnbr_fd(n % 10);
		}
		else
			ft_putchar_fd(n + '0');
	}
}
void	ft_putbase(int nb, char *base) // 