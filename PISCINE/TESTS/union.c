#include <stdio.h>

int	main(void)
{
	// Primero concateno las dos cadenas.
	char argument[80] = "zpadintonpaqefwtdjetyiytjneytjoeyjnejeyj";
	char temp[80] = "";
	int i;
	int j;
	int contador;

contador = 0;
	temp[0] = argument[0];
	i = 0;

	while (argument[i])
	{
		j = 0;
		while (temp[j])
		{
			if (argument[i] == temp[j])
				contador++;
			
			j++;
		}
		if (contador == 0)
			temp[j] = argument[i];
		contador = 0;
		i++;
	}


	return (0);
}
