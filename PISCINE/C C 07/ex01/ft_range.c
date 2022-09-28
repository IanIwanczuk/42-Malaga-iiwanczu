/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:04:02 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/29 12:34:05 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*result;
	int count;
	int	i;

	i = min;
	count = 0;
	if(min < max)
	{
		while (i < max)
		{
			i++;
			count++;
		}
		result = (int *)malloc(count * sizeof(int));
		i = min;
		count = 0;
		while (i < max)
		{
			result[count] = i;
			i++;
			count++;
		}
	}
	else
		result = NULL;
	return (result);
}
