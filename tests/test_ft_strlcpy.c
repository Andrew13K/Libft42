#include <criterion/criterion.h>
#include <string.h>  // Only for expected results
#include "../libft.h"

Test(ft_strlcpy, basic_copy)
{
    char dest1[20];
    char dest2[20];

    size_t ret1 = ft_strlcpy(dest1, "Hello", sizeof(dest1));
    size_t ret2 = strlcpy(dest2, "Hello", sizeof(dest2));

    cr_assert_eq(ret1, ret2, "Expected return value %zu, got %zu", ret2, ret1);
    cr_assert_str_eq(dest1, dest2, "Expected string \"%s\", got \"%s\"", dest2, dest1);
}

Test(ft_strlcpy, truncated_copy)
{
    char dest1[5];
    char dest2[5];

    size_t ret1 = ft_strlcpy(dest1, "Hello, World!", sizeof(dest1));
    size_t ret2 = strlcpy(dest2, "Hello, World!", sizeof(dest2));

    cr_assert_eq(ret1, ret2);
    cr_assert_str_eq(dest1, dest2);
}

Test(ft_strlcpy, zero_size_buffer)
{
    char dest[10] = "unchanged";

    size_t ret = ft_strlcpy(dest, "Hello", 0);

    cr_assert_eq(ret, 5, "Expected return value 5, got %zu", ret);
    cr_assert_str_eq(dest, "unchanged", "Destination should remain unchanged when size == 0");
}

Test(ft_strlcpy, empty_source)
{
    char dest[10] = "initial";

    size_t ret = ft_strlcpy(dest, "", sizeof(dest));

    cr_assert_eq(ret, 0);
    cr_assert_str_eq(dest, "", "Expected empty string in destination");
}

Test(ft_strlcpy, null_source_returns_zero)
{
    char dest[10] = "existing";

    size_t ret = ft_strlcpy(dest, NULL, sizeof(dest));

    cr_assert_eq(ret, 0, "Expected return value 0 when src is NULL");
    cr_assert_str_eq(dest, "", "Expected destination to be empty string if src is NULL");
}
