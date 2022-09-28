#include <stdio.h>

void	ft_putnbr_base(int nb, char *base);

int	main(void)
{
	int number;

	number = 4895161;

	ft_putnbr_base(number, "0123456789");
	printf("\n");
	ft_putnbr_base(number, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(number, "01");
	printf("\n");
	ft_putnbr_base(number, "poniguay");

	return (0);
}
