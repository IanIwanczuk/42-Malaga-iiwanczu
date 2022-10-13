/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:57:49 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/30 15:10:47 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*temp;

	i = 0;
	temp = (char *)s;
	while (n > 0)
	{
		temp[i] = '\0';
		i++;
		n--;
	}
}

// int	main(void)
// {
// 	char	str[12];

// 	strcpy(str, "Hello World");
// 	ft_bzero(str, 2);
// 	printf("%s\n", str);
// 	return (0);
// }
