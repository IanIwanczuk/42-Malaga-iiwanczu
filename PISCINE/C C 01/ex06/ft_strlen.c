/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:26:59 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/17 17:27:01 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

// int	main(void)
// {
// 	char c[] = "Hello World";
// 	char *string;
// 	string = c;
// 	printf("%d\n", ft_strlen(string));
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
