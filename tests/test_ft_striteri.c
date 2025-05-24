#include <criterion/criterion.h>
#include "../libft_files/libft.h"

void to_uppercase(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

Test(ft_striteri, basic_case)
{
    char str[] = "hello";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "HELLO", "❌ Failed: correct output = \"HELLO\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_striteri, empty_string)
{
    char str[] = "";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "", "❌ Failed: correct output = \"\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_striteri, single_char)
{
    char str[] = "a";

    ft_striteri(str, to_uppercase);
    cr_assert_str_eq(str, "A", "❌ Failed: correct output = \"A\"\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_striteri, null_string)
{
	ft_striteri(NULL, to_uppercase);
    cr_assert(1);
	cr_log_info("✅ Pass \n");
}
