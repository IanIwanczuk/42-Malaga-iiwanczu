/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:18:45 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/26 13:57:00 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long			i;
	unsigned char			*temp1;
	unsigned char			*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[15];
// 	char	str2[15];
// 	int		ret;
// 	int		ret2;

// 	memcpy(str1, "A", 6);
// 	memcpy(str2, "ABCDEF", 6);
// 	ret = memcmp(str1, str2, 5);
// 	ret2 = ft_memcmp(str1, str2, 5);
// 	if (ret > 0)
// 		printf("ORIGINAL: 2 is less than 1 --> [%d]\n", ret);
// 	else if (ret < 0)
// 		printf("ORIGINAL: 1 is less than 2 --> [%d]\n", ret);
// 	else
// 		printf("ORIGINAL: 1 is equal to 2 --> [%d]\n", ret);
// 	if (ret2 > 0)
// 		printf("MY_MEMCMP: 2 is less than 1 --> [%d]\n", ret2);
// 	else if (ret2 < 0)
// 		printf("MY_MEMCMP: 1 is less than 2 --> [%d]\n", ret2);
// 	else
// 		printf("MY_MEMCMP: 1 is equal to 2 --> [%d]\n", ret2);
// 	return (0);
// }
