#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "../libft_files/libft.h"

Test(ft_strjoin, both_strings_non_null)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    
    char *result = ft_strjoin(s1, s2);
    cr_assert_str_eq(result, "Hello, world!", "The strings were not joined correctly.");
    free(result);
}

Test(ft_strjoin, s1_null)
{
    char *s2 = "world!";
    
    char *result = ft_strjoin(NULL, s2);
    cr_assert_str_eq(result, "world!", "The string s2 should be returned when s1 is NULL.");
    free(result);
}

Test(ft_strjoin, s2_null)
{
    char *s1 = "Hello, ";
    
    char *result = ft_strjoin(s1, NULL);
    cr_assert_str_eq(result, "Hello, ", "The string s1 should be returned when s2 is NULL.");
    free(result);
}

Test(ft_strjoin, both_strings_null)
{
    char *result = ft_strjoin(NULL, NULL);
    cr_assert_null(result, "The result should be NULL when both strings are NULL.");
}

Test(ft_strjoin, empty_strings)
{
    char *result = ft_strjoin("", "");
    cr_assert_str_eq(result, "", "The result should be an empty string when both strings are empty.");
    free(result);
}

Test(ft_strjoin, empty_s1)
{
    char *s2 = "world!";
    
    char *result = ft_strjoin("", s2);
    cr_assert_str_eq(result, "world!", "The result should be equal to s2 when s1 is empty.");
    free(result);
}

Test(ft_strjoin, empty_s2)
{
    char *s1 = "Hello, ";
    
    char *result = ft_strjoin(s1, "");
    cr_assert_str_eq(result, "Hello, ", "The result should be equal to s1 when s2 is empty.");
    free(result);
}
