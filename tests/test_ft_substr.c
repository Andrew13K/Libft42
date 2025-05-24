#include <criterion/criterion.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_substr, normal_substring_extraction)
{
	const char *str = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "World", "❌ Failed: correct output = \"World\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, substring_from_start)
{
    const char *str = "Hello, World!";
	unsigned int start = 0;
	size_t len = 5;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "Hello", "❌ Failed: correct output = \"Hello\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, substring_to_end)
{
    const char *str = "Hello, World!";
	unsigned int start = 7;
	size_t len = 7;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "World!", "❌ Failed: correct output = \"World!\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, out_of_bound_start)
{
    const char *str = "Hello, World!";
	unsigned int start = 20;
	size_t len = 5;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, zero_length_substring)
{
    const char *str = "Hello, World!";
	unsigned int start = 0;
	size_t len = 0;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, empty_string_input)
{
    const char *str = "";
	unsigned int start = 0;
	size_t len = 5;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, length_exceeds_string_length)
{
    const char *str = "Hello, World!";
	unsigned int start = 7;
	size_t len = 50;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "World!", "❌ Failed: correct output = \"World!\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, length_without_null)
{
    const char *str = "Hello, World!";
	unsigned int start = 7;
	size_t len = 6;
    char *result = ft_substr(str, start, len);
    cr_assert_str_eq(result, "World!", "❌ Failed: correct output = \"World!\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", str, start, len, result);
    free(result);
}

Test(ft_substr, pass_parameter_null, .signal = SIGSEGV)
{
	unsigned int start = 7;
	size_t len = 6;
    char *result = ft_substr(NULL, start, len);
	cr_log_info("❌ Failed: STR = \"NULL\", START = \"%d\", SIZE = \"%zu\" → RES = %s\n", start, len, result);
    free(result);
}