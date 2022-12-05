/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:01:13 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/12/05 15:06:00 by iiwanczu         ###   ########.fr       */
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


int	ft_word_len(char const *string, char c, int *string_index)
{
	int	len;

	len = 0;
	if (!string)
		return (0);
	while (string[*string_index] != '\0' && string[*string_index] != c)
	{
		(*string_index)++;
		len++;
	}
	while (string[*string_index] == c)
		(*string_index)++;
	return (len);
}

static char	*ft_allocate_words(char const *s, char c, int word_len,
int next_word)
{
	char	*word;
	int		i;
	int		j;

	word = malloc(sizeof * word * (word_len + 1));
	if (!word)
		return (NULL);
	i = next_word;
	j = 0;
	while (s[i] != c && s[i] != '\0')
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		string_index;
	int		next_word;
	int		i;

	word_count = ft_count_words(s, c);
	result = malloc(sizeof * result * (word_count + 1));
	if (!result || word_count == 0)
		return (NULL);
	result[word_count] = NULL;
	i = 0;
	string_index = 0;
	while (i < word_count)
	{
		next_word = string_index;
		result[i] = ft_allocate_words(s, c, ft_word_len(s, c, &string_index),
				next_word);
		i++;
	}
	return (result);
}

int	main(void)
{
	ft_split("Ho,la,-b,ue,nos,-d,ia,s,", ',');
	return (0);
}
