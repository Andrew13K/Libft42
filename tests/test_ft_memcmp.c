#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include <stddef.h>

Test(ft_memcmp, identical_blocks)
{
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, World!";
    cr_assert_eq(ft_memcmp(s1, s2, 13), memcmp(s1, s2, 13), "ft_memcmp did not match memcmp for identical blocks");
}

Test(ft_memcmp, different_blocks)
{
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, World?";
    cr_assert_neq(ft_memcmp(s1, s2, 13), 0, "ft_memcmp should return a non-zero value for different blocks");
    cr_assert_eq(ft_memcmp(s1, s2, 13), memcmp(s1, s2, 13), "ft_memcmp did not match memcmp for different blocks");
}

Test(ft_memcmp, empty_blocks)
{
    const char *s1 = "";
    const char *s2 = "";
    cr_assert_eq(ft_memcmp(s1, s2, 0), memcmp(s1, s2, 0), "ft_memcmp did not match memcmp for empty blocks");

    cr_assert_eq(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5), "ft_memcmp did not match memcmp for empty blocks with n > 0");
}

Test(ft_memcmp, blocks_with_diff_in_middle)
{
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, Xorld!";
    cr_assert_neq(ft_memcmp(s1, s2, 13), 0, "ft_memcmp should return a non-zero value when blocks differ in the middle");
    cr_assert_eq(ft_memcmp(s1, s2, 13), memcmp(s1, s2, 13), "ft_memcmp did not match memcmp for blocks with difference in the middle");
}

Test(ft_memcmp, non_matching_at_end)
{
    const char *s1 = "Hello";
    const char *s2 = "Hellz";
    cr_assert_neq(ft_memcmp(s1, s2, 5), 0, "ft_memcmp should return a non-zero value for blocks that differ at the end");
    cr_assert_eq(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5), "ft_memcmp did not match memcmp for non-matching at the end");
}

Test(ft_memcmp, non_matching_at_start)
{
    const char *s1 = "World";
    const char *s2 = "wOrld";
    cr_assert_neq(ft_memcmp(s1, s2, 5), 0, "ft_memcmp should return a non-zero value for blocks that differ at the start");
    cr_assert_eq(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5), "ft_memcmp did not match memcmp for non-matching at the start");
}

Test(ft_memcmp, compare_small_bytes)
{
    unsigned char s1[] = {0, 1, 2, 3, 4};
    unsigned char s2[] = {0, 1, 2, 3, 5};

    cr_assert_eq(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5), "ft_memcmp did not match memcmp for small byte arrays");
}

Test(ft_memcmp, compare_large_blocks)
{
    char s1[1000], s2[1000];
    for (int i = 0; i < 1000; i++) {
        s1[i] = i % 256;
        s2[i] = i % 256;
    }

    s2[500] = 99;

    cr_assert_neq(ft_memcmp(s1, s2, 1000), 0, "ft_memcmp should return a non-zero value for large blocks that differ");
    cr_assert_eq(ft_memcmp(s1, s2, 1000), memcmp(s1, s2, 1000), "ft_memcmp did not match memcmp for large blocks");
}

Test(ft_memcmp, compare_partial_blocks)
{
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, Xorld!";

    cr_assert_eq(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5), "ft_memcmp did not match memcmp for partial blocks");
}
