/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masilva- <masilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 22:01:24 by masilva-          #+#    #+#             */
/*   Updated: 2026/06/30 22:01:24 by masilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int g_test_num = 1;

void run_test(const char *test_name, int std_ret, int ft_ret)
{
    printf("Test %02d [%s]: ", g_test_num++, test_name);
    if (std_ret == ft_ret)
    {
        printf("\033[32m[OK]\033[0m (Return values match: %d)\n", std_ret);
    }
    else
    {
        printf("\033[31m[KO]\033[0m !!! -> Expected: %d, Got: %d\n", std_ret, ft_ret);
    }
}

int main(void)
{
    int std_len;
    int ft_len;
    char *str = "42 Lisbon";
    void *ptr = &std_len;

    printf("===========================================\n");
    printf("       FT_PRINTF DIFFERENTIAL TESTER       \n");
    printf("===========================================\n\n");

    // --- 1. Character (%c) Tests ---
    printf("--- [%%c] Character Tests ---\n");
    std_len = printf("  STD: [%c] [%c]\n", 'A', '0');
    ft_len = ft_printf("   FT: [%c] [%c]\n", 'A', '0');
    run_test("Basic characters", std_len, ft_len);

    std_len = printf("  STD: [%c]\n", '\0');
    ft_len = ft_printf("   FT: [%c]\n", '\0');
    run_test("Null character boundary", std_len, ft_len);
    printf("\n");

    // --- 2. String (%s) Tests ---
    printf("--- [%%s] String Tests ---\n");
    std_len = printf("  STD: [%s]\n", "Hello World");
    ft_len = ft_printf("   FT: [%s]\n", "Hello World");
    run_test("Standard literal string", std_len, ft_len);

    std_len = printf("  STD: [%s]\n", "");
    ft_len = ft_printf("   FT: [%s]\n", "");
    run_test("Empty string", std_len, ft_len);

    // Note: Standard behavior on Linux/macOS for NULL string printing is "(null)"
    //std_len = printf("  STD: [%s]\n", (char *)NULL);
    //ft_len = ft_printf("   FT: [%s]\n", (char *)NULL);
    //run_test("NULL string pointer protection", std_len, ft_len);
    //printf("\n");

    // --- 3. Integer (%d / %i) Tests ---
    printf("--- [%%d / %%i] Integer Tests ---\n");
    std_len = printf("  STD: [%d] [%i]\n", 42, -42);
    ft_len = ft_printf("   FT: [%d] [%i]\n", 42, -42);
    run_test("Basic pos/neg integers", std_len, ft_len);

    std_len = printf("  STD: [%d]\n", 0);
    ft_len = ft_printf("   FT: [%d]\n", 0);
    run_test("Integer zero", std_len, ft_len);

    std_len = printf("  STD: [%d] [%d]\n", INT_MAX, INT_MIN);
    ft_len = ft_printf("   FT: [%d] [%d]\n", INT_MAX, INT_MIN);
    run_test("INT_MAX and INT_MIN boundaries", std_len, ft_len);
    printf("\n");

    // --- 4. Unsigned (%u) Tests ---
    printf("--- [%%u] Unsigned Integer Tests ---\n");
    std_len = printf("  STD: [%u]\n", 3000000000U);
    ft_len = ft_printf("   FT: [%u]\n", 3000000000U);
    run_test("Large unsigned number", std_len, ft_len);

    std_len = printf("  STD: [%u]\n", UINT_MAX);
    ft_len = ft_printf("   FT: [%u]\n", UINT_MAX);
    run_test("UINT_MAX upper boundary", std_len, ft_len);
    printf("\n");

    // --- 5. Hexadecimal (%x / %X) Tests ---
    printf("--- [%%x / %%X] Hexadecimal Tests ---\n");
    std_len = printf("  STD: [%x] [%X]\n", 255, 255);
    ft_len = ft_printf("   FT: [%x] [%X]\n", 255, 255);
    run_test("Basic lower/upper hex transformations", std_len, ft_len);

    std_len = printf("  STD: [%x]\n", 0);
    ft_len = ft_printf("   FT: [%x]\n", 0);
    run_test("Hexadecimal zero", std_len, ft_len);

    std_len = printf("  STD: [%x]\n", UINT_MAX);
    ft_len = ft_printf("   FT: [%x]\n", UINT_MAX);
    run_test("Hexadecimal UINT_MAX boundary", std_len, ft_len);
    printf("\n");

    // --- 6. Pointer (%p) Tests ---
    printf("--- [%%p] Pointer Address Tests ---\n");
    std_len = printf("  STD: [%p]\n", ptr);
    ft_len = ft_printf("   FT: [%p]\n", ptr);
    run_test("Standard valid stack pointer address", std_len, ft_len);

    std_len = printf("  STD: [%p]\n", (void *)NULL);
    ft_len = ft_printf("   FT: [%p]\n", (void *)NULL);
    run_test("NULL pointer memory location mapping", std_len, ft_len);
    printf("\n");

    // --- 7. Percent Sign (%%) Tests ---
    printf("--- [%%%%] Percent Sign Tests ---\n");
    std_len = printf("  STD: [%%] [%%%%]\n");
    ft_len = ft_printf("   FT: [%%] [%%%%]\n");
    run_test("Escaped literal percent characters", std_len, ft_len);
    printf("\n");

    // --- 8. Mixed Format Combinations ---
    printf("--- Mixed Structural Tests ---\n");
    std_len = printf("  STD: Mix -> %c %s %d %x %p %%\n", 'X', str, 123, 0xabcdef, ptr);
    ft_len = ft_printf("   FT: Mix -> %c %s %d %x %p %%\n", 'X', str, 123, 0xabcdef, ptr);
    run_test("Multi-argument sequence processing", std_len, ft_len);

    printf("\n===========================================\n");
    printf("              TESTS COMPLETE               \n");
    printf("===========================================\n");

    return (0);
}
