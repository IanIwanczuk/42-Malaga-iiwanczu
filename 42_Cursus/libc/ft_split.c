/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:46:48 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/03 20:15:58 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_allocate_words(char const *str, char c, char *word)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len] != '\0')
		len++;
	word = ft_substr(str, 0, len);
	return (len - 1);
}

static int	ft_count_words(char const	*str, char c)
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
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	result = (char **)malloc(ft_count_words(s, c) * sizeof(char *));
	while (*s != '\0')
	{
		if (*s != c)
		{
			s += ft_allocate_words(s, c, result[i++]);
			printf("%s\n", result[i - 1]);
		}
		s++;
	}
	return (result);
}

int	main(void)
{
	char	**result;

	result = ft_split("Hola mundo hello world", ' ');
	printf("%s\n", result[1]);
	return (0);
}
