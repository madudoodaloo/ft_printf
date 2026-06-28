/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 20:27:33 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/27 20:27:33 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define S_HEX "0123456789abcdef"
# define B_HEX "0123456789ABCDEF"

typedef unsigned int ui
typedef uli uli

# include <unistd.h> // write
# include <stdlib.h> // malloc
# include <stdarg.h> // va_
# include <stdio.h>  // printf
# include <limits.h> // macros

int	ft_printf(const char *str, ...);
int	ft_convert(char c, va_list args);

int	ft_putchar(char c);
int	ft_putstr(char *str);

int	ft_strlen(char *str);
int	ft_putnbr(int n);
int	ft_putunsigned(ui nbr);
int	ft_puthex(uli nbr, int c);
int	ft_putptr(uli nbr);

#endif