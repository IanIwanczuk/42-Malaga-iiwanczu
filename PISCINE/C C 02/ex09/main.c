#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char	str[80] = "salut, comMMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int	cont = 0;
;
	ft_strcapitalize(str);
	while (str[cont])
	{
		printf("%c", str[cont]);
		cont++;
	}
}
