#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isalpha, full_range_comparison)
{
	cr_log_info("\n============= FT_ISALPHA =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = isalpha(i) != 0;
        int actual = ft_isalpha(i) != 0;
        cr_assert_eq(actual, expected,
                     "ft_isalpha(%d) = %d, isalpha = %d", i, actual, expected);
    }
	cr_log_info("✅ Pass \n");
}
