#include <criterion/criterion.h>
#include "../libft_files/libft.h"

Test(ft_strtrim, trims_both_sides)
{
    char *result = ft_strtrim("  \tHello World!\t  ", " \t");
    cr_assert_str_eq(result, "Hello World!");
    free(result);
}

Test(ft_strtrim, trims_no_change_needed)
{
    char *result = ft_strtrim("Hello", " \t");
    cr_assert_str_eq(result, "Hello");
    free(result);
}

Test(ft_strtrim, trims_empty_string)
{
    char *result = ft_strtrim("", " \t");
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_strtrim, trims_empty_set)
{
    char *result = ft_strtrim("Hello World!", "");
    cr_assert_str_eq(result, "Hello World!");
    free(result);
}

Test(ft_strtrim, trims_all_chars)
{
    char *result = ft_strtrim("    ", " ");
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_strtrim, trims_all_chars_with_tabs)
{
    char *result = ft_strtrim("\t\t\t", "\t");
    cr_assert_str_eq(result, "");
    free(result);
}

Test(ft_strtrim, trims_single_char_match)
{
    char *result = ft_strtrim("abcxyzabc", "abc");
    cr_assert_str_eq(result, "xyz");
    free(result);
}
