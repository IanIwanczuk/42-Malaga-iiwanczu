#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[] = "This is a test. ";
	char src[] = "This is another test";

	printf("%s\n", dest);
	printf("%s\n", src);

	ft_strcat(dest, src);

	printf("%s\n", dest);

	return (0);
}
