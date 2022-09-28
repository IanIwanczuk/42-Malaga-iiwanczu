/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:03:23 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/25 15:03:25 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (0 < i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar((argv[i][j]));
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
