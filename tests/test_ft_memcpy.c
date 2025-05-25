#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_memcpy, testing_ft_memcpy)
{
	cr_log_info("\n============= FT_MEMCPY =============\n");
    char dest[50];
	char src[50];
    strcpy(src, "Hello, World!");
	char *expected = memmove(dest, src, strlen(src) + 1);
	char *actual = ft_memcpy(dest, src, strlen(src) + 1);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

    strcpy(src, "Hello, World!");
	expected = memmove(dest, src, strlen(src));
	actual = ft_memcpy(dest, src, strlen(src));
	dest[strlen(src)] = '\0';
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src, "");
	expected = memmove(dest, src, strlen(src));
	actual = ft_memcpy(dest, src, strlen(src));
	dest[strlen(src)] = '\0';
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
	
	strcpy(src, "");
	expected = memmove(dest, src, strlen(src));
	actual = ft_memcpy(dest, src, strlen(src));
	dest[0] = '\0';
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	strcpy(src, "Hello, World!");
	expected = memmove(dest, src, 1);
	actual = ft_memcpy(dest, src, 1);
	dest[1] = '\0';
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");

	actual = ft_memcpy(dest, NULL, 0);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, sigsegv_test, .signal = SIGSEGV)
{
    char dest[50];
    
    ft_memcpy(dest, NULL, 5);
    cr_log_info("❌ Failed \n");
}