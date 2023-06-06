/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:28:09 by msilva-c          #+#    #+#             */
/*   Updated: 2023/06/06 21:44:18 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int nbr)
{
	if (!nbr)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_puthex(nbr, 's'));
}
