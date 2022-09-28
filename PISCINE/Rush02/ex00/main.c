/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:39:29 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/08/28 12:39:32 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

typedef struct 
{
	char *key;
	char *value;
} t_dict;


int	ft_count_entries(char *file_content);
void	ft_fill_dict(t_dict *numbers, int size, char *file_content);
void	ft_assign_key(t_dict *numbers, char *file_content, int *file_index, int num_index);
void	ft_assign_value(t_dict *numbers, char *file_content, int *file_index, int num_index);

int	main()
{
	int	keys;
	t_dict	*numbers;
	char	*file_content;

	// Opening file
	file_content = ft_open_file("numbers.dict");

	// ***Dictionary initialized and empty***
	// ft_putstr(file_content);
	keys = ft_count_entries(file_content);
	numbers = (t_dict *)malloc(keys * sizeof(t_dict));
	// ***************************************

	// ***********Filling dictionary**********
	ft_fill_dict(numbers, keys, file_content);
	// ***************************************

	free(numbers);
	return (0);
}

	// numbers[i].key = (char *)malloc(ft_strlen(str) * sizeof(char));
	// ft_strcpy(numbers[i].key, str);
	// printf("%s\n", numbers[i].key);

int	ft_count_entries(char *file_content)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while(file_content[i])
	{
		if (file_content[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void	ft_fill_dict(t_dict *numbers, int size, char *file_content)
{
	int i;
	int file_index;


	i = 0;
	file_index = 0;
	while (i < size)
	{
		ft_assign_key(numbers, file_content, &file_index, i);
		printf("%s : %s\n", numbers[i].key, numbers[i].value);
		i++;
	}
}

void	ft_assign_key(t_dict *numbers, char *file_content, int *file_index, int num_index)
{
	char temp_num[80] = "";

	while(file_content[*file_index] >= '0' && file_content[*file_index] <= '9')
	{
		ft_strcat_char(temp_num, file_content[*file_index]);
		*file_index += 1;
	}

	numbers[num_index].key = (char *)malloc(ft_strlen(temp_num) * sizeof(char));
	ft_strcpy(numbers[num_index].key, temp_num);

	while(!(file_content[*file_index] >= 'a' && file_content[*file_index] <= 'z'))
	{
		*file_index += 1;
	}

	ft_assign_value(numbers, file_content, file_index, num_index);
}



void	ft_assign_value(t_dict *numbers, char *file_content, int *file_index, int num_index)
{
	char temp_str[80] = "";

	while(file_content[*file_index] >= 'a' && file_content[*file_index] <= 'z')
	{
		ft_strcat_char(temp_str, file_content[*file_index]);
		*file_index += 1;
	}

	numbers[num_index].value = (char *)malloc(ft_strlen(temp_str) * sizeof(char));
	ft_strcpy(numbers[num_index].value, temp_str);

	*file_index += 1;
}