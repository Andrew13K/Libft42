#include "../libft_files/libft.h"
#include <bsd/string.h>
#include <string.h>
#include <signal.h>
#include <criterion/criterion.h>

Test(ft_strlcat, testing_ft_strlcat)
{
	cr_log_info("\n============= FT_STRLCAT =============\n");
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 9);
	size_t expected = strlcat(dest2, src, 9);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcat(dest1, src, 11);
	expected = strlcat(dest2, src, 11);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcat(dest1, src, 3);
	expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "World");
	actual = ft_strlcat(dest1, src, 3);
	expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "");
	actual = ft_strlcat(dest1, src, 3);
	expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "World");
	actual = ft_strlcat(dest1, src, 0);
	expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "World");
	actual = ft_strlcat(dest1, src, 0);
	expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(dest1, "hello");
	strcpy(dest2, "hello");
	strcpy(src, "");
	actual = ft_strlcat(dest1, src, 0);
	expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

    strcpy(dest1, "");
	strcpy(dest2, "");
	strcpy(src, "");
	actual = ft_strlcat(dest1, src, 0);
	expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, null_dest, .signal = SIGSEGV)
{
	ft_strlcat(NULL, "Hello", 5);
	cr_log_info("❌ Failed \n");
}

