/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:06:27 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/18 16:58:27 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_read_file(int fd)
{
	char	*buf;
	ssize_t	rd_return;

	buf = (char *)malloc(sizeof * buf * (BUFFER_SIZE + 1));
	if (!buf)
		return ;
	rd_return = 1;
	while (rd_return > 0)
	{
		rd_return = read(fd, buf, BUFFER_SIZE);
		if (rd_return == -1)
		{
			free(buf);
			return ;
		}
	}
}

char	*get_next_line(int fd)
{
	static char	*keep;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read_file();
}

int	main(void)
{
	char	*result;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
}
