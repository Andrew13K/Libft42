#include <criterion/criterion.h>
#include "../libft_files/libft.h"

void to_uppercase(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

Test(ft_striteri, basic_case)
{
    char str[] = "hello";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "HELLO", "ft_striteri did not convert the string to uppercase correctly");
}

Test(ft_striteri, empty_string)
{
    char str[] = "";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "", "ft_striteri should not modify an empty string");
}

Test(ft_striteri, single_char)
{
    char str[] = "a";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "A", "ft_striteri did not convert the single character to uppercase");
}

Test(ft_striteri, null_string)
{
    ft_striteri(NULL, to_uppercase);
    cr_assert(1);
}
