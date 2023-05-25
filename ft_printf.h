/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duckiemadu <duckiemadu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:54:31 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/17 17:47:50 by duckiemadu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int ft_putptr(size_t ptr, char *str, int counter, int flag);
int	ft_putnbr(long nbr);

#endif