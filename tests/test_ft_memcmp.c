#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include <stddef.h>

Test(ft_memcmp, testing_ft_memcmp)
{
	cr_log_info("\n============= FT_MEMCMP =============\n");
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, World!";
	int actual = ft_memcmp(s1, s2, 13);
	int expected = memcmp(s1, s2, 13);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "Hello, rorld!";
    s2 = "Hello, World!";
	actual = ft_memcmp(s1, s2, 13);
	expected = memcmp(s1, s2, 13);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = NULL;
    s2 = "Hello, World!";
	actual = ft_memcmp(s1, s2, 0);
	expected = memcmp(s1, s2, 0);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "Hello, rorld!";
    s2 = NULL;
	actual = ft_memcmp(s1, s2, 0);
	expected = memcmp(s1, s2, 0);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "Hello, rorld!";
    s2 = "Hello, rorld!";
	actual = ft_memcmp(s1, s2, 0);
	expected = memcmp(s1, s2, 0);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "";
    s2 = "";
	actual = ft_memcmp(s1, s2, 0);
	expected = memcmp(s1, s2, 0);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "";
    s2 = "";
	actual = ft_memcmp(s1, s2, 5);
	expected = memcmp(s1, s2, 5);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "Hello, World!";
    s2 = "Hello, RTEd!";
	actual = ft_memcmp(s1, s2, 5);
	expected = memcmp(s1, s2, 5);
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcmp, seg_fault, .signal = SIGSEGV)
{
	char *s2 = "Hello, RTEd!";
    ft_memcmp(NULL, s2, 1);
	cr_log_info("❌ Failed: this shoul give an error\n");
}