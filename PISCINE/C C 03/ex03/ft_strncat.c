/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:58:10 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/21 15:58:12 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
