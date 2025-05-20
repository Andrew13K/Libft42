#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include "../libft.h"

Test(ft_putchar_fd, write_to_stdout)
{
    cr_redirect_stdout();
    ft_putchar_fd('A', 1);
    cr_assert_stdout_eq_str("A", "ft_putchar_fd did not write the correct character to stdout");
}

Test(ft_putchar_fd, write_to_stderr)
{
    cr_redirect_stderr();
    ft_putchar_fd('B', 2);
    cr_assert_stderr_eq_str("B", "ft_putchar_fd did not write the correct character to stderr");
}

Test(ft_putchar_fd, multiple_characters)
{
    cr_redirect_stdout();
    ft_putchar_fd('C', 1);
    ft_putchar_fd('D', 1);
    ft_putchar_fd('E', 1);
    cr_assert_stdout_eq_str("CDE", "ft_putchar_fd did not write multiple characters correctly to stdout");
}
