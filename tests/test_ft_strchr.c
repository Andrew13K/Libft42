#include <criterion/criterion.h>
#include <signal.h>
#include <string.h>
#include "../libft_files/libft.h"

Test(ft_strchr, testing_ft_strchr)
{
    cr_log_info("\n============= FT_STRCHR =============\n");
    const char *s = "Hello, World!";
	char *actual = ft_strchr(s, 'o');
	char *expected = strrchr(s, 'o');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strchr(s, 'H');
	expected = strrchr(s, 'H');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strchr(s, '\0');
	expected = strrchr(s, '\0');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strchr(s, 'l');
	expected = strrchr(s, 'l');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s = "Hello, World!";
	actual = ft_strchr(s, 'z');
	expected = strrchr(s, 'z');
    cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strchr, sigsegv_test, .signal = SIGSEGV)
{
    ft_strchr(NULL, 'l');
	cr_log_info("❌ Failed \n");
}
