#include <criterion/criterion.h>
#include "../libft_files/libft.h"

Test(ft_strtrim, trims_both_sides)
{
	char *str = "  \tHello World!\t  ";
	char *set = " \t";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "Hello World!", "❌ Failed: correct output = \"Hello World!\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_no_change_needed)
{
	char *str = "Hello";
	char *set = " \t";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "Hello", "❌ Failed: correct output = \"Hello\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_empty_string)
{
	char *str = "";
	char *set = " \t";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_empty_set)
{
	char *str = "Hello World!";
	char *set = "";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "Hello World!", "❌ Failed: correct output = \"Hello World!\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_all_chars)
{	
	char *str = "    ";
	char *set = " ";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_all_chars_with_tabs)
{
    char *str = "\t\t\t";
	char *set = "\t";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, trims_single_char_match)
{
	char *str = "abcxyzabc";
	char *set = "abc";
    char *result = ft_strtrim(str, set);
    cr_assert_str_eq(result, "xyz", "❌ Failed: correct output = \"xyz\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"%s\" → RES = %s\n", str, set, result);
    free(result);
}

Test(ft_strtrim, null_str)
{
	char *set = ".,";
	char *result = ft_strtrim(NULL, set);
	cr_assert_null(result, "❌ Failed: correct output = \"NULL\"\n");
	cr_log_info("✅ Pass: STR = \"NULL\", SET = \"%s\" → RES = %s\n", set, result);
    free(result);
}

Test(ft_strtrim, null_set)
{
	char *str = "Hello";
	char *result = ft_strtrim(str, NULL);
	cr_assert_str_eq(result, "Hello", "❌ Failed: correct output = \"Hello\"\n");
	cr_log_info("✅ Pass: STR = \"%s\", SET = \"NULL\" → RES = %s\n", str, result);
    free(result);
}