/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:59:03 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/30 15:35:36 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static void	ft_null(char *destiny, char *source, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		destiny[i] = source[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	char			*destiny;
	char			*source;

	if (!dst && !src)
		return (NULL);
	destiny = dst;
	source = (char *)src;
	i = 0;
	if (destiny > source)
	{
		i = len;
		while (i > 0)
		{
			destiny[i - 1] = source[i - 1];
			i--;
		}
	}
	else
		ft_null(destiny, source, len);
	return (dst);
}

// int	main(void)
// {
// 	char	dest[50];
// 	char	src[50];

// 	strcpy(dest, "oldstring");
// 	strcpy(src, "newsdsdgudfuygdfoijk");
// 	printf("\n\nORIGINAL --> Before dest = [%s], src=[%s]\n", dest, src);
// 	memmove(dest, src, 9);
// 	printf("ORIGINAL --> After dest = [%s]\n", dest);
// 	strcpy(dest, "oldstring");
// 	strcpy(src, "newsdsdgudfuygdfoijk");
// 	printf("MY_MEMMOVE --> Before dest = [%s], src = [%s]\n", dest, src);
// 	ft_memmove(dest, src, 9);
// 	printf("MY_MEMMOVE --> After dest = [%s]\n\n\n", dest);
// 	return (0);
// }
