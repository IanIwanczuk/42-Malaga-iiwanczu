/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:55:48 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/10 13:20:49 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static long int	ft_int_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_verify_itoa(char *result, int n, unsigned int *num)
{
	int	i;

	i = 0;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		*num = n * -1;
		result[0] = '-';
		i++;
	}
	else
		*num = n;
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*result;
	int				len;

	len = ft_int_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!(result))
		return (NULL);
	result[len--] = '\0';
	ft_verify_itoa(result, n, &num);
	while (num > 0)
	{
		result[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(123));
// 	return (0);
// }
