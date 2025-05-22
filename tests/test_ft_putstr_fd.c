#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../libft_files/libft.h"

Test(ft_putstr_fd, simple_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("Hello, World!", 1);
    cr_assert_stdout_eq_str("Hello, World!", "ft_putstr_fd did not write the correct string to stdout");
}

Test(ft_putstr_fd, empty_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("", 1);
    cr_assert_stdout_eq_str("", "ft_putstr_fd did not handle empty string correctly");
}

Test(ft_putstr_fd, null_string)
{
    cr_redirect_stdout();
    ft_putstr_fd(NULL, 1);
    cr_assert_stdout_eq_str("", "ft_putstr_fd did not handle NULL string correctly");
}

Test(ft_putstr_fd, long_string)
{
    cr_redirect_stdout();
    ft_putstr_fd("This is a longer test string.", 1);
    cr_assert_stdout_eq_str("This is a longer test string.", "ft_putstr_fd did not handle long string correctly");
}
