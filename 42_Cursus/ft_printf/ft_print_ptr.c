/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:05:09 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/14 14:03:39 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_ptr_len(unsigned long long pointer)
{
	int	len;

	len = 0;
	while (pointer != 0)
	{
		len++;
		pointer /= 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long pointer)
{
	if (pointer >= 16)
	{
		ft_put_ptr(pointer / 16);
		ft_put_ptr(pointer % 16);
	}
	else
	{
		if (pointer <= 9)
			ft_putchar(pointer + '0');
		else
			ft_putchar(pointer - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long pointer)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	if (pointer == 0)
		len += ft_putstr("0");
	else
	{
		ft_put_ptr(pointer);
		len += ft_ptr_len(pointer);
	}
	return (len);
}
