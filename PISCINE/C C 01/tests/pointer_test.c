/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:30:01 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/17 09:30:03 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	a;
	int	*pointer;

	a = 56;
	pointer = &a;
	printf("\nContenido del puntero: %d\n", *pointer);
	printf("Dir. de memoria del puntero: %p\n", pointer);
	printf("Dir. de memoria a la que apunta: %p\n", &pointer);
	printf("Valor variable 'a': %d\n", a);
	printf("Dir. de memoria de 'a': %p\n\n", &a);
	return (0);
}
