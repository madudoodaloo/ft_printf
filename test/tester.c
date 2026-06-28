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

/* #include <stdio.h>
int main(void)
{
	int ret;

	ret = printf("");
	printf("\n");
	printf("%i\n", ret);
	//output: nothing

	ret = printf("%%");
	printf("\n");
	printf("%i\n", ret);
	//output: %

	ret = printf("/");
	printf("\n");
	printf("%i\n", ret);
	//output: /

	ret = printf("/0");
	printf("\n");
	//output: /0

	char *str = NULL;
	ret = printf("%s", str);
	printf("\n");
	printf("%i\n", ret);
	//output: (null)

	ret = printf("%p", str);
	printf("\n");
	printf("%i\n", ret);
	//output: (nil)

	str = "ola";
	ret = printf("%s", str);
	printf("\n");
	printf("%i\n", ret);
	//output: ola

	ret = printf("%p", str);
	printf("\n");
	printf("%i\n", ret);
	//output: 0x5ee6c9fd8010

	//ret is always the nr of printed chars.
} */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    long long i = 0;
    // INT_MAX + 5
    long long target = (long long)INT_MAX + 5; 
    
    // This is what your internal ft_printf counter would do
    int my_ft_printf_counter = 0; 

    while (i < target)
    {
        putchar('A');
        my_ft_printf_counter++;
        i++;
    }
    
    // We print to stderr so it bypasses the normal stdout redirection
    fprintf(stderr, "\n\n--- LOOP FINISHED ---\n");
    fprintf(stderr, "Actual bytes sent: %lld\n", i);
    fprintf(stderr, "Your counter wrapped around to: %d\n", my_ft_printf_counter);
    
    return (0);
}