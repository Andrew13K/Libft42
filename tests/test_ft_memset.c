#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_memset, testing_ft_memset)
{
    cr_log_info("\n============= FT_MEMSET =============\n");

	char src1[50] = "Hello, World!";
	char src2[50] = "Hello, World!";
	char *expected = memset(src1, '1', 5);
	char *actual = ft_memset(src2, '1', 5);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src1, "Hello, World!");
	strcpy(src2, "Hello, World!");
	expected = memset(src1, '1', 0);
	actual = ft_memset(src2, '1', 0);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src1, "");
	strcpy(src2, "");
	expected = memset(src1, '1', 0);
	actual = ft_memset(src2, '1', 0);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src1, "");
	strcpy(src2, "");
	expected = memset(src1, '1', 5);
	actual = ft_memset(src2, '1', 5);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src1, "Hello, World!");
	strcpy(src2, "Hello, World!");
	expected = memset(src1, '1', 20);
	actual = ft_memset(src2, '1', 20);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src1, "Hello, World!");
	strcpy(src2, "Hello, World!");
	expected = memset(src1, 0, 5);
	actual = ft_memset(src2, 0, 5);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	expected = memset(NULL, '1', 0);
	actual = ft_memset(NULL, '1', 0);
	cr_assert_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memset, sigsegv_test, .signal = SIGSEGV)
{
	ft_memset(NULL, '1', 1);
	cr_log_info("❌ Failed \n");
}
