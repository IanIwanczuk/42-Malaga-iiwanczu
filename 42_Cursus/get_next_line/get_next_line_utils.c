/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:47:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/01 13:01:00 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/****************************************************************************
· Looks for the FIRST instance of the "c" character.
· Returns NULL if the character wasn't found, or if the character was found,
it returns the "s" pointer pointing to the first instance of the character
"c" in the string.
****************************************************************************/
int	ft_look_for_char(char *str, char c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i++] == c)
			return (1);
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
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!(s2))
		return (NULL);
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
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