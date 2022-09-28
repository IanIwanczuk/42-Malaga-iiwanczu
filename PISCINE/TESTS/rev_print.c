#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[12] = "Hello World";
	int i;

	i = strlen(str);
	while (0 <= i)
	{
		printf("%c", str[i]);
		i--;
	}
	printf("\n");
	return (0);
}