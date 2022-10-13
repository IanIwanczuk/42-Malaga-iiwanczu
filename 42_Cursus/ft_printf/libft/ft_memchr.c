/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:14:05 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/26 13:48:32 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*temp;
	void			*chr_index;

	i = 0;
	temp = (unsigned char *)str;
	chr_index = NULL;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
		{
			chr_index = temp + i;
			break ;
		}
		i++;
	}
	return (chr_index);
}

// int	main(void)
// {
// 	const char	str[] = "www.tutorialspoint.com";
// 	const char	ch = '.';
// 	char		*ret;

// 	ret = ft_memchr(str, ch, strlen(str));
// 	printf("String after [%c] is: [%s]\n", ch, ret);
// 	return (0);
// }
