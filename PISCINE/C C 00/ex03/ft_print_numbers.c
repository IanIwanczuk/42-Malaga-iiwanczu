/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:22:58 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/15 11:23:00 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}
