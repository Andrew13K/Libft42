#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_putendl_fd, write_to_stdout)
{
    cr_redirect_stdout();
    ft_putendl_fd("Hello", 1);
    cr_assert_stdout_eq_str("Hello\n", "ft_putendl_fd did not write the correct string with newline to stdout");
}

Test(ft_putendl_fd, write_to_stderr)
{
    cr_redirect_stderr();
    ft_putendl_fd("Error", 2);
    cr_assert_stderr_eq_str("Error\n", "ft_putendl_fd did not write the correct string with newline to stderr");
}

Test(ft_putendl_fd, empty_string)
{
    cr_redirect_stdout();
    ft_putendl_fd("", 1);
    cr_assert_stdout_eq_str("\n", "ft_putendl_fd did not write just the newline for an empty string");
}

Test(ft_putendl_fd, multiple_characters)
{
    cr_redirect_stdout();
    ft_putendl_fd("Test string", 1);
    cr_assert_stdout_eq_str("Test string\n", "ft_putendl_fd did not write the correct string with newline to stdout");
}
