#include <criterion/criterion.h>
#include "../libft_files/libft.h"

Test(ft_substr, normal_substring_extraction)
{
    char *result = ft_substr("Hello, World!", 7, 5);
    cr_assert_str_eq(result, "World");
    free(result);
}

Test(ft_substr, substring_from_start)
{
    char *result = ft_substr("Hello, World!", 0, 5);
    cr_assert_str_eq(result, "Hello");
    free(result);
}

Test(ft_substr, substring_to_end)
{
    char *result = ft_substr("Hello, World!", 7, 50);
    cr_assert_str_eq(result, "World!");
    free(result);
}

Test(ft_substr, out_of_bound_start)
{
    char *result = ft_substr("Hello, World!", 20, 5);
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_substr, zero_length_substring)
{
    char *result = ft_substr("Hello, World!", 0, 0);
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_substr, empty_string_input)
{
    char *result = ft_substr("", 0, 5);
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_substr, length_exceeds_string_length)
{
    char *result = ft_substr("Hello", 2, 10);
    cr_assert_str_eq(result, "llo");
    free(result);
}
