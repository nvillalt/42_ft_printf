/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:44:36 by nvillalt          #+#    #+#             */
/*   Updated: 2023/10/29 09:51:15 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
} t_list;

/* MAIN PRINTF FILE */
int	ft_printf(const char *, ...);


#endif