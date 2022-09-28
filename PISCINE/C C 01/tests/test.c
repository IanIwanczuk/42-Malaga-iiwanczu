#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char tab[] = "ABC";
	char *ptr;
	int i;

	ptr = tab;

	i = 0;
	while(ptr[i] != '\0')
	{
		printf("%c\n", ptr[i]);
		i++;
	}

	return (0);
}
