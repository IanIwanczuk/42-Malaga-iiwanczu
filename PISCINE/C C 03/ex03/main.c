#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[] = "This is a test. ";
	char src[] = "This is another test";
	unsigned int	size;

	size = 10;

	printf("%s\n", dest);
	printf("%s\n", src);

	ft_strncat(dest, src, size);

	printf("%s\n", dest);

	return (0);
}