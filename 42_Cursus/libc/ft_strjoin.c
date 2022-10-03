/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:41:13 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/30 15:23:45 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---------- Descripcion -----------
// Reserva con malloc() y devuelve un nuevo
// string formado por la concatenacion de 
// s1 y s2.

// --------- Valor devuelto ---------
// El nuevo string.
// NULL si falla la reserva.

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*joined;

	if (!(s1) || !(s2))
		return (NULL);
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		joined[j++] = s2[i++];
	joined[j] = '\0';
	return (joined);
}

// int	main(void)
// {
// 	char	*test;

// 	test = ft_strjoin("Hello world ", "tu madre.");
// 	printf("%s\n", test);
// 	return (0);
// }
