/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:22:13 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/08 15:22:26 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)str;
	while (copy[i] != '\0')
	{
		if (copy[i] == (unsigned char)c)
			return ((char *)copy + i);
		i++;
	}
	if (copy[i] == (unsigned char)c)
		return ((char *)copy + i);
	else
		return (0);
}