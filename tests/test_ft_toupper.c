#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>
#include "../libft_files/libft.h"

Test(ft_toupper, lowercase_to_uppercase)
{
	cr_log_info("\n============= FT_TOUPPER: LOWERCASE TO UPPERCASE =============\n");

	char input[] = {'a', 'z'};
	for (int i = 0; i < 2; ++i) {
		int expected = toupper(input[i]);
		int actual = ft_toupper(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_toupper, non_alphabetic_characters)
{
	cr_log_info("\n============= FT_TOUPPER: NON-ALPHABETIC CHARACTERS =============\n");

	char input[] = {'1', '!', ' ', '\n', '9'};
	for (int i = 0; i < 5; ++i) {
		int expected = toupper(input[i]);
		int actual = ft_toupper(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_toupper, already_uppercase)
{
	cr_log_info("\n============= FT_TOUPPER: ALREADY UPPERCASE =============\n");

	char input[] = {'A', 'Z', 'M'};
	for (int i = 0; i < 3; ++i) {
		int expected = toupper(input[i]);
		int actual = ft_toupper(input[i]);
		cr_assert_eq(actual, expected, "❌ Input '%c' → Expected '%c', Got '%c'", input[i], expected, actual);
		cr_log_info("✅ Input '%c' → Output '%c'\n", input[i], actual);
	}
}

Test(ft_toupper, boundary_cases)
{
	cr_log_info("\n============= FT_TOUPPER: BOUNDARY CASES =============\n");

	int inputs[] = {0, 127, -1, 255};
	for (int i = 0; i < 4; ++i) {
		int expected = toupper(inputs[i]);
		int actual = ft_toupper(inputs[i]);
		cr_assert_eq(actual, expected, "❌ Input [%d] → Expected [%d], Got [%d]", inputs[i], expected, actual);
		cr_log_info("✅ Input [%d] → Output [%d]\n", inputs[i], actual);
	}
}
