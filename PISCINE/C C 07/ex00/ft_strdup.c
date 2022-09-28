/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:47:20 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/29 11:47:21 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i])
		i++;
	result = (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}
