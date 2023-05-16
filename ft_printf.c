/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:55:52 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/16 19:55:36 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(char c, va_list lst)
{
	if (c == 'c')
		return(ft_putchar(va_arg(lst, int)));
	if (c == 's')
		return(ft_putstr(va_arg(lst, char *)));
	if (c == 'p')
		return(ft_putptr(va_arg(lst, size_t)));
	if (c == 'd' || c == 'i')
		return();
	if (c == 'u')
		return();
	if (c == 'x')
		return();
	if (c == 'X')
		return(ft_)
	if (c == '%')
		return(ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		nr;

	i = -1;
	nr = 0;
	va_start(lst, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			nb += ft_conversion(str[i + 1], lst);
			i++;
		}
		else
			nb += ft_putchar(str[i]);
	}
	va_end(lst);
	return (nr);
}
