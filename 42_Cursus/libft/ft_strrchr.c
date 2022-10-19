/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:32:42 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/19 16:19:25 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*chr_index;
	char	*str_two;

	i = 0;
	chr_index = NULL;
	str_two = (char *)s;
	while (str_two[i] != '\0')
	{
		if (str_two[i] == (char)c)
		{
			chr_index = str_two + i;
		}
		i++;
	}
	if ((char)c == '\0')
		return (str_two + i);
	return (chr_index);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("Hola como como estas", 'l'));
// 	return (0);
// }
