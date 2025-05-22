#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isalpha, lowercase_letters)
{
    for (int c = 'a'; c <= 'z'; c++)
        cr_assert_eq(ft_isalpha(c), isalpha(c) != 0, "Mismatch on lowercase '%c'", c);
}

Test(ft_isalpha, uppercase_letters)
{
    for (int c = 'A'; c <= 'Z'; c++)
        cr_assert_eq(ft_isalpha(c), isalpha(c) != 0, "Mismatch on uppercase '%c'", c);
}

Test(ft_isalpha, digits_and_symbols)
{
    const char *chars = "0123456789!@#$%^&*()-_=+[{]}|;:'\",<.>/?\\`~ \t\n";
    for (int i = 0; chars[i]; i++)
        cr_assert_eq(ft_isalpha(chars[i]), isalpha(chars[i]) != 0,
                     "Mismatch on non-alpha char '%c'", chars[i]);
}

Test(ft_isalpha, extended_ascii_and_negative)
{
    for (int i = -128; i < 0; i++)
        cr_assert_eq(ft_isalpha(i), isalpha(i) != 0, "Mismatch on negative value %d", i);

    for (int i = 128; i <= 140; i++)
        cr_assert_eq(ft_isalpha(i), isalpha(i) != 0, "Mismatch on extended ASCII value %d", i);
}

Test(ft_isalpha, full_range_comparison)
{
    for (int i = -10; i <= 255; i++)
    {
        int expected = isalpha(i) != 0;
        int actual = ft_isalpha(i);
        cr_assert_eq(actual, expected,
                     "ft_isalpha(%d) = %d, isalpha = %d", i, actual, expected);
    }
}
