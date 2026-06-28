/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 01:33:14 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/28 01:33:14 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, ui)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, ui), 's'));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, ui), 'b'));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, uli)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int    ft_printf(const char *str, ...)
{
	int		ret;
	size_t				i;
	va_list 			args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ret += ft_convert(str[++i], args);
			if (!str[i])
				break ;
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (ret);
}