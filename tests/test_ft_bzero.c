#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include <stdlib.h>

Test(ft_bzero, zero_length)
{
    char ft_buf[10] = "abcdefghi";
    char std_buf[10] = "abcdefghi";

    ft_bzero(ft_buf, 0);
    bzero(std_buf, (size_t)0);

    cr_assert_arr_eq(ft_buf, std_buf, 10, "Buffers should remain unchanged with zero length");
}

Test(ft_bzero, partial_zero)
{
    char ft_buf[10] = "abcdefghi";
    char std_buf[10] = "abcdefghi";

    ft_bzero(ft_buf, 4);
    bzero(std_buf, 4);

    cr_assert_arr_eq(ft_buf, std_buf, 10, "First 4 bytes should be zeroed, rest unchanged");
}

Test(ft_bzero, full_zero)
{
    char ft_buf[10] = "abcdefghi";
    char std_buf[10] = "abcdefghi";

    ft_bzero(ft_buf, 10);
    bzero(std_buf, 10);

    cr_assert_arr_eq(ft_buf, std_buf, 10, "All bytes should be zeroed");
}

Test(ft_bzero, zeroing_dynamic_memory)
{
    char *ft_buf = malloc(20);
    char *std_buf = malloc(20);

    memset(ft_buf, 'x', 20);
    memset(std_buf, 'x', 20);

    ft_bzero(ft_buf, 20);
    bzero(std_buf, 20);

    cr_assert_arr_eq(ft_buf, std_buf, 20, "Dynamic memory should be fully zeroed");

    free(ft_buf);
    free(std_buf);
}

Test(ft_bzero, compare_with_memset_zero)
{
    char ft_buf[15];
    char std_buf[15];

    memset(ft_buf, 'A', 15);
    memset(std_buf, 'A', 15);

    ft_bzero(ft_buf + 5, 5);
    memset(std_buf + 5, 0, 5);

    cr_assert_arr_eq(ft_buf, std_buf, 15, "ft_bzero should behave like memset with 0");
}
