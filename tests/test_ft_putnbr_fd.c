#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_putnbr_fd, positive_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(1234, 1);
    cr_assert_stdout_eq_str("1234", "❌ Failed: correct output = \"1234\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, negative_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(-5678, 1);
    cr_assert_stdout_eq_str("-5678", "❌ Failed: correct output = \"-5678\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, min_int)
{
    cr_redirect_stdout();
    ft_putnbr_fd(-2147483648, 1);
    cr_assert_stdout_eq_str("-2147483648", "❌ Failed: correct output = \"-2147483648\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, zero)
{
    cr_redirect_stdout();
    ft_putnbr_fd(0, 1);
    cr_assert_stdout_eq_str("0", "❌ Failed: correct output = \"0\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, large_positive_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(987654321, 1);
    cr_assert_stdout_eq_str("987654321", "❌ Failed: correct output = \"987654321\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, max_int)
{
    cr_redirect_stdout();
    ft_putnbr_fd(2147483647, 1);
    cr_assert_stdout_eq_str("2147483647", "❌ Failed: correct output = \"2147483647\" and stream 1\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, min_int_error)
{
    cr_redirect_stderr();
    ft_putnbr_fd(-2147483648, 2);
    cr_assert_stderr_eq_str("-2147483648", "❌ Failed: correct output = \"-2147483648\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, zero_error)
{
    cr_redirect_stderr();
    ft_putnbr_fd(0, 2);
    cr_assert_stderr_eq_str("0", "❌ Failed: correct output = \"0\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}

Test(ft_putnbr_fd, max_int_error)
{
    cr_redirect_stderr();
    ft_putnbr_fd(2147483647, 2);
    cr_assert_stderr_eq_str("2147483647", "❌ Failed: correct output = \"2147483647\" and stream 2\n");
	cr_log_info("✅ Pass \n");
}
