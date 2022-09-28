#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;
	int i;

	i = 0;
	range = ft_ultimate_range(1, 100);

	if (range != NULL)
	{
		while (range[i] != '\0')
		{
			printf("%d ", range[i]);
			i++;
		}
	}

	return (0);
}
