/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_rab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:15:32 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/17 19:15:35 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int numbers[10] = {6, 1, 3, 3, 4, 2, -1, 7, -8, 9};
	int *tab;
	int cont;

	cont = 0;

	tab = numbers;
	
	ft_sort_int_tab(tab, 10);

	while (cont < 10)
	{
		printf("%d, ", tab[cont]);
		cont++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
