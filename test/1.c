/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 04:38:19 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/28 04:38:19 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// testing for the limit of printf return value
// the behaviour depends on the POSIX std
// and the OS - it triggers a failure flag
// Posix Rule - EOVERFLOW
// it sets this error specifically for the printf family
// EOVERFLOW: The value to be returned is greater than INT_MAX.
// If printf detects that the number of chars will exceed INT_MAX, 
// it stops processing, sets the global error variable errno to EOVERFLOW, and returns -1
//
//

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

// Because /dev/null swallows the data instantly without rendering anything to the screen, 
// the program will finish in just a couple of seconds.
// Because stderr is still allowed to print to your screen, a pop up will show up

// gcc loop_test.c -o loop_test
// ./loop_test > /dev/null