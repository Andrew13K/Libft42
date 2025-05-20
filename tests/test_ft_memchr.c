#include "../libft.h"
#include <criterion/criterion.h>
#include <string.h>
#include <stdio.h>

Test(ft_memchr, find_char_in_middle)
{
    const char *str = "Hello, World!";
    char *result_ft = ft_memchr(str, 'o', 13);
    char *result_std = memchr(str, 'o', 13);

    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr for 'o' in string \"%s\"", str);
}

Test(ft_memchr, find_char_at_end)
{
    const char *str = "Hello, World!";
    char *result_ft = ft_memchr(str, '!', 13);
    char *result_std = memchr(str, '!', 13);

    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr for '!' in string \"%s\"", str);
}

Test(ft_memchr, find_char_not_present)
{
    const char *str = "Hello, World!";
    char *result_ft = ft_memchr(str, 'x', 13);
    char *result_std = memchr(str, 'x', 13);

    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr when character is not present in string \"%s\"", str);
}

Test(ft_memchr, search_zero_bytes)
{
    const char *str = "Hello, World!";
    char *result_ft = ft_memchr(str, 'o', 0);
    char *result_std = memchr(str, 'o', 0);

    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr when 0 bytes are searched");
}

Test(ft_memchr, multiple_occurrences)
{
    const char *str = "Hello, Hello!";
    char *result_ft = ft_memchr(str, 'l', 13);
    char *result_std = memchr(str, 'l', 13);

    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr for multiple occurrences of 'l'");
}

Test(ft_memchr, large_buffer)
{
    char buffer[1000];
    for (int i = 0; i < 1000; i++) {
        buffer[i] = (i % 26) + 'A'; 
    }
    char *result_ft = ft_memchr(buffer, 'Z', 1000);
    char *result_std = memchr(buffer, 'Z', 1000);
    cr_assert_eq(result_ft, result_std, "ft_memchr did not match memchr for large buffer searching 'Z'");
}

Test(ft_memchr, boundary_check)
{
    const char *str = "BoundaryTest";
    char *result_ft_start = ft_memchr(str, 'B', 13);
    char *result_std_start = memchr(str, 'B', 13);
    cr_assert_eq(result_ft_start, result_std_start, "ft_memchr did not match memchr for start position");

    char *result_ft_end = ft_memchr(str, 't', 13);
    char *result_std_end = memchr(str, 't', 13);
    cr_assert_eq(result_ft_end, result_std_end, "ft_memchr did not match memchr for end position");
}
