/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:18:55 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/17 17:19:05 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.c"

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_open_file(char *file_name);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		whitespaces(char *str, int *ptr_i);
char	*ft_strcat_char(char *dest, char src);
char	*ft_strcat(char *dest, char *src);