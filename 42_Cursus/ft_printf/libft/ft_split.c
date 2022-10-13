/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:46:48 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/10 13:21:58 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static char	*ft_allocate_words(char const *str, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	word = ft_substr(str, 0, len);
	if (!word)
		return (NULL);
	return (word);
}

static int	ft_count_words(char const *str, char c)
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
	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			result[i++] = ft_allocate_words(s, c);
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	i = 0;
// 	result = ft_split("assssx laaaak gccccl xddddq", ' ');
// 	while (result[i] != NULL)
// 	{
// 		printf("%d: [%s]\n", i, result[i]);
// 		i++;
// 	}
// 	return (0);
// }
