#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char str[20] = "!ASDHKBAS~";

	printf("%d ", ft_str_is_printable(str));
}
