#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[30] = "Hola :)";
	char	dest[20];
	int		cont;

	cont = 0;
	ft_strcpy(dest, src);
	while (dest[cont])
	{
		printf("%c", dest[cont]);
		cont++;
	}
}