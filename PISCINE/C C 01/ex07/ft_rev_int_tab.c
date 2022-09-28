/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:34:00 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/17 17:34:01 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = aux;
		i++;
	}
}
