/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:43:28 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 10:34:37 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Implement these conversions:
	%c - Character (putchar)
	%s - string (putstr)
	%p - pointer (hexadecimal base)
	%d - number (putnbr)
	%i - number (putnbr) > Same as %d I think
	%u - unsigned decimal (no negatives, more positives)
	%x - lowercase hexadecimal
	%X - uppercase hexadecimal
	%% - percentage symbol */

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	counter; // Lo que devuelve printf, a lo mejor se puede unificar con i.

	i = 0;
	va_start();
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(&str[i]);
		else if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				
				ft_putchar()
			}
		}
		i++;
	}
}

/*	va_list > Define una variable que apunta a la lista de argumentos.
	va_ start > Inicializa la variable de tipo va_list de modo que apunte a la lista de argumentos variables. Se declara así:
	va_start (args, valor). Valor es el último argumento con nombre antes de los ... que marcan la función como variable.
	> TIENE que haber al menos un argumento con nombre. Es la referencia para encontrar el resto de argumentos (p. ej., char *valor).
	va_arg (args, type) > Macro que se expande en una expresión que devuelve un valor del tipo indicado por el argumento type.
	Finalmente, va_arg apunta a va_end.
	va_copy > Realiza una copia de una lista de argumentos en su estado actual. Debe estar ya inicializado con va_start, puede actualizarse con va_arg, pero debe usarse antes de va_end.
	va_end (args) > Ayuda a finalizar la función variática. 
	

int	ft_printf(const char *str, ...)
{
	va_list			args;
	char			c;

	va_start(args, str); // Inicializar los argumentos variables
	c = va_arg (args, char) // Se le da el tipo de argumento que vamos a recoger. Si encuentra una s, pues sería char *, guardarlo en otra variable para imprimirlo después.
	
}
	
	*/