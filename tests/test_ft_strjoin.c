#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <signal.h>
#include "../libft_files/libft.h"

Test(ft_strjoin, both_strings_non_null)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    
    char *result = ft_strjoin(s1, s2);
    cr_assert_str_eq(result, "Hello, world!", "❌ Failed: correct output = \"Hello, world!\"\n");
	cr_log_info("✅ Pass: S1 = \"%s\", S2 = \"%s\" → RES = %s\n", s1, s2, result);
    free(result);
}

Test(ft_strjoin, s1_null)
{
    char *s2 = "world!";
    
    char *result = ft_strjoin(NULL, s2);
    cr_assert_str_eq(result, "world!", "❌ Failed: correct output = \"world!\"\n");
	cr_log_info("✅ Pass: S1 = \"NULL\", S2 = \"%s\" → RES = %s\n", s2, result);
    free(result);
}

Test(ft_strjoin, s2_null)
{
    char *s1 = "Hello, ";
    
    char *result = ft_strjoin(s1, NULL);
    cr_assert_str_eq(result, "Hello, ", "❌ Failed: correct output = \"Hello, \"\n");
	cr_log_info("✅ Pass: S1 = \"%s\", S2 = \"NULL\" → RES = %s\n", s1, result);
    free(result);
}

Test(ft_strjoin, both_strings_null)
{
    char *result = ft_strjoin(NULL, NULL);
    cr_assert_null(result, "❌ Failed: correct output = \"NULL\"\n");
	cr_log_info("✅ Pass: S1 = \"NULL\", S2 = \"NULL\" → RES = %s\n", result);
}

Test(ft_strjoin, empty_strings)
{
    char *result = ft_strjoin("", "");
    cr_assert_str_eq(result, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass: S1 = \"\", S2 = \"\" → RES = %s\n", result);
    free(result);
}

Test(ft_strjoin, empty_s1)
{
    char *s2 = "world!";
    
    char *result = ft_strjoin("", s2);
    cr_assert_str_eq(result, "world!", "❌ Failed: correct output = \"world!\"\n");
	cr_log_info("✅ Pass: S1 = \"\", S2 = \"%s\" → RES = %s\n", s2, result);
    free(result);
}

Test(ft_strjoin, empty_s2)
{
    char *s1 = "Hello, ";
    
    char *result = ft_strjoin(s1, "");
    cr_assert_str_eq(result, "Hello, ", "❌ Failed: correct output = \"Hello, \"\n");
	cr_log_info("✅ Pass: S1 = \"%s\", S2 = \"\" → RES = %s\n", s1, result);
    free(result);
}
