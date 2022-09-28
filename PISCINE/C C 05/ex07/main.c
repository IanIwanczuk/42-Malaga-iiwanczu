#include <stdio.h>

int	ft_find_next_prime(int nb);

int main (void)
{
	printf("%d: %d\n", -15, ft_find_next_prime(-15));
	printf("%d: %d\n", 0, ft_find_next_prime(0));
	printf("%d: %d\n", 1, ft_find_next_prime(1));
	printf("%d: %d\n", 2, ft_find_next_prime(2));

	return (0);
}
