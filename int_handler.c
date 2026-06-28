/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 05:43:44 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/28 05:43:44 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int	ft_putnbr(int n)
{
	long long int	nbr;
	int				i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	else
		i += ft_putchar(nbr + 48);
	return (i);
}

int	ft_puthex(uli nbr, int c)
{
	char	*str;

	if (c == 's')
		str = S_HEX;
	else
		str = B_HEX;
	if (nbr < 16)
		return (ft_putchar(str[nbr]));
	return (ft_puthex(nbr / 16, c) + ft_putchar(str[nbr % 16]));
}


int	ft_putunsigned(ui nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
	{
		i += ft_putunsigned(nbr / 10);
		i += ft_putunsigned(nbr % 10);
	}
	else
		i += ft_putchar(nbr + 48);
	return (i);
}

int	ft_putptr(uli nbr)
{
	if (!nbr)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_puthex(nbr, 's'));
}
