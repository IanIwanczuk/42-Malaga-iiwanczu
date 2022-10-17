/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:40:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/14 14:13:43 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int hex_num)
{
	int	len;

	len = 0;
	while (hex_num != 0)
	{
		hex_num /= 16;
		len++;
	}
	return (len);
}

void	ft_put_hex(unsigned int hex_num, const char value_type)
{
	if (hex_num >= 16)
	{
		ft_put_hex(hex_num / 16, value_type);
		ft_put_hex(hex_num % 16, value_type);
	}
	else
	{
		if (hex_num <= 9)
			ft_putchar(hex_num + '0');
		else
		{
			if (value_type == 'x')
				ft_putchar(hex_num - 10 + 'a');
			if (value_type == 'X')
				ft_putchar(hex_num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int hex_num, const char value_type)
{
	if (hex_num == 0)
		return (ft_putchar('0'));
	else
		ft_put_hex(hex_num, value_type);
	return (ft_hex_len(hex_num));
}
