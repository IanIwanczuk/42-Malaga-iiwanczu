#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	printf("%d\n", ft_atoi_base(" +---539", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("	+++--746342", "0123456789"));
	printf("%d\n", ft_atoi_base("	164512", "01"));
}