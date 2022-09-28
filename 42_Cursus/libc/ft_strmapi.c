/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:51:52 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/28 15:59:03 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ------------------- Descripción --------------------
// A cada carácter de la string ’s’, aplica la función 
// ’f’ dando como parámetros el índice de cada carácter
// dentro de ’s’ y el propio carácter. Genera una nueva
// string con el resultado del uso sucesivo de ’f’.

// ------------------ Valor devuelto ------------------
// La string creada tras el correcto uso de ’f’ sobre
// cada carácter. NULL si falla la reserva de memoria.

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	str[40];
// 	strcpy(str, "Hello world, and everyone.");
// 	printf("%s\n", ft_strmapi(str, ));
// 	return (0);
// }