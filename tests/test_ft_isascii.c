#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isascii, full_range_comparison)
{
	cr_log_info("\n============= FT_ISASCII =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = isascii(i);
        int actual = ft_isascii(i);
        cr_assert_eq(actual, expected,
                     "ft_isascii(%d) = %d, isascii = %d", i, actual, expected);
    }
	cr_log_info("✅ Pass \n");
}