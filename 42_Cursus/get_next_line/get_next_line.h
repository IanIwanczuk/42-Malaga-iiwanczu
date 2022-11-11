/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:32 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/11 17:45:47 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
int		ft_look_for_char(char *str, char c);
char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *static_string);
char	*ft_look_for_line(char *static_string);
char	*ft_remaining_string(char *static_string);

#endif