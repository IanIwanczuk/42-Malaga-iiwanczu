/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:31:14 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/22 20:08:50 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			*temp;

	temp = (char *)b;
	i = 0;
	while (temp[i] != '\0' && i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[50];
// 	char	str2[50];

// 	strcpy(str, "This is string.h library function <-- ORIGINAL");
// 	strcpy(str2, "This is string.h library function <-- MY_MEMSET");
// 	puts(str);
// 	puts(str2);
// 	memset(str, '$', 5);
// 	puts(str);
// 	ft_memset(str2, '$', 5);
// 	puts(str2);
// 	return (0);
// }
