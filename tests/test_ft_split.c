#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft.h"

Test(ft_split, basic_test)
{
    char **result = ft_split("Hello World", ' ');
    cr_assert_str_eq(result[0], "Hello", "First word should be 'Hello'");
    cr_assert_str_eq(result[1], "World", "Second word should be 'World'");
    cr_assert_eq(result[2], NULL, "Array should be NULL-terminated");
}

Test(ft_split, multiple_delimiters)
{
    char **result = ft_split("Hello  World  ", ' ');
    cr_assert_str_eq(result[0], "Hello", "First word should be 'Hello'");
    cr_assert_str_eq(result[1], "World", "Second word should be 'World'");
    cr_assert_eq(result[2], NULL, "Array should be NULL-terminated");
}

Test(ft_split, empty_string)
{
    char **result = ft_split("", ' ');
    cr_assert_eq(result[0], NULL, "Array should be NULL-terminated for empty string");
}

Test(ft_split, string_with_multiple_delimiters)
{
    char **result = ft_split("   Hello   World   ", ' ');
    cr_assert_str_eq(result[0], "Hello", "First word should be 'Hello'");
    cr_assert_str_eq(result[1], "World", "Second word should be 'World'");
    cr_assert_eq(result[2], NULL, "Array should be NULL-terminated");
}

Test(ft_split, string_with_null)
{
    char **result = ft_split(NULL, ' ');
    cr_assert_eq(result, NULL, "Function should return NULL when the input is NULL");
}
