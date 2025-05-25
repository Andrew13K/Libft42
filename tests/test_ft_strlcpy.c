#include "../libft_files/libft.h"
#include <bsd/string.h>
#include <string.h>
#include <signal.h>
#include <criterion/criterion.h>

Test(ft_strlcpy, testing_ft_strlcpy)
{
	cr_log_info("\n============= FT_STRLCPY =============\n");
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcpy(dest1, src, 9);
	size_t expected = strlcpy(dest2, src, 9);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcpy(dest1, src, 11);
	expected = strlcpy(dest2, src, 11);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcpy(dest1, src, 3);
	expected = strlcpy(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "World");
	actual = ft_strlcpy(dest1, src, 3);
	expected = strlcpy(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "");
	actual = ft_strlcpy(dest1, src, 3);
	expected = strlcpy(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcpy(dest1, src, 0);
	expected = strlcpy(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "World");
	actual = ft_strlcpy(dest1, src, 0);
	expected = strlcpy(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "");
	actual = ft_strlcpy(dest1, src, 0);
	expected = strlcpy(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

    strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "");
	actual = ft_strlcpy(dest1, src, 0);
	expected = strlcpy(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src, "Hello");
	actual = ft_strlcpy(NULL, src, 0);
	expected = strlcpy(NULL, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcpy, null_src, .signal = SIGSEGV)
{
	char dest[50] = "hello";
	ft_strlcpy(dest, NULL, 5);
	cr_log_info("❌ Failed \n");
}

Test(ft_strlcpy, null_dest_size_1, .signal = SIGSEGV)
{
	ft_strlcpy(NULL, "hello", 1);
	cr_log_info("❌ Failed \n");
}
