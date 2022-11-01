/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:02:07 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/28 16:23:30 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// ------------------- Descripción -------------------
// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada carácter
// dentro de ’s’ y la dirección del propio carácter, que
// podrá modificarse si es necesario.

// ---- Valor ----
// Nada.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// int	main(void)
// {
// 	return (0);
// }
