#include <criterion/criterion.h>
#include "../libft.h"
#include <string.h>

Test(ft_strnstr, basic_match)
{
	cr_assert_str_eq(ft_strnstr("hello world", "world", 11), "world");
}

Test(ft_strnstr, no_match)
{
	cr_assert_null(ft_strnstr("hello", "world", 5));
}

Test(ft_strnstr, match_at_end)
{
	cr_assert_str_eq(ft_strnstr("hello world", "ld", 11), "ld");
}

Test(ft_strnstr, early_cutoff)
{
	cr_assert_null(ft_strnstr("hello world", "world", 5));
}

Test(ft_strnstr, empty_little)
{
	cr_assert_str_eq(ft_strnstr("hello", "", 5), "hello");
}
