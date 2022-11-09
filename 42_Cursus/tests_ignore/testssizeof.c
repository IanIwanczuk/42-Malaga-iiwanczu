/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testssizeof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:10:52 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/09 16:33:35 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// ---------------- TEST 1 ----------------
// int	main(void)
// {
// 	char	*ptr;
// 	int		*ptr2;

// 	printf("---Ptr1---\n");
// 	printf("One: %lu\n", (sizeof * ptr));
// 	printf("Five: %lu\n", (sizeof * ptr * 5));
// 	printf("Size of the pointer: %lu\n", (sizeof ptr));
// 	printf("---Ptr2---\n");
// 	printf("One: %lu\n", (sizeof * ptr2));
// 	printf("Five: %lu\n", (sizeof * ptr2 * 5));
// 	printf("Size of the pointer: %lu\n", (sizeof ptr2));
// 	return (0);
// }

// ---------------- TEST 2 ----------------
int	main(void)
{
	char		c;
	int			i;
	long		l;

	c = 'a';
	i = 5;
	l = 4;
	printf("The size of int is: %lu\n", sizeof i);
	printf("The size of char is %lu\n", sizeof c);
	printf("The size of long is %lu\n", sizeof l);
	printf("The size of float is: %lu\n", sizeof(float));
	return (0);
}