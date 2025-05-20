#include <criterion/criterion.h>
#include "../libft.h"
#include <stdlib.h>

char to_upper(unsigned int i, char c) {
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char add_index(unsigned int i, char c) {
    return c + i;
}

Test(ft_strmapi, basic_uppercase_conversion) {
    char *result = ft_strmapi("hello", to_upper);
    cr_assert_str_eq(result, "HELLO", "ft_strmapi should convert lowercase to uppercase");
    free(result);
}

Test(ft_strmapi, with_index_manipulation) {
    char *result = ft_strmapi("abcd", add_index);
    cr_assert_str_eq(result, "aceg", "ft_strmapi should modify chars with their index");
    free(result);
}

Test(ft_strmapi, empty_string) {
    char *result = ft_strmapi("", to_upper);
    cr_assert_str_eq(result, "", "ft_strmapi on empty string should return empty string");
    free(result);
}

Test(ft_strmapi, null_input) {
    char *result = ft_strmapi(NULL, to_upper);
    cr_assert_null(result, "ft_strmapi should return NULL when input is NULL");
}
