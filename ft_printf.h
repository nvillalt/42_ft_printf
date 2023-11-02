/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:44:36 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 10:34:14 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

// typedef struct types
// {
// 	char			c;
// 	char			*s;
// 	unsigned int	u;
// 	int				d;
// };

/* MAIN PRINTF FILE */
int		ft_printf(const char *str, ...);

/* PRINTF UTILS */
void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);

#endif