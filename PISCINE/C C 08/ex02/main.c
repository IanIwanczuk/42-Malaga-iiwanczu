#include <stdio.h>

#include "ft_abs.h"

int	main(void)
{
	int	i;

	i = -5;
	while (i < 5)
	{
		printf("Macros Absolute %d = %d\n", i, ABS(i));
		i++;
	}
}