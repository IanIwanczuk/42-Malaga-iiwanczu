#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char str[20] = "34993487734";

	printf("%d ", ft_str_is_numeric(str));
}