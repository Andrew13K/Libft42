#include <criterion/criterion.h>
#include "../libft.h"

Test(ft_strchr, character_found)
{
    const char *str = "Hello, World!";
    char *result = ft_strchr(str, 'W');
    cr_assert_str_eq(result, "World!", "ft_strchr should return the substring starting from 'W'");
}

Test(ft_strchr, character_not_found)
{
    const char *str = "Hello, World!";
    char *result = ft_strchr(str, 'z');
    cr_assert_eq(result, NULL, "ft_strchr should return NULL when the character is not found");
}

Test(ft_strchr, null_terminator_found)
{
    const char *str = "Hello, World!";
    char *result = ft_strchr(str, '\0');
    cr_assert_eq(result, str + 13, "ft_strchr should return a pointer to the null terminator");
}

Test(ft_strchr, empty_string)
{
    const char *str = "";
    char *result = ft_strchr(str, 'a');
    cr_assert_eq(result, NULL, "ft_strchr should return NULL for an empty string");
}

Test(ft_strchr, first_character)
{
    const char *str = "Hello, World!";
    char *result = ft_strchr(str, 'H');
    cr_assert_eq(result, str, "ft_strchr should return the pointer to the first character if it is found");
}
