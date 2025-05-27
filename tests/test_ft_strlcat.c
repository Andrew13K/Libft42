#include "../libft_files/libft.h"
#include <bsd/string.h>
#include <string.h>
#include <signal.h>
#include <criterion/criterion.h>

Test(ft_strlcat, less_than_result)
{
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 9);
	size_t expected = strlcat(dest2, src, 9);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, enough_for_result)
{
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 11);
	size_t expected = strlcat(dest2, src, 11);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, less_than_dest)
{
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 3);
	size_t expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, empty_dest)
{
	char dest1[30] = "";
	char dest2[30] = "";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 3);
	size_t expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, empty_source)
{
	char dest1[30] = "Hello";
	char dest2[30] = "Hello";
	char src[30] = "";
	size_t actual = ft_strlcat(dest1, src, 3);
	size_t expected = strlcat(dest2, src, 3);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, size_0)
{
	char dest1[30] = "hello";
	char dest2[30] = "hello";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 0);
	size_t expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, empty_dest_size_0)
{
	char dest1[30] = "";
	char dest2[30] = "";
	char src[30] = "World";
	size_t actual = ft_strlcat(dest1, src, 0);
	size_t expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, empty_source_size_0)
{
	char dest1[30] = "Hello";
	char dest2[30] = "Hello";
	char src[30] = "";
	size_t actual = ft_strlcat(dest1, src, 0);
	size_t expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, both_empty_size_0)
{
	char dest1[30] = "";
	char dest2[30] = "";
	char src[30] = "";
	size_t actual = ft_strlcat(dest1, src, 0);
	size_t expected = strlcat(dest2, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, both_empty_size_5)
{
	char dest1[30] = "";
	char dest2[30] = "";
	char src[30] = "";
	size_t actual = ft_strlcat(dest1, src, 5);
	size_t expected = strlcat(dest2, src, 5);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, dest_null_size_0)
{
	char src[30] = "";
	size_t actual = ft_strlcat(NULL, src, 0);
	size_t expected = strlcat(NULL, src, 0);
	cr_assert_eq(actual, expected, "❌ Failed: correct output = \"%zu\", my output = \"%zu\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_strlcat, null_dest_size_1, .signal = SIGSEGV)
{
	ft_strlcat(NULL, "Hello", 1);
	cr_log_info("❌ Failed \n");
}

Test(ft_strlcat, null_src_size_1, .signal = SIGSEGV)
{
	ft_strlcat("Hello", NULL, 1);
	cr_log_info("❌ Failed \n");
}

Test(ft_strlcat, null_src_size_0, .signal = SIGSEGV)
{
	ft_strlcat("Hello", NULL, 0);
	cr_log_info("❌ Failed \n");
}
