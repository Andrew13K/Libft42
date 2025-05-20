#include "../libft.h"
#include <criterion/criterion.h>
#include <limits.h>
#include <stdlib.h> 
#include <string.h>

Test(ft_itoa, basic_positive)
{
    cr_assert_str_eq(ft_itoa(0), "0", "ft_itoa(0) should return \"0\"");
    cr_assert_str_eq(ft_itoa(1), "1", "ft_itoa(1) should return \"1\"");
    cr_assert_str_eq(ft_itoa(42), "42", "ft_itoa(42) should return \"42\"");
    cr_assert_str_eq(ft_itoa(123456), "123456", "ft_itoa(123456) should return \"123456\"");
}

Test(ft_itoa, basic_negative)
{
    cr_assert_str_eq(ft_itoa(-1), "-1", "ft_itoa(-1) should return \"-1\"");
    cr_assert_str_eq(ft_itoa(-42), "-42", "ft_itoa(-42) should return \"-42\"");
    cr_assert_str_eq(ft_itoa(-99999), "-99999", "ft_itoa(-99999) should return \"-99999\"");
}

Test(ft_itoa, int_boundaries)
{
    cr_assert_str_eq(ft_itoa(INT_MAX), "2147483647", "ft_itoa(INT_MAX) failed");
    cr_assert_str_eq(ft_itoa(INT_MIN), "-2147483648", "ft_itoa(INT_MIN) failed");
}

Test(ft_itoa, random_values)
{
    cr_assert_str_eq(ft_itoa(1000000), "1000000");
    cr_assert_str_eq(ft_itoa(-1234567), "-1234567");
    cr_assert_str_eq(ft_itoa(80085), "80085");
}

Test(ft_itoa, memory_allocation)
{
    char *result = ft_itoa(123);
    cr_assert_not_null(result, "ft_itoa should return a valid pointer");
    free(result);
}
