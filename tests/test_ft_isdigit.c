#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>

Test(ft_isdigit, digit_characters)
{
    for (int i = '0'; i <= '9'; i++)
    {
        cr_assert_neq(ft_isdigit(i), 0, "ft_isdigit(%c) should return non-zero", i);
        cr_assert_eq(ft_isdigit(i) != 0, isdigit(i) != 0, 
                    "ft_isdigit(%c) should match the standard isdigit", i);
    }
}

Test(ft_isdigit, non_digit_characters)
{
    const char *non_digits = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+-=[]{}|;:,.<>?/";
    
    for (int i = 0; non_digits[i] != '\0'; i++)
    {
        cr_assert_eq(ft_isdigit(non_digits[i]), 0, 
                    "ft_isdigit('%c') should return 0", non_digits[i]);
    }
}

Test(ft_isdigit, extended_ascii_and_negatives)
{
    for (int i = -10; i < 0; i++)
    {
        cr_assert_eq(ft_isdigit(i), 0, 
                    "ft_isdigit(%d) should return 0 for negative values", i);
    }
    
    for (int i = 128; i < 138; i++)
    {
        cr_assert_eq(ft_isdigit(i), 0, 
                    "ft_isdigit(%d) should return 0 for extended ASCII", i);
    }
}

Test(ft_isdigit, compare_with_standard)
{
    for (int i = -10; i < 256; i++)
    {
        int standard_result = isdigit(i);
        int my_result = ft_isdigit(i);
        cr_assert_eq(my_result != 0, standard_result != 0,
                    "For input %d: ft_isdigit returned %d, standard isdigit returned %d",
                    i, my_result, standard_result);
    }
}