/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:47:49 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/14 14:03:43 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_uint_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int num)
{
	char	*number;
	int		len;

	len = ft_uint_len(num);
	number = (char *)malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number[len] = '\0';
	while (num != 0)
	{
		number[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (number);
}

int	ft_print_uint(unsigned int num)
{
	char	*number;
	int		len;

	len = 0;
	if (num == 0)
		len += ft_putchar('0');
	else
	{
		number = ft_uitoa(num);
		len += ft_putstr(number);
		free(number);
	}
	return (len);
}
