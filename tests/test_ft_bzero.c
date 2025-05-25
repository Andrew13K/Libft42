#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>


Test(ft_bzero, testing_ft_bzero) {
	cr_log_info("\n============= FT_BZERO =============\n");
	char passed[10] = "Hello";
    char expected[10] = "Hello";
	size_t i = 4;

    ft_bzero(passed, i);
    bzero(expected, i);
    cr_assert_arr_eq(passed, expected, 10);
    cr_log_info("✅ Pass \n");

	i = 0;
    strcpy(passed, "Hello");
    strcpy(expected, "Hello");
    ft_bzero(passed, i);
    bzero(expected, i);
    cr_assert_arr_eq(passed, expected, 10);
    cr_log_info("✅ Pass \n");

	i = 10;
    strcpy(passed, "Hello");
    strcpy(expected, "Hello");
    ft_bzero(passed, i);
    bzero(expected, i);
    cr_assert_arr_eq(passed, expected, 10);
    cr_log_info("✅ Pass \n");
}

Test(ft_bzero, large_buffer) {
	char passed[1000];
	char expected[1000];

	memset(passed, 'X', 1000);
	memset(expected, 'X', 1000);

	ft_bzero(passed, 1000);
	bzero(expected, 1000);
	cr_assert_arr_eq(passed, expected, 1000);
	cr_log_info("✅ Pass \n");
}

Test(ft_bzero, already_zeroed_buffer) {
	char passed[5] = {0};
	char expected[5] = {0};

	ft_bzero(passed, 5);
	bzero(expected, 5);
	cr_assert_arr_eq(passed, expected, 5);
	cr_log_info("✅ Pass \n");
}

Test(ft_bzero, zero_partial_garbage_buffer) {
	char passed[10] = {'A', 'B', 'C', 'D', 'E', 'X', 'Y', 'Z', '!', '?'};
	char expected[10];
	memmove(expected, passed, 10);

	ft_bzero(passed + 2, 5);
	bzero(expected + 2, 5);
	cr_assert_arr_eq(passed, expected, 10);
	cr_log_info("✅ Pass \n");
}

Test(ft_bzero, size_0_no_crash)
{
    ft_bzero(NULL, 0);
    cr_log_info("✅ Pass \n");
}

Test(ft_bzero, size_1_crash, .signal = SIGSEGV)
{
    ft_bzero(NULL, 1);
	cr_log_info("❌ Fail \n");
}