#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>

Test(ft_isalnum, alphanumeric_characters)
{
    for (int c = '0'; c <= '9'; c++)
        cr_assert_eq(ft_isalnum(c), isalnum(c) != 0, "Mismatch on digit %c", c);

    for (int c = 'A'; c <= 'Z'; c++)
        cr_assert_eq(ft_isalnum(c), isalnum(c) != 0, "Mismatch on uppercase %c", c);

    for (int c = 'a'; c <= 'z'; c++)
        cr_assert_eq(ft_isalnum(c), isalnum(c) != 0, "Mismatch on lowercase %c", c);
}

Test(ft_isalnum, non_alphanumeric_characters)
{
    const char *non_alnum = "!@#$%^&*()_+-=[]{},.<>/?\\|`~ \t\n";
    for (int i = 0; non_alnum[i]; i++)
        cr_assert_eq(ft_isalnum(non_alnum[i]), isalnum(non_alnum[i]) != 0,
                     "Mismatch on non-alphanumeric '%c'", non_alnum[i]);
}

Test(ft_isalnum, extended_ascii_and_negative)
{
    for (int i = -128; i < 0; i++)
        cr_assert_eq(ft_isalnum(i), isalnum(i) != 0, "Mismatch on negative value %d", i);

    for (int i = 128; i < 140; i++)
        cr_assert_eq(ft_isalnum(i), isalnum(i) != 0, "Mismatch on extended ASCII %d", i);
}

Test(ft_isalnum, full_range_comparison)
{
    for (int i = -10; i <= 255; i++)
    {
        int expected = isalnum(i) != 0;
        int actual = ft_isalnum(i);
        cr_assert_eq(actual, expected,
                     "ft_isalnum(%d) = %d, isalnum = %d", i, actual, expected);
    }
}
