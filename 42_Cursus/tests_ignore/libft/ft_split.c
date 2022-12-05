/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:01:13 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/12/05 17:15:22 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (s[i] == c)
		words--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	words++;
	return (words);
}

static char	*ft_allocate_words(char const *s, char c, int word_len)
{
	char	*word;
	int		j;

	if (!s)
		return (NULL);
	word = malloc(sizeof * word * (word_len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (*s != c && *s != '\0')
	{
		word[j++] = *s;
		s++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		string_index;
	int		i;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = malloc(sizeof * result * (word_count + 1));
	if (!result)
		return (NULL);
	result[word_count] = NULL;
	i = 0;
	string_index = 0;
	while (i < word_count)
	{
		i++;
	}
	return (result);
}

int	main(void)
{
	ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	return (0);
}
