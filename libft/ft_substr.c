/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:09:23 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/03 14:49:40 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (*s == 0 || start >= ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (0);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start] != '\0')
		{
			substr[i] = s[start];
			start++;
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
