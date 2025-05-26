#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

Test(ft_calloc, basic_allocation) {
	cr_log_info("\n============= FT_CALLOC =============\n");
	size_t count = 5;
	size_t size = sizeof(int);
	void *actual = ft_calloc(count, size);
	void *expected = calloc(count, size);
	cr_assert_not_null(actual, "❌ ft_calloc returned NULL for a valid allocation");
	cr_assert_arr_eq(actual, expected, count * size, "❌ ft_calloc did not zero-initialize correctly");

	free(actual);
	free(expected);
	cr_log_info("✅ Pass \n");
}

Test(ft_calloc, zero_allocation) {
	void *actual = ft_calloc(0, 10);
	void *expected = calloc(0, 10);
	cr_assert_arr_eq(actual, expected, 0, "❌ Failed\n");
	free(actual);
	free(expected);
	cr_log_info("✅ Pass \n");
}

Test(ft_calloc, large_allocation) {
	size_t count = 1000;
	size_t size = sizeof(char);
	void *actual = ft_calloc(count, size);
	void *expected = calloc(count, size);
	cr_assert_not_null(actual, "❌ ft_calloc returned NULL for large allocation");
	cr_assert_arr_eq(actual, expected, count * size, "❌ Large allocation was not zeroed properly");

	free(actual);
	free(expected);
	cr_log_info("✅ Pass \n");
}

Test(ft_calloc, already_zero_initialized_behavior) {
	size_t count = 4;
	size_t size = sizeof(int);
	void *actual = ft_calloc(count, size);
	void *expected = calloc(count, size);
	cr_assert_arr_eq(actual, expected, count * size, "❌ Already zeroed allocation failed");

	free(actual);
	free(expected);
	cr_log_info("✅ Pass \n");
}

Test(ft_calloc, partial_zero_check) {
	size_t count = 10;
	size_t size = 1;

	unsigned char *actual = (unsigned char *)ft_calloc(count, size);
	unsigned char *expected = (unsigned char *)calloc(count, size);

	actual[5] = 'A';
	expected[5] = 'A';

	cr_assert_arr_eq(actual, expected, count, "❌ Partial memory difference detected");

	free(actual);
	free(expected);
	cr_log_info("✅ Pass \n");
}

