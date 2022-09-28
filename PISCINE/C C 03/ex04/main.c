#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "This is test number one.";
	char to_find[] = "test";

	printf("%s\n", str);

	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}