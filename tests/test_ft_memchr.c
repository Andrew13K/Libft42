#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>

Test(ft_memchr, find_char)
{
	cr_log_info("\n============= FT_MEMCHR =============\n");
    const char *str = "Hello, World!";
    char *actual = ft_memchr(str, 'o', 13);
    char *expected = memchr(str, 'o', 13);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	str = "Hello, World!";
    actual = ft_memchr(str, '!', 5);
    expected = memchr(str, '!', 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	str = "Hello, World!";
    actual = ft_memchr(str, '!', 13);
    expected = memchr(str, '!', 13);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

    actual = ft_memchr(NULL, '!', 0);
    expected = memchr(NULL, '!', 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memchr, seg_fault, .signal = SIGSEGV)
{
	const char *str = "Hello, World!";
    ft_memchr(NULL, 'o', 1);
	cr_log_info("❌ Failed: this shoul give an error\n");
}

