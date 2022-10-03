/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:41:29 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/03 13:14:56 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*chr_index;
	char	*str_two;

	i = 0;
	chr_index = NULL;
	str_two = (char *)s;
	while (i < ft_strlen(s))
	{
		if (str_two[i] == (char)c)
		{
			chr_index = str_two + i;
			break ;
		}
		i++;
	}
	if ((char)c == '\0')
		return (str_two + i);
	return (chr_index);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strchr("Hola como como estas", 'c'));
// 	return (0);
// }
