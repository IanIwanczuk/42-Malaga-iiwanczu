/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:46:06 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/15 11:46:07 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(5);
	return (0);
}

void	ft_is_negative(int num)
{
	if (num >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
