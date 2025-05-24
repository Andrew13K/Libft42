#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include "../libft_files/libft.h"

Test(ft_putchar_fd, write_to_stdout)
{
    cr_redirect_stdout();
    ft_putchar_fd('A', 1);
    cr_assert_stdout_eq_str("A", "❌ Failed: correct output = \"A\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putchar_fd, write_to_stderr)
{
    cr_redirect_stderr();
    ft_putchar_fd('B', 2);
    cr_assert_stderr_eq_str("B", "❌ Failed: correct output = \"B\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putchar_fd, multiple_characters)
{
    cr_redirect_stdout();
    ft_putchar_fd('C', 1);
    ft_putchar_fd('D', 1);
    ft_putchar_fd('E', 1);
    cr_assert_stdout_eq_str("CDE", "❌ Failed: correct output = \"CDE\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}
