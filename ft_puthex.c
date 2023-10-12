/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:33:02 by msilva-c          #+#    #+#             */
/*   Updated: 2023/06/21 11:49:50 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long int nbr, int c)
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
