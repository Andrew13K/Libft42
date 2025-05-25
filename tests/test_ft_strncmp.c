#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <signal.h>
#include <string.h>

Test(ft_strncmp, testing_ft_strncmp) {
	cr_log_info("\n============= FT_STRNCMP =============\n");
	char *s1 = "hello";
	char *s2 = "hello";
	int actual = ft_strncmp(s1, s2, 5);
	int expected = strncmp(s1, s2, 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "hello";
	s2 = "helloi";
	actual = ft_strncmp(s1, s2, 5);
	expected = strncmp(s1, s2, 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "hello";
	s2 = "helloi";
	actual = ft_strncmp(s1, s2, 6);
	expected = strncmp(s1, s2, 6);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "hello";
	s2 = "helloi";
	actual = ft_strncmp(s1, s2, 0);
	expected = strncmp(s1, s2, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "hwelo";
	s2 = "helloi";
	actual = ft_strncmp(s1, s2, 3);
	expected = strncmp(s1, s2, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s2 = "helloi";
	actual = ft_strncmp(NULL, s2, 0);
	expected = strncmp(NULL, s2, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	s1 = "hwelo";
	actual = ft_strncmp(s1, NULL, 0);
	expected = strncmp(s1, NULL, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%d\", my output = \"%d\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strncmp, testing_sigsegv, .signal = SIGSEGV) {
	char *s1 = "hello";
	ft_strncmp(s1, NULL, 1);
	cr_log_info("❌ Failed \n");
}
