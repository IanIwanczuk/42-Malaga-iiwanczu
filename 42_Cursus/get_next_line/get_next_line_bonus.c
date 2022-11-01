/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:20 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/01 18:52:44 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_remaining_string(char *static_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	if (static_string[i] == '\0')
	{
		free(static_string);
		return (NULL);
	}
	temp = (char *)malloc((ft_strlen(static_string) - i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i++;
	while (static_string[i] != '\0')
		temp[j++] = static_string[i++];
	temp[j] = '\0';
	free(static_string);
	return (temp);
}

char	*ft_look_for_line(char *static_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (static_string[i] == '\0')
		return (NULL);
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	if (static_string[i] == '\n')
		i++;
	temp = (char *)malloc((i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (j < i)
	{
		temp[j] = static_string[j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

char	*ft_read_file(int fd, char *static_string)
{
	ssize_t	r;
	char	*temp;

	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	r = 1;
	while (!ft_look_for_char(static_string, '\n') && r != 0)
	{
		r = read(fd, temp, BUFFER_SIZE);
		if (r == -1)
		{
			free(temp);
			free(static_string);
			return (NULL);
		}
		temp[r] = '\0';
		static_string = ft_strjoin(static_string, temp);
	}
	free(temp);
	return (static_string);
}

/****************************************************************************
------------------------------- BONUS PART ----------------------------------
· The bonus part is very straight foward, since the code is literally just
the same except for the "main" function. Basically, the objective is to be
able to read as many file descriptors as possible.

· The "strategy" shown here is a little bit cheesy, because we are already
establishing the size of the static variable (Which is now a matrice).

· Why 4096? Because that's system's maximum number of file descriptors that
it can open, not any more than that exact amount.

· Then, instead of using a single file descriptor in every different function
call, we just simply use the "[fd]" index to indicate which file descriptor
we're talking about.
-----------------------------------------------------------------------------
****************************************************************************/
char	*get_next_line(int fd)
{
	static char	*static_string[4096];
	char		*returned_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_string[fd] = ft_read_file(fd, static_string[fd]);
	if (!static_string[fd])
		return (NULL);
	returned_line = ft_look_for_line(static_string[fd]);
	static_string[fd] = ft_remaining_string(static_string[fd]);
	return (returned_line);
}
