#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(ft_itoa, basic_positive)
{
    cr_assert_str_eq(ft_itoa(0), "0", "❌ Failed: correct output = \"0\"\n");
    cr_assert_str_eq(ft_itoa(1), "1", "❌ Failed: correct output = \"1\"\n");
    cr_assert_str_eq(ft_itoa(42), "42", "❌ Failed: correct output = \"42\"\n");
    cr_assert_str_eq(ft_itoa(123456), "123456", "❌ Failed: correct output = \"123456\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_itoa, basic_negative)
{
    cr_assert_str_eq(ft_itoa(-1), "-1", "❌ Failed: correct output = \"-1\"\n");
    cr_assert_str_eq(ft_itoa(-42), "-42", "❌ Failed: correct output = \"-42\"\n");
    cr_assert_str_eq(ft_itoa(-99999), "-99999", "❌ Failed: correct output = \"-99999\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_itoa, int_boundaries)
{
    cr_assert_str_eq(ft_itoa(INT_MAX), "2147483647", "❌ Failed: correct output = \"2147483647\"\n");
    cr_assert_str_eq(ft_itoa(INT_MIN), "-2147483648", "❌ Failed: correct output = \"-2147483648\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_itoa, random_values)
{
    cr_assert_str_eq(ft_itoa(1000000), "1000000", "❌ Failed: correct output = \"1000000\"\n");
    cr_assert_str_eq(ft_itoa(-1234567), "-1234567", "❌ Failed: correct output = \"-1234567\"\n");
    cr_assert_str_eq(ft_itoa(80085), "80085", "❌ Failed: correct output = \"80085\"\n");
	cr_log_info("✅ Pass \n");
}

