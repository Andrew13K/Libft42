#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <string.h>

Test(ft_strncmp, basic_equal) {
	cr_expect_eq(ft_strncmp("abc", "abc", 3), 0);
}

Test(ft_strncmp, different_length) {
	cr_expect_lt(ft_strncmp("abc", "abcd", 5), 0);
}

Test(ft_strncmp, early_termination) {
	cr_expect_eq(ft_strncmp("abcdef", "abcxyz", 3), 0);
	cr_expect_lt(ft_strncmp("abcdef", "abcxyz", 5), 0);
}

Test(ft_strncmp, n_is_zero) {
	cr_expect_eq(ft_strncmp("abc", "def", 0), 0);
}
