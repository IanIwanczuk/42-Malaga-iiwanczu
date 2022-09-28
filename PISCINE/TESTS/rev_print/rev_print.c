/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:09:24 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/19 13:18:19 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str);

int	main(void)
{
	char c[13] = "Hello World";

	ft_rev_print(c);
	return (0);
}

char	*ft_rev_print(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[size])
	{
		size++;
	}
	while (str[i])
	{
		write(1, &str[(size - 1) - i], 1);
		i++;
	}
	return (str);
}
