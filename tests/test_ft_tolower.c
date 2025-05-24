#include <criterion/criterion.h>
#include <ctype.h>
#include "../libft_files/libft.h"

Test(ft_tolower, full_range_comparison)
{
	cr_log_info("\n============= FT_TOLOWER =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = tolower(i);
        int actual = ft_tolower(i);
        cr_assert_eq(actual, expected,
                     "ft_tolower(%d) = %d, tolower = %d", i, actual, expected);
    }
	cr_log_info("✅ Pass \n");

	int eof = -1;
    int expected = tolower(eof);
    int actual = ft_tolower(eof);
    cr_assert_eq(actual, expected, "ft_tolower(EOF) = %d, tolower(EOF) = %d", actual, expected);
	cr_log_info("✅ Pass EOF Test ft_tolower(EOF) = %d, tolower(EOF) = %d\n", actual,expected);
}