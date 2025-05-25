#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <signal.h>
#include <string.h>

Test(ft_strdup, testing_ft_strdup)
{
    cr_log_info("\n============= FT_STRDUP =============\n");
    const char *s1 = "Hello, World!";
	char *actual = ft_strdup(s1);
	char *expected = strdup(s1);
    cr_assert_str_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
	free(actual);
	free(expected);

	s1 = "";
	actual = ft_strdup(s1);
	expected = strdup(s1);
    cr_assert_str_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
	free(actual);
	free(expected);

	s1 = "This is a very long string, used to test ft_strdup's behavior with large inputs.";
	actual = ft_strdup(s1);
	expected = strdup(s1);
    cr_assert_str_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
	free(actual);
	free(expected);
}

Test(ft_strdup, sigsegv_test, .signal = SIGSEGV)
{
    ft_strdup(NULL);
	cr_log_info("❌ Failed \n");
}

