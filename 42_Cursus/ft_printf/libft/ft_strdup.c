/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:58:44 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/09/26 14:50:07 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;
	int		j;

	len = ft_strlen(s1);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		result[j] = s1[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	str[12];
// 	char	*result;
// 	char	*result2;

// 	strcpy(str, "Helloworld");
// 	result = strdup(str);
// 	printf("\n\nORIGINAL --> The string: [%s]\n", result);
// 	result2 = ft_strdup(str);
// 	printf("MY_STRDUP --> The string: [%s]\n\n\n", result2);
// 	return (0);
// }
