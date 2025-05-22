#include <criterion/criterion.h>
#include <ctype.h>
#include "../libft_files/libft.h"

Test(ft_tolower, uppercase_to_lowercase)
{
	cr_log_info("\n============= FT_TOLOWER: UPPERCASE TO LOWERCASE =============\n");

	char input[] = {'A', 'Z'};
	for (int i = 0; i < 2; ++i) {
		int expected = tolower(input[i]);
		int actual = ft_tolower(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_tolower, non_alphabetic_characters)
{
	cr_log_info("\n============= FT_TOLOWER: NON-ALPHABETIC CHARACTERS =============\n");

	char input[] = {'1', '!', ' ', '\n', '9'};
	for (int i = 0; i < 5; ++i) {
		int expected = tolower(input[i]);
		int actual = ft_tolower(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_tolower, already_lowercase)
{
	cr_log_info("\n============= FT_TOLOWER: ALREADY LOWERCASE =============\n");

	char input[] = {'a', 'z', 'm'};
	for (int i = 0; i < 3; ++i) {
		int expected = tolower(input[i]);
		int actual = ft_tolower(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_tolower, boundary_cases)
{
	cr_log_info("\n============= FT_TOLOWER: BOUNDARY CASES =============\n");

	int inputs[] = {0, 127, -1, 255};
	for (int i = 0; i < 4; ++i) {
		int expected = tolower(inputs[i]);
		int actual = ft_tolower(inputs[i]);
		cr_assert_eq(actual, expected, "❌ Input [%d] → Expected [%d], Got [%d]", inputs[i], expected, actual);
		cr_log_info("✅ Input [%d] → Output [%d]\n", inputs[i], actual);
	}
}
