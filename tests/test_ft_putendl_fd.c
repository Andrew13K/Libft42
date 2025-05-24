#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_putendl_fd, write_to_stdout)
{
    cr_redirect_stdout();
    ft_putendl_fd("Hello", 1);
    cr_assert_stdout_eq_str("Hello\n", "❌ Failed: correct output = \"Hello\" new line and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putendl_fd, write_to_stderr)
{
    cr_redirect_stderr();
    ft_putendl_fd("Error", 2);
    cr_assert_stderr_eq_str("Error\n", "❌ Failed: correct output = \"Error\" new line and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putendl_fd, empty_string)
{
    cr_redirect_stdout();
    ft_putendl_fd("", 1);
    cr_assert_stdout_eq_str("\n", "❌ Failed: correct output = \"\" new line and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putendl_fd, multiple_characters)
{
    cr_redirect_stdout();
    ft_putendl_fd("Test string", 1);
    cr_assert_stdout_eq_str("Test string\n", "❌ Failed: correct output = \"Test string\" new line and stream 1\n");
	cr_log_info("✅ Pass \n");
}
