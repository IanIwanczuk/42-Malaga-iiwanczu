/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:46:48 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/03 15:56:52 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_count_words(char	*str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == c)
		count--;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	words;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	printf("%d\n", words);
}

int	main(void)
{
	char	**result;

	result = ft_split("   Hola   mundo   hello   world    ", ' ');
	return (0);
}
