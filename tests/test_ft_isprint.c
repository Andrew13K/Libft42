#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isprint, printable_ascii_range)
{
    for (int c = 32; c <= 126; c++)
    {
        cr_assert_eq(ft_isprint(c), isprint(c) != 0,
                     "Mismatch on printable character '%c' (%d)", c, c);
    }
}

Test(ft_isprint, non_printable_ascii)
{
    for (int c = 0; c < 32; c++)
    {
        cr_assert_eq(ft_isprint(c), isprint(c) != 0,
                     "Mismatch on non-printable character %d", c);
    }

    cr_assert_eq(ft_isprint(127), isprint(127) != 0,
                 "Mismatch on DEL character (127)");
}

Test(ft_isprint, extended_ascii_and_negative)
{
    for (int c = -128; c < 0; c++)
    {
        cr_assert_eq(ft_isprint(c), isprint(c) != 0,
                     "Mismatch on negative character code %d", c);
    }

    for (int c = 128; c <= 140; c++)
    {
        cr_assert_eq(ft_isprint(c), isprint(c) != 0,
                     "Mismatch on extended ASCII code %d", c);
    }
}

Test(ft_isprint, full_range_comparison)
{
    for (int c = -10; c <= 255; c++)
    {
        int expected = isprint(c) != 0;
        int actual = ft_isprint(c);
        cr_assert_eq(actual, expected,
                     "ft_isprint(%d) = %d, isprint = %d", c, actual, expected);
    }
}
