#include <stdio.h>

#define T 10

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[40] = "hola me llamo pablo";
	char dest[T];
	int length;
	int cont = 0;

	length = ft_strlcpy(dest, src, T);
	printf("%d\n", length);
	while (dest[cont])
	{
		printf("%c", dest[cont]);
		cont++;
	}
}
