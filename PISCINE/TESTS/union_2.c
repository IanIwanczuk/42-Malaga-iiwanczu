#include <stdio.h>
#include <unistd.h>

int	ft_strcat(char *dest, char *src);
int	ft_strcat_char(char *dest, char src);
void	ft_putstr(char *Str);

int	main(int argc, char **argv)
{
	char union_string[80];
	char *args_string;
	int flag_unique;
	int i;
	int j;

	i = 0;
	if (argc == 3)
	{	
		args_string = argv[1];
		ft_strcat(args_string, argv[2]);
		union_string[0] = args_string[0]; 

		while (args_string[i] != '\0')
		{
			j = 0;
			flag_unique = 1;
			while (union_string[j] != '\0')
			{
				if (args_string[i] == union_string[j])
				{
					flag_unique = 0;
					break ;
				}
				j++;
			}
			if (flag_unique)
			{
				ft_strcat_char(union_string, args_string[i]);
			}
			i++;
		}
		ft_putstr(union_string);
	}
	write(1, "\n", 1);
	return (0);
}


int	ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int	ft_strcat_char(char *dest, char src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}