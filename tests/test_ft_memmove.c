#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_memmove, testing_ft_memmove)
{
	cr_log_info("\n============= FT_MEMMOVE =============\n");

	char src[50] = "Hello, World!";
	char dest1[50], dest2[50];
	char *expected = memmove(dest1, src, strlen(src) + 1);
	char *actual = ft_memmove(dest2, src, strlen(src) + 1);
	cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	char buf1[100] = "abcdefghijklmnopqrstuvwxyz";
	char buf2[100] = "abcdefghijklmnopqrstuvwxyz";
	expected = memmove(buf1 + 5, buf1, 10);
	actual = ft_memmove(buf2 + 5, buf2, 10);
	cr_assert_arr_eq(buf1 + 5, buf2 + 5, 10, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(buf1, "abcdefghijklmnopqrstuvwxyz");
	strcpy(buf2, "abcdefghijklmnopqrstuvwxyz");
	expected = memmove(buf1, buf1 + 5, 10);
	actual = ft_memmove(buf2, buf2 + 5, 10);
	cr_assert_arr_eq(buf1, buf2, 10, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src, "123456");
	strcpy(dest1, "abcdef");
	strcpy(dest2, "abcdef");
	expected = memmove(dest1, src, 0);
	actual = ft_memmove(dest2, src, 0);
	cr_assert_arr_eq(dest1, dest2, 10, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src, "");
	strcpy(dest1, "xxxxx");
	strcpy(dest2, "xxxxx");
	expected = memmove(dest1, src, 1);
	actual = ft_memmove(dest2, src, 1);
	cr_assert_str_eq(dest1, dest2, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	actual = ft_memmove(NULL, NULL, 0);
	cr_assert_null(actual, "❌ Failed: correct output = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_memmove, sigsegv_invalid_input, .signal = SIGSEGV)
{
	char dest[50];
	ft_memmove(dest, NULL, 5);
	cr_log_info("❌ Failed\n");
}