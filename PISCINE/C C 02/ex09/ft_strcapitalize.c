/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:15:34 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/18 21:25:14 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			 && !(str[i] >= '0' && str[i] <= '9')
			 && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i+1] >= 'a' && str[i+1] <= 'z')
			{	
				str[i+1] = str[i+1] - 32;
			}	
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				str[0] = str[0] - 32;
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
