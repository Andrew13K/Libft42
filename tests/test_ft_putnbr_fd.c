#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft.h"

Test(ft_putnbr_fd, positive_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(1234, 1);
    cr_assert_stdout_eq_str("1234", "ft_putnbr_fd did not write the correct number to stdout");
}

Test(ft_putnbr_fd, negative_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(-5678, 1);
    cr_assert_stdout_eq_str("-5678", "ft_putnbr_fd did not write the correct negative number to stdout");
}

Test(ft_putnbr_fd, min_int)
{
    cr_redirect_stdout();
    ft_putnbr_fd(-2147483648, 1);
    cr_assert_stdout_eq_str("-2147483648", "ft_putnbr_fd did not handle the minimum integer correctly");
}

Test(ft_putnbr_fd, zero)
{
    cr_redirect_stdout();
    ft_putnbr_fd(0, 1);
    cr_assert_stdout_eq_str("0", "ft_putnbr_fd did not handle zero correctly");
}

Test(ft_putnbr_fd, large_positive_number)
{
    cr_redirect_stdout();
    ft_putnbr_fd(987654321, 1);
    cr_assert_stdout_eq_str("987654321", "ft_putnbr_fd did not handle large positive number correctly");
}
