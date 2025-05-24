#include <criterion/criterion.h>
#include <ctype.h>
#include "../libft_files/libft.h"

Test(ft_toupper, full_range_comparison)
{
	cr_log_info("\n============= FT_TOLOWER =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = toupper(i);
        int actual = ft_toupper(i);
        cr_assert_eq(actual, expected,
                     "ft_toupper(%d) = %d, toupper = %d", i, actual, expected);
    }
	cr_log_info("✅ Pass \n");

	int eof = -1;
    int expected = toupper(eof);
    int actual = ft_toupper(eof);
    cr_assert_eq(actual, expected, "ft_toupper(EOF) = %d, toupper(EOF) = %d", actual, expected);
	cr_log_info("✅ Pass EOF Test ft_toupper(EOF) = %d, toupper(EOF) = %d\n", actual,expected);
}
