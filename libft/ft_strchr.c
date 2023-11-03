/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:18:28 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/03 14:49:28 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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