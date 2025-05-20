#include <criterion/criterion.h>
#include <string.h>
#include "../libft.h"

Test(ft_strlen, empty_string) {
    cr_assert_eq(ft_strlen(""), strlen(""), "ft_strlen(\"\") should return 0");
}

Test(ft_strlen, regular_string) {
    cr_assert_eq(ft_strlen("Hello"), strlen("Hello"), "ft_strlen(\"Hello\") should return 5");
}

Test(ft_strlen, string_with_spaces) {
    cr_assert_eq(ft_strlen("Hello World"), strlen("Hello World"), "ft_strlen(\"Hello World\") should return 11");
}

Test(ft_strlen, long_string) {
    const char *long_str = "This is a very long string for testing purposes.";
    cr_assert_eq(ft_strlen(long_str), strlen(long_str), "ft_strlen(long_str) should match standard strlen");
}
