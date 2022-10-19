/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:06:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/19 19:44:04 by iiwanczu         ###   ########.fr       */
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
	while (!ft_strchr(str, '\n') && r != 0)
	{
		r = read(fd, str, BUFFER_SIZE);
		if (r == -1)
		{
			free(str);
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
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(buffer) - i + 1);
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

	if ((fd < 0) || (BUFFER_SIZE <= 0))
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
// 	int		i;
// 	int		fd;
// 	char	*result;

// 	i = 0;
// 	fd = open("test.txt", O_RDONLY);
// 	while (i < 5)
// 	{
// 		result = get_next_line(fd);
// 		i++;
// 		printf("%d::%s", i, result);
// 	}
// 	close(fd);
// 	return (0);
// }
