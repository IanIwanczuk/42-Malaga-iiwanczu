/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:02:54 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/15 17:02:56 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_write_numbers(int i, int d);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int	i;
	int	d;

	i = 0;
	while (i <= 98)
	{
		d = i + 1;
		while (d <= 99)
		{
			ft_write_numbers(i, d);
			d++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_numbers(int i, int d)
{
	if (i == 98)
	{
		ft_putchar((i / 10) + '0');
		ft_putchar((i % 10) + '0');
		ft_putchar(' ');
		ft_putchar((d / 10) + '0');
		ft_putchar((d % 10) + '0');
	}
	else
	{
		ft_putchar((i / 10) + '0');
		ft_putchar((i % 10) + '0');
		ft_putchar(' ');
		ft_putchar((d / 10) + '0');
		ft_putchar((d % 10) + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}
