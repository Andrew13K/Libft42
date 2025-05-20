#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdlib.h>

Test(ft_atoi, simple_positive_numbers)
{
    cr_assert_eq(ft_atoi("0"), atoi("0"), "Input: \"0\"");
    cr_assert_eq(ft_atoi("123"), atoi("123"), "Input: \"123\"");
    cr_assert_eq(ft_atoi("42"), atoi("42"), "Input: \"42\"");
}

Test(ft_atoi, simple_negative_numbers)
{
    cr_assert_eq(ft_atoi("-1"), atoi("-1"), "Input: \"-1\"");
    cr_assert_eq(ft_atoi("-42"), atoi("-42"), "Input: \"-42\"");
    cr_assert_eq(ft_atoi("-2147483648"), atoi("-2147483648"), "Input: \"-2147483648\"");
}

Test(ft_atoi, leading_whitespace)
{
    cr_assert_eq(ft_atoi("   123"), atoi("   123"), "Input: \"   123\"");
    cr_assert_eq(ft_atoi("\t\n\v\f\r 456"), atoi("\t\n\v\f\r 456"), "Input: with whitespace");
}

Test(ft_atoi, plus_sign)
{
    cr_assert_eq(ft_atoi("+7"), atoi("+7"), "Input: \"+7\"");
    cr_assert_eq(ft_atoi("   +89"), atoi("   +89"), "Input: \"   +89\"");
}

Test(ft_atoi, with_non_digit_trailing_chars)
{
    cr_assert_eq(ft_atoi("123abc"), atoi("123abc"), "Input: \"123abc\"");
    cr_assert_eq(ft_atoi("42!"), atoi("42!"), "Input: \"42!\"");
    cr_assert_eq(ft_atoi("-99xyz"), atoi("-99xyz"), "Input: \"-99xyz\"");
}

Test(ft_atoi, empty_and_invalid_strings)
{
    cr_assert_eq(ft_atoi(""), atoi(""), "Input: empty string");
    cr_assert_eq(ft_atoi("   "), atoi("   "), "Input: whitespace only");
    cr_assert_eq(ft_atoi("abc"), atoi("abc"), "Input: non-numeric string");
    cr_assert_eq(ft_atoi("+"), atoi("+"), "Input: \"+\" only");
    cr_assert_eq(ft_atoi("-"), atoi("-"), "Input: \"-\" only");
}

Test(ft_atoi, large_numbers)
{
    cr_assert_eq(ft_atoi("2147483647"), atoi("2147483647"), "Input: INT_MAX");
    cr_assert_eq(ft_atoi("-2147483648"), atoi("-2147483648"), "Input: INT_MIN");
}

Test(ft_atoi, compare_full_range)
{
    const char *inputs[] = {
        "0", "1", "-1", "2147483647", "-2147483648",
        "   +42", "\n-42", "999abc", "0000123", "", "   ", "+", "-", "abc123"
    };

    for (size_t i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++) {
        cr_assert_eq(ft_atoi(inputs[i]), atoi(inputs[i]), "Mismatch for input: \"%s\"", inputs[i]);
    }
}