/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:58:53 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/06 11:36:29 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	char			*destiny;
	char			*source;

	if (!dst && !src)
		return (NULL);
	destiny = dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	void	*mem;

// 	write(1, mem, 30);
// 	ft_memcpy(mem, "hola", 14);
// 	write(1, mem, 30);
// 	printf("%s\n", mem);
// }
