#include <criterion/criterion.h>
#include "../libft.h"

Test(ft_tolower, uppercase_to_lowercase)
{
    cr_assert_eq(ft_tolower('A'), 'a');
    cr_assert_eq(ft_tolower('Z'), 'z');
}

Test(ft_tolower, non_alphabetic_characters)
{
    cr_assert_eq(ft_tolower('1'), '1');
    cr_assert_eq(ft_tolower('!'), '!');
    cr_assert_eq(ft_tolower(' '), ' ');
}

Test(ft_tolower, already_lowercase)
{
    cr_assert_eq(ft_tolower('a'), 'a');
    cr_assert_eq(ft_tolower('z'), 'z');
}

Test(ft_tolower, boundary_case)
{
    cr_assert_eq(ft_tolower(127), 127);
    cr_assert_eq(ft_tolower(0), 0);
}
