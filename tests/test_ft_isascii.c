#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>

Test(ft_isascii, valid_ascii_range)
{
    for (int i = 0; i <= 127; i++)
    {
        cr_assert_neq(ft_isascii(i), 0,
            "ft_isascii(%d) should return non-zero for valid ASCII", i);
        cr_assert_eq(ft_isascii(i) != 0, isascii(i) != 0,
            "Mismatch for ASCII character %d: ft_isascii = %d, isascii = %d",
            i, ft_isascii(i), isascii(i));
    }
}

Test(ft_isascii, invalid_ascii_range)
{
    for (int i = 128; i <= 255; i++)
    {
        cr_assert_eq(ft_isascii(i), 0,
            "ft_isascii(%d) should return 0 for non-ASCII characters", i);
    }

    for (int i = -128; i < 0; i++)
    {
        cr_assert_eq(ft_isascii(i), 0,
            "ft_isascii(%d) should return 0 for negative values", i);
    }
}

Test(ft_isascii, compare_with_standard)
{
    for (int i = -128; i <= 255; i++)
    {
        int expected = isascii(i);
        int actual = ft_isascii(i);
        cr_assert_eq(actual != 0, expected != 0,
            "ft_isascii(%d) = %d, but standard isascii = %d",
            i, actual, expected);
    }
}