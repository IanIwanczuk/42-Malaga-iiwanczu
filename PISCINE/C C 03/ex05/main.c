#include <stdio.h>

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char src[] = "This is a test";
    	char dest [] = "This is another test";
    printf("%d\n", ft_strlcat(dest, src, 300));
    printf("%s\n", dest);
}	