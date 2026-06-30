/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:58:35 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/28 00:58:35 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int ret;
	int ft;
	char *str;

	str = "";
	ret = printf("%s", str);
	ft= ft_printf("%s", str);

	printf("\n");
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: nothing

	ret = printf("%%");
	ft= ft_printf("%%");

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: %

	ret = printf("/");
	ft = ft_printf("/");

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: /

	ret = printf("/0");
	ft = ft_printf("/0");

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: /0

	str = NULL;
	ret = printf("%s", str);
	ft = ft_printf("%s", str);

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: (null)

	ret = printf("%p", str);
	ft = ft_printf("%p", str);

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: (nil)

	str = "ola";
	ret = printf("%s", str);
	ft = ft_printf("%s", str);

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: ola

	ret = printf("%p", str);
	ft= ft_printf("%p", str);

	printf("\n");
	printf("%i | %i\n", ret, ft);
	printf("std: %i | ft_ %i\n", ret, ft);

	//output: 0x5ee6c9fd8010

	//ret is always the nr of printed chars.
} 
