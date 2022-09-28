#include <stdio.h>

char	*ft_strrev(char *str);

int	main()
{
	char c[] = "Hello World";
	printf("%s\n", ft_strrev(c));

	return (0);
}

char	*ft_strrev(char *str)
{
	char aux;
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	i = 0;
	while (i < (len / 2))
	{
		aux = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = aux;
		i++;
	}
	return (str);
}
