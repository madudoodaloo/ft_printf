/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:31:55 by msilva-c          #+#    #+#             */
/*   Updated: 2023/06/05 20:41:39 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
