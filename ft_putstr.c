/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:05:17 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/16 20:02:00 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	nr;

	if (!str)
	{
		ft_putstr("(null)");
		return (0);
	}
	nr = -1;
	while (str[++nr])
		ft_putchar(str[nr]);
	return (nr);
}
