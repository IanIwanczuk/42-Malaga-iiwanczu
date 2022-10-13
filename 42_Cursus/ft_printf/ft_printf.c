/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:15:57 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/13 18:04:36 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// -----------------------------------------------------------------------------
// Lograr hacer que la funcion printee el string recibido e imprima los valores.
//	1) %p El puntero void * dado como argumento se imprime en 
//	   formato hexadecimal.
//	2) %u Imprime un número decimal (base 10) sin signo.
//	3) %x Imprime un número hexadecimal (base 16) en minúsculas.
//	4) %X Imprime un número hexadecimal (base 16) en mayúsculas.
// -----------------------------------------------------------------------------

// value_type --> Type of the value we are going to print, represented
//				  by the character next to the '%'.
// arg ---------> Arguments that the function is going to recieve.
// 				  These should be the va_arg() arguments, and should
//				  use va_list data type.
// returned ----> Length of printed value.
// value

int	ft_print_value(va_list args, const char value_type)
{
	int	value_len;

	value_len = 0;
	if (value_type == 'c')
		value_len += ft_putchar(va_arg(args, int));
	else if (value_type == 's')
		value_len += ft_putstr(va_arg(args, char *));
	else if (value_type == 'd' || value_type == 'i')
		value_len += ft_printnbr(va_arg(args, int));
	else if (value_type == '%')
		value_len += ft_putchar('%');
	else if (value_type == 'p')
		value_len += ft_print_ptr(va_arg(args, unsigned long long));
	return (value_len);
}

//char_char & str_str should be the VARIABLE ARGUMENTS
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed_len;
	int		i;

	printed_len = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			printed_len += ft_print_value(args, str[i + 1]);
			i++;
		}
		else
			printed_len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (printed_len);
}

// int	main(void)
// {
// 	int	len;

// 	len = ft_printf("Number: [%d] String: [%s]\n", 12345, "Hello");
// 	printf("Length: %d\n", len);
// 	return (0);
// }

// -------- Leer los parametros de la funcion --------
//	 va_list	arg;
//	 char	*test;

//	 printf("%s\n", str);
//	 va_start(arg, str);
//	 while (str[i])
//	 {
//	 	if (str[i] == '%' && str[i + 1])
//	 		i = ft_print_covert(str, arg, i);
//	 	else
//	 	{
//	 		write(1, &str[i], 1);
//	 		i++;
//	 	}
//	 }
//	 va_end(arg);
// -------------------------.
// 	 c = va_arg(arg, int);  |
// 	 if (!c)				|
// 		return (NULL);		|
// ---------------------------------------------------