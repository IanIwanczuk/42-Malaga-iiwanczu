/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:08:52 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/21 16:08:54 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (to_find[j] == str[j + i])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
