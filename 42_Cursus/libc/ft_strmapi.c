/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:51:52 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/28 14:03:46 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---------------- Descripción ----------------
// A cada carácter de la string ’s’, aplica la función 
// ’f’ dando como parámetros el índice de cada carácter
// dentro de ’s’ y el propio carácter. Genera una nueva
// string con el resultado del uso sucesivo de ’f’.

// ---------------- Valor devuelto ----------------
// La string creada tras el correcto uso de ’f’ sobre
// cada carácter. NULL si falla la reserva de memoria.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	
	return (result);
}

int	main(void)
{
	char	str[40];

	strcpy(str, "Hello world, and everyone.");
	printf("%s\n", str);
	return (0);
}