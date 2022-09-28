/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:25:12 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/20 15:25:13 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	i = 0;
	r = 0;
	while (s1[i] && i < n)
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
