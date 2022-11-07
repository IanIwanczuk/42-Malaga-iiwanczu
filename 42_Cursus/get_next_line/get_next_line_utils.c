/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:47:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/07 18:36:54 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/****************************************************************************
· Looks for the FIRST instance of the "c" character.
· Originated from the ft_strchr() function, but decided to change it since we
are not using if for actual pointers or index positions, we only want to know
if the character "c" was found in the string we recieved.
· Returns 0 if null string or if it didn't find the character.
· Returns 1 if it found the character.
****************************************************************************/
int	ft_look_for_char(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/****************************************************************************
· Will join s1 and s2 together into a brand new string named "joined", which
will be returned. 
· But also, this function is specific for get_next_line, since s1 CAN actually
be NULL, and if it is we just assign it one memory space with a null 
character, just so that we can join it with s2.
****************************************************************************/
char	*ft_strjoin(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char		*joined;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof * joined);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		joined[j++] = s2[i++];
	joined[j] = '\0';
	free(s1);
	return (joined);
}
