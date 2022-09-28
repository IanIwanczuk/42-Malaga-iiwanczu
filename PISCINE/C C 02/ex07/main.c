#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char	str[20] = "Hsdo1fl-asFD";
	int	cont = 0;

	ft_strupcase(str);
	while (str[cont])
	{
		printf("%c", str[cont]);
		cont++;
	}
}
