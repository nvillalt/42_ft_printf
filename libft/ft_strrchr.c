/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:46:35 by nvillalt          #+#    #+#             */
/*   Updated: 2023/09/28 13:07:05 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				len;
	unsigned char	*copy;

	copy = (unsigned char *)str;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (copy[len] == (unsigned char)c)
			return ((char *)copy + len);
		len--;
	}
	return (0);
}
