/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:33:55 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/08 19:34:05 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	num_chars;

	num_chars = 0;
	if (!s)
	{
		num_chars += write(1, "(null)", 6);
		return (num_chars);
	}
	while (*s != '\0')
	{
		num_chars += write(1, s, 1);
		s++;
	}
	return (num_chars);
}