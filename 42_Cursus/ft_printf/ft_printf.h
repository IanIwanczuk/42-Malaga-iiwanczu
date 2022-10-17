/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:39:53 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/14 15:14:40 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printnbr(int nb);
int	ft_print_ptr(unsigned long long pointer);
int	ft_print_uint(unsigned int num);
int	ft_print_hex(unsigned int hex_num, const char value_type);

#endif