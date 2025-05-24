#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isprint, full_range_comparison)
{
    cr_log_info("\n============= FT_ISPRINT =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = isprint(i) != 0;
        int actual = ft_isprint(i) != 0;
        cr_assert_eq(actual, expected,
                     "ft_isprint(%d) = %d, isprint(%d) = %d", i, actual, i, expected);
    }
    cr_log_info("✅ Pass \n");

	int eof = -1;
    int expected = isprint(eof);
    int actual = ft_isprint(eof);
    cr_assert_eq(actual, expected, "ft_isprint(EOF) = %d, isprint(EOF) = %d", actual, expected);
	cr_log_info("✅ Pass EOF Test ft_isprint(EOF) = %d, isprint(EOF) = %d\n", actual,expected);
}

