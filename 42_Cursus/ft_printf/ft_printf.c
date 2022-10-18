/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:15:57 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/17 15:32:04 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	else if (value_type == 'u')
		value_len += ft_print_uint(va_arg(args, unsigned int));
	else if (value_type == 'x' || value_type == 'X')
		value_len += ft_print_hex(va_arg(args, unsigned int), value_type);
	return (value_len);
}

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

// int main (void)
// {
// 	char		test1 = 'c';
// 	int			test2 = 12345;
// 	char		*test3 = "Hola";
// 	void	*test4 = NULL;
// 	unsigned int		test5 = 10;
// 	ft_printf("test 1: %c\n", test1);
// 	printf("test 1: %c\n", test1);
// 	ft_printf("test 2: %d\n", test2);
// 	printf("test 2: %d\n", test2);
// 	ft_printf("test 3: %s\n", test3);
// 	printf("test 3: %s\n", test3);
// 	ft_printf("test 4: %p\n", test4);
// 	printf("test 4: %p\n", test4);
// 	ft_printf("test 5: %u\n", test5);
// 	printf("test 5: %u\n", test5);
// 	ft_printf("test 6: %x\n", test5);
// 	printf("test 6: %x\n", test5);
// 	ft_printf("test 7: %%\n");
// 	printf("test 7: %%\n");
// 	ft_printf("\nesp test: %d, %d, %c\n", test1, test2, test1);
// 	printf("esp test: %c, %d, %s\n", test1, test2, test3);
// }