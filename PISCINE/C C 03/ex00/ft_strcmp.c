/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:53:00 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/20 14:53:46 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i])
	{
		if (s1[i] > s2[i])
		{
			r = 1;
			break ;
		}
		if (s1[i] < s2[i])
		{
			r = -1;
			break ;
		}
		i++;
	}
	return (r);
}
