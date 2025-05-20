#include <criterion/criterion.h>
#include "../libft.h"

Test(ft_toupper, lowercase_to_uppercase)
{
    cr_assert_eq(ft_toupper('a'), 'A');
    cr_assert_eq(ft_toupper('z'), 'Z');
}

Test(ft_toupper, non_alphabetic_characters)
{
    cr_assert_eq(ft_toupper('1'), '1');
    cr_assert_eq(ft_toupper('!'), '!');
    cr_assert_eq(ft_toupper(' '), ' ');
}

Test(ft_toupper, already_uppercase)
{
    cr_assert_eq(ft_toupper('A'), 'A');
    cr_assert_eq(ft_toupper('Z'), 'Z');
}

Test(ft_toupper, boundary_case)
{
    cr_assert_eq(ft_toupper(127), 127);
    cr_assert_eq(ft_toupper(0), 0);
}
