#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[7] = "holiwis";
	char	dest[20];
	unsigned int a;
	int	cont;

	a = 10;
	cont = 0;
	ft_strncpy(dest, src, a);
	while (dest[cont])
	{
		printf("%c", dest[cont]);
		cont++;
	}
}