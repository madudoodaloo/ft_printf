/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duckiemadu <duckiemadu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:37:15 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/17 17:27:52 by duckiemadu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(size_t ptr, char *str, int counter, int flag)
{
	size_t	hexa_base;

	hexa_base = 16;
	if (!ptr)
		return (ft_putstr("(nil)"));
    if (!flag)
		write(1, "0x", 2);
	if (ptr >= hexa_base)
		counter = ft_putptr(ptr / hexa_base, str, counter, 1);
	counter += ft_putchar(str[ptr % hexa_base]);
	return (counter);
}

/*int main(void)
{
	printf("%p\n", "hello");
}*/