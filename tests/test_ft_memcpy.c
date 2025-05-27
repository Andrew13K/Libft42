#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_memcpy, lots_of_space)
{
    char dest1[50];
	char dest2[50];
	char src[50] = "Hello, World!";
	char *expected = memcpy(dest1, src, 50);
	char *actual = ft_memcpy(dest2, src, 50);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, not_empty_src)
{
    char dest1[50];
	char dest2[50];
	char src[50] = "Hello, World!";
	char *expected = memcpy(dest1, src, strlen(src));
	char *actual = ft_memcpy(dest2, src, strlen(src));
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, empty_src)
{
    char dest1[50];
	char dest2[50];
	memset(dest1, 0, 50);
	memset(dest2, 0, 50);
	char src[50] = "";
	char *expected = memcpy(dest1, src, strlen(src));
	char *actual = ft_memcpy(dest2, src, strlen(src));
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, empty_dest_size_1)
{
    char dest1[50];
	char dest2[50];
	char src[50] = "Hello, World!";
	char *expected = memcpy(dest1, src, 1);
	char *actual = ft_memcpy(dest2, src, 1);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, empty_dest_size_0)
{
    char dest1[50];
	char dest2[50];
	memset(dest1, 0, 50);
	memset(dest2, 0, 50);
	char src[50] =  "Hello, World!";
	char *expected = memcpy(dest1, src, 0);
	char *actual = ft_memcpy(dest2, src, 0);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, not_empty_dest_size_0)
{
    char dest1[50] = "Hello";
	char dest2[50] = "Hello";
	char src[50] = "Hello, World!";
	char *expected = memcpy(dest1, src, 0);
	char *actual = ft_memcpy(dest2, src, 0);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, dest_null_size_0)
{
	char src[50] = "Hello, World!";
	char *expected = memcpy(NULL, src, 0);
	char *actual = ft_memcpy(NULL, src, 0);
    cr_assert_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, src_null_size_0)
{
	char dest1[50] = "Hello";
	char dest2[50] = "Hello";
	char src[50] = "Hello, World!";
	char *expected = memcpy(dest1, NULL, 0);
	char *actual = ft_memcpy(dest2, NULL, 0);
    cr_assert_str_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, both_null_size_0)
{
	char *expected = memcpy(NULL, NULL, 0);
	char *actual = ft_memcpy(NULL, NULL, 0);
    cr_assert_eq(expected, actual, "❌ Failed: correct output = \"%s\", my output = \"%s\"\n", expected, actual);
	cr_log_info("✅ Pass \n");
}

Test(ft_memcpy, src_null_size_1, .signal = SIGSEGV)
{
    char dest[50];
    
    ft_memcpy(dest, NULL, 1);
    cr_log_info("❌ Failed \n");
}

Test(ft_memcpy, dest_null_size_1, .signal = SIGSEGV)
{
    char src[50] = "Hello, World!";
    
    ft_memcpy(NULL, src, 1);
    cr_log_info("❌ Failed \n");
}


Test(ft_memcpy, both_null_size_1, .signal = SIGSEGV)
{   
    ft_memcpy(NULL, NULL, 1);
    cr_log_info("❌ Failed \n");
}
