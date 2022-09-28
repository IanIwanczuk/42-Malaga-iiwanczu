#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_open_file(char *file_name)
{
	char	*buf;
	int	sz;
	int	fd;

	buf = (char *)malloc(2048 * sizeof(char));
	fd = open(file_name, O_RDONLY);
	if (fd >= 0)
		sz = read(fd, buf, 2048);
	return (buf);
}

char	*ft_strcat_char(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		++i;
	dest[i] = src;
	++i;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
