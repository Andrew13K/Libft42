#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_split, basic_test)
{
    char **result = ft_split("Hello World", ' ');
    cr_assert_str_eq(result[0], "Hello", "❌ Failed: correct output for result[0] = \"Hello\"\n");
    cr_assert_str_eq(result[1], "World", "❌ Failed: correct output for result[1] = \"World\"\n");
    cr_assert_eq(result[2], NULL, "❌ Failed: correct output for result[2] = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_split, multiple_delimiters)
{
    char **result = ft_split("Hello  World  ", ' ');
    cr_assert_str_eq(result[0], "Hello", "❌ Failed: correct output for result[0] = \"Hello\"\n");
    cr_assert_str_eq(result[1], "World", "❌ Failed: correct output for result[1] = \"World\"\n");
    cr_assert_eq(result[2], NULL, "❌ Failed: correct output for result[2] = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_split, empty_string)
{
    char **result = ft_split("", ' ');
    cr_assert_eq(result[0], NULL, "❌ Failed: correct output for result[0] = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_split, string_with_multiple_delimiters)
{
    char **result = ft_split("   Hello   World   ", ' ');
    cr_assert_str_eq(result[0], "Hello", "❌ Failed: correct output for result[0] = \"Hello\"\n");
    cr_assert_str_eq(result[1], "World", "❌ Failed: correct output for result[1] = \"World\"\n");
    cr_assert_eq(result[2], NULL, "❌ Failed: correct output for result[2] = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_split, string_with_null)
{
    char **result = ft_split(NULL, ' ');
    cr_assert_null(result, "❌ Failed: correct output = \"NULL\"\n");
	cr_log_info("✅ Pass \n");
}
