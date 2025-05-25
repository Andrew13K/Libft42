#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <signal.h>
#include <string.h>

Test(ft_strnstr, testing_ft_strnstr)
{
	cr_log_info("\n============= FT_STRNSTR =============\n");
	char *big = "hello";
	char *little = "ll";
	char *actual = ft_strnstr(big, little, 5);
	char *expected = strnstr(big, little, 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	big = "hello";
	little = "ll";
	actual = ft_strnstr(big, little, 3);
	expected = strnstr(big, little, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	big = "hello";
	little = "ll";
	actual = ft_strnstr(big, little, 0);
	expected = strnstr(big, little, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	big = "";
	little = "ll";
	actual = ft_strnstr(big, little, 3);
	expected = strnstr(big, little, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	big = "hello";
	little = "";
	actual = ft_strnstr(big, little, 3);
	expected = strnstr(big, little, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	big = "hello";
	little = "o";
	actual = ft_strnstr(big, little, 5);
	expected = strnstr(big, little, 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	little = "";
	actual = ft_strnstr(NULL, little, 0);
	expected = strnstr(NULL, little, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strnstr, little_null, .signal = SIGSEGV)
{
	char *big = "hello";
	ft_strnstr(big, NULL, 0);
	cr_log_info("❌ Failed \n");
}

Test(ft_strnstr, big_null, .signal = SIGSEGV)
{
	char *little = "hello";
	ft_strnstr(NULL, little, 1);
	cr_log_info("❌ Failed \n");
}