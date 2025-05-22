#include <criterion/criterion.h>
#include <string.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_strlen, testing_ft_strlen, .signal = SIGSEGV) {
	cr_log_info("\n============= FT_STRLEN =============\n");
	int size = strlen("Hello");
    cr_assert_eq(ft_strlen("Hello"), strlen("Hello"), "Output should be: %d\n", size);
	cr_log_info("✅ Test 1: Passed\n");

	size = strlen("Hello World");
    cr_assert_eq(ft_strlen("Hello World"), strlen("Hello World"), "Output should be: %d\n", size);
	cr_log_info("✅ Test 2: Passed\n");

	const char *long_str = "This is a very long string for testing purposes.";
	size = strlen(long_str);
    cr_assert_eq(ft_strlen(long_str), strlen(long_str), "Output should be: %d\n", size);
	cr_log_info("✅ Test 3: Passed\n");

	size = strlen("");
    cr_assert_eq(ft_strlen(""), strlen(""), "Output should be: %d\n", size);
	cr_log_info("✅ Test 4: Passed\n");

	ft_strlen(NULL);
	cr_log_info("❌ Test 5: Failed\n");
}
