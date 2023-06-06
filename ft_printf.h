/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:55:05 by msilva-c          #+#    #+#             */
/*   Updated: 2023/06/06 21:38:45 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define S_HEX "0123456789abcdef"
# define B_HEX "0123456789ABCDEF"

# include <unistd.h> // write
# include <stdlib.h> // malloc
# include <stdarg.h> // va_
# include <stdio.h>  // printf
# include <limits.h> // macros

int	ft_printf(const char *str, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int nbr);
int	ft_puthex(unsigned long int nbr, int c);
int	ft_putptr(unsigned long int nbr);

#endif