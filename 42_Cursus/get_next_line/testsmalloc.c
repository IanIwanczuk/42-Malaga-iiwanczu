/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsmalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:10:52 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/07 18:34:39 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	int		*ptr2;

	printf("---Ptr1---\n");
	printf("One: %lu\n", (sizeof * ptr));
	printf("Five: %lu\n", (sizeof * ptr * 5));
	printf("Size of the pointer: %lu\n", (sizeof ptr));
	printf("---Ptr2---\n");
	printf("One: %lu\n", (sizeof * ptr2));
	printf("Five: %lu\n", (sizeof * ptr2 * 5));
	printf("Size of the pointer: %lu\n", (sizeof ptr2));
	return (0);
}
