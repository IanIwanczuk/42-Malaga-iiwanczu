/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:33:32 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/26 10:33:33 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int num)
{
	unsigned int	result;

	result = 1;
	while (num > 0)
	{
		result *= num;
		num--;
	}
	if (num < 0)
	{
		return (0);
	}
	return (result);
}
