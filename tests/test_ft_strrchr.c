#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <string.h>

Test(ft_strrchr, finds_last_occurrence)
{
	cr_assert_str_eq(ft_strrchr("hello world", 'o'), strrchr("hello world", 'o'));
}

Test(ft_strrchr, returns_null_for_missing_char)
{
	cr_assert_null(ft_strrchr("hello", 'z'));
}

Test(ft_strrchr, finds_null_terminator)
{
	char str[] = "test";
	cr_assert_eq(ft_strrchr(str, '\0'), strrchr(str, '\0'));
}

Test(ft_strrchr, finds_first_if_only_once)
{
	cr_assert_eq(ft_strrchr("abc", 'a'), strrchr("abc", 'a'));
}
