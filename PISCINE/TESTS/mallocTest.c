#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char **numbers;

	numbers = (char **)malloc(10 * sizeof(char));
	numbers[0] = "Hola";

	printf("%s\n", numbers[0]);


	return (0);
}