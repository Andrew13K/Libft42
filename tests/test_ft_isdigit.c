#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isdigit, full_range_comparison)
{
    cr_log_info("\n============= FT_ISDIGIT =============\n");
    for (int i = 0; i <= 255; i++)
    {
        int expected = isdigit(i) != 0;
        int actual = ft_isdigit(i) != 0;
        cr_assert_eq(actual, expected,
                     "ft_isdigit(%d) = %d, isdigit(%d) = %d", i, actual, i, expected);
    }
    cr_log_info("✅ Pass \n");
}
