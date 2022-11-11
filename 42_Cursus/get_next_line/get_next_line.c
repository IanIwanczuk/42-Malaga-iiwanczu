/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:20 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/11 17:45:38 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Looks for the remaining characters AFTER the newline, in the static variable.
char	*ft_remaining_string(char *static_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	if (static_string[i] == '\0')
	{
		free(static_string);
		return (NULL);
	}
	temp = malloc((ft_strlen(static_string) - i + 1) * sizeof * temp);
	if (!temp)
		return (NULL);
	i++;
	j = 0;
	while (static_string[i] != '\0')
		temp[j++] = static_string[i++];
	temp[j] = '\0';
	free(static_string);
	return (temp);
}

// Looks for the line in the static variable.
char	*ft_look_for_line(char *static_string)
{
	char	*temp;
	int		i;

	i = 0;
	if (static_string[i] == '\0')
		return (NULL);
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	temp = malloc((i + 2) * sizeof * temp);
	if (!temp)
		return (NULL);
	i = 0;
	while (static_string[i] != '\0' && static_string[i] != '\n')
	{
		temp[i] = static_string[i];
		i++;
	}
	if (static_string[i] == '\n')
	{
		temp[i] = static_string[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
	// while (static_string[i] != '\0' && static_string[i] != '\n')
	// 	i++;
	// if (static_string[i] == '\n')
	// 	i++;
	// temp = malloc((i + 1) * sizeof * temp);
	// if (!temp)
	// 	return (NULL);
	// while (j < i)
	// {
	// 	temp[j] = static_string[j];
	// 	j++;
	// }
	// -------------------------------------------------------
	// while (static_string[i] != '\0' && static_string[i] != '\n')
	// 	i++;
	// temp = malloc((i + 2) * sizeof * temp);
	// if (!temp)
	// 	return (NULL);
	// i = 0;
	// while (static_string[i] != '\0' && static_string[i] != '\n')
	// {
	// 	temp[i] = static_string[i];
	// 	i++;
	// }
	// if (static_string[i] == '\n')
	// {
	// 	temp[i] = static_string[i];
	// 	i++;
	// }

// Reads the fd received.
char	*ft_read_file(int fd, char *static_string)
{
	ssize_t	r;
	char	*temp;

	temp = malloc((BUFFER_SIZE + 1) * sizeof * temp);
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

// get_next_line function.
char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*returned_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_string = ft_read_file(fd, static_string);
	if (!static_string)
		return (NULL);
	returned_line = ft_look_for_line(static_string);
	static_string = ft_remaining_string(static_string);
	return (returned_line);
}

int	main(void)
{
	char	*result;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	result = "";
	while (result != NULL)
	{
		printf("|%s", result);
		result = get_next_line(fd);
	}
	system("leaks a.out");
	close(fd);
	return (0);
}
