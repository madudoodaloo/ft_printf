/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:39:12 by msilva-c          #+#    #+#             */
/*   Updated: 2023/06/06 21:32:05 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
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
