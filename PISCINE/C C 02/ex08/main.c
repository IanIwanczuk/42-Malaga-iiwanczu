#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char	str[20] = "HsADo2 fl-asFD";
	int	cont = 0;

	ft_strlowcase(str);
	while (str[cont])
	{
		printf("%c", str[cont]);
		cont++;
	}
}
