/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 05:43:18 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/28 05:43:18 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(int printed)
{
	static int	count;
	int			total;

	if (printed == -1)
	{
		total = count;
		count = 0;
		return (total);
	}
	count += printed;
	return (count);
}

void ft_putchar(char c)
{
	ft_count(write(1, &c, 1));
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	if (!str)
		str = "(null)";
	ft_count(write(1, str, ft_strlen(str)));
}
