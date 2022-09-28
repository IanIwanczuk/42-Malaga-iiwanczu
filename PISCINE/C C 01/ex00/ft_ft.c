/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:31:00 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/17 10:31:01 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int a;
	int *nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("%d\n", a);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
