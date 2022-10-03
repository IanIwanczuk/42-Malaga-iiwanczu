/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:58:48 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/30 16:04:14 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	char			*result;

	i = 0;
	result = (char *)malloc(count * size);
	if (!result)
		return (NULL);
	while (i < count * size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int		i;
// 	int		n;
// 	char	*a;
// 	char	*b;

// 	n = 4;
// 	i = 0;
// 	a = (char *)calloc(n, sizeof(char));
// 	printf("\n\nORIGINAL --> ");
// 	while (i < n)
// 	{
// 		printf("[%d] ", a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	b = (char *)ft_calloc(n, sizeof(char));
// 	i = 0;
// 	printf("MY_CALLOC --> ");
// 	while (i < n)
// 	{
// 		printf("[%d] ", b[i]);
// 		i++;
// 	}
// 	printf("\n\n\n");
// 	return (0);
// }
