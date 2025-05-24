#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <stdlib.h>

char to_upper(unsigned int i, char c) {
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

Test(ft_strmapi, basic_uppercase_conversion) {
    char *result = ft_strmapi("hello", to_upper);
    cr_assert_str_eq(result, "HELLO", "❌ Failed: correct output = \"HELLO\"\n");
	cr_log_info("✅ Pass \n");
    free(result);

	result = ft_strmapi("abcd", to_upper);
    cr_assert_str_eq(result, "ABCD", "❌ Failed: correct output = \"ABCD\"\n");
	cr_log_info("✅ Pass \n");
    free(result);
}

Test(ft_strmapi, empty_string) {
    char *result = ft_strmapi("", to_upper);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass \n");
    free(result);
}

Test(ft_strmapi, null_input) {
    char *result = ft_strmapi(NULL, to_upper);
    cr_assert_null(result, "❌ Failed: correct output = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}
