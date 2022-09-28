#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char numbers[50] = "-+-++-+-+-----12a34";

	printf("%d\n", ft_atoi(numbers));

	return (0);
}
