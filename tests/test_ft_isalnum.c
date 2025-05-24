#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isalnum, full_range_comparison)
{
	cr_log_info("\n============= FT_ISALNUM =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = isalnum(i) != 0;
        int actual = ft_isalnum(i) != 0;
        cr_assert_eq(actual, expected,
                     "ft_isalnum(%d) = %d, isalnum = %d", i, actual, expected);
    }
	cr_log_info("✅ Pass \n");

	int eof = -1;
    int expected = isalnum(eof);
    int actual = ft_isalnum(eof);
    cr_assert_eq(actual, expected, "ft_isalnum(EOF) = %d, isalnum(EOF) = %d", actual, expected);
	cr_log_info("✅ Pass EOF Test ft_isalnum(EOF) = %d, isalnum(EOF) = %d\n", actual,expected);
}
