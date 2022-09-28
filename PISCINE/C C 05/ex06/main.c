#include <stdio.h>

int	ft_is_prime(int nb);

int main (void)
{
	printf("%d: %d\n", -45, ft_is_prime(-45));
	printf("%d: %d\n", -12, ft_is_prime(-12));
	printf("%d: %d\n", 0, ft_is_prime(0));
	printf("%d: %d\n", 1, ft_is_prime(1));
	printf("%d: %d\n", 2, ft_is_prime(2));
	return (0);
}