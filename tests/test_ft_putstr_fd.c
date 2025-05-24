#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_putstr_fd, simple_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("Hello, World!", 1);
    cr_assert_stdout_eq_str("Hello, World!", "❌ Failed: correct output = \"Hello, World!\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, empty_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("", 1);
    cr_assert_stdout_eq_str("", "❌ Failed: correct output = \"\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, null_string)
{
    cr_redirect_stdout();
    ft_putstr_fd(NULL, 1);
    cr_assert_stdout_eq_str("", "❌ Failed: correct output = \"\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, long_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("This is a longer test string.", 1);
    cr_assert_stdout_eq_str("This is a longer test string.", "❌ Failed: correct output = \"This is a longer test string.\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, simple_string_error)
{
    cr_redirect_stderr();
    ft_putstr_fd("Hello, World!", 2);
    cr_assert_stderr_eq_str("Hello, World!", "❌ Failed: correct output = \"Hello, World!\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, empty_string_error)
{
    cr_redirect_stderr();
    ft_putstr_fd("", 2);
    cr_assert_stderr_eq_str("", "❌ Failed: correct output = \"\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, null_string_error)
{
    cr_redirect_stderr();
    ft_putstr_fd(NULL, 2);
    cr_assert_stderr_eq_str("", "❌ Failed: correct output = \"\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putstr_fd, long_string_error)
{
    cr_redirect_stderr();
    ft_putstr_fd("This is a longer test string.", 2);
    cr_assert_stderr_eq_str("This is a longer test string.", "❌ Failed: correct output = \"This is a longer test string.\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}
