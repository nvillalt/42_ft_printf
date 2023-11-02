/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:43:28 by nvillalt          #+#    #+#             */
/*   Updated: 2023/11/02 17:45:39 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Implement these conversions:
	%c - Character (putchar) -DONE
	%s - string (putstr) -DONE
	%p - pointer (hexadecimal base) UINTPTR_T
	%d - number (putnbr) -DONE
	%i - number (putnbr) > Same as %d I think -DONE
	%u - unsigned decimal (no negatives, more positives)
	%x - lowercase hexadecimal -DONE
	%X - uppercase hexadecimal -DONE
	%% - percentage symbol */

void	print_types(unsigned int counter, char c, va_list args) // Quizás no char, sino va_list
{
	if (c == 'c')
		ft_putchar(va_arg(args, char));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		ft_putbase(va_args(args, unsigned int), 1);
	else if (c == 'X')
		ft_putbase(va_args(args, unsigned int), 0);
	else if (c == 'p')
		ft_putptr(va_args(args, )); // uintptr_t (variable puntero)
	else if (c == 'u')
		ft_putunsig();
	else
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	counter; // Lo que devuelve printf, a lo mejor se puede unificar con i.

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(&str[i]);
		else if (str[i] == '%')
		{
			i++;
			print_types(counter, &str[i]);
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