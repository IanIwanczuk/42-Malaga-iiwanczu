/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:06:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/24 16:17:47 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *str)
{
	char	*buf;
	int		i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	buf = (char *)malloc(sizeof(char) * (i + 2));
	if (!buf)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		buf[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

char	*ft_read_file(int fd, char *buffer)
{
	ssize_t	r;
	char	*str;

	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	r = 1;
	while (!ft_strchr(buffer, '\n') && r != 0)
	{
		r = read(fd, str, BUFFER_SIZE);
		if (r == -1)
		{
			free(str);
			free(buffer);
			return (NULL);
		}
		str[r] = '\0';
		buffer = ft_strjoin(buffer, str);
	}
	free(str);
	return (buffer);
}

char	*ft_get_str(char *buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i] != '\0')
		str[j++] = buffer[i++];
	str[j] = '\0';
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_get_str(buffer);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*result;
// 	int		i;

// 	fd = open("test.txt", O_RDONLY);
// 	result = get_next_line(fd);
// 	while (result != NULL)
// 	{
// 		i++;
// 		printf("%d::%s", i, result);
// 		result = get_next_line(fd);
// 		free(result);
// 	}
// 	close(fd);
// 	system("leaks -q a.out");
// 	return (0);
// }
