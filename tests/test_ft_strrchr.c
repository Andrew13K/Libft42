#include <criterion/criterion.h>
#include <signal.h>
#include <string.h>
#include "../libft_files/libft.h"

Test(ft_strrchr, testing_ft_strrchr)
{
    cr_log_info("\n============= FT_STRRCHR =============\n");
    const char *s = "Hello, World!";
	char *actual = ft_strrchr(s, 'o');
	char *expected = strrchr(s, 'o');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strrchr(s, 'H');
	expected = strrchr(s, 'H');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strrchr(s, '\0');
	expected = strrchr(s, '\0');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strrchr(s, 'l');
	expected = strrchr(s, 'l');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strrchr(s, 'z');
	expected = strrchr(s, 'z');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strrchr, sigsegv_test, .signal = SIGSEGV)
{
    ft_strrchr(NULL, 'l');
	cr_log_info("❌ Failed \n");
}