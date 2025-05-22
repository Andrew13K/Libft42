#include <criterion/criterion.h>
#include "../libft_files/libft.h"
#include <string.h>

Test(ft_strdup, simple_string)
{
    char *original = "Hello, World!";
    char *dup = ft_strdup(original);
    
    cr_assert_str_eq(dup, original, "ft_strdup did not copy the string correctly");
    free(dup);
}

Test(ft_strdup, empty_string)
{
    char *original = "";
    char *dup = ft_strdup(original);

    cr_assert_str_eq(dup, original, "ft_strdup did not handle the empty string correctly");
    free(dup);
}

Test(ft_strdup, long_string)
{
    char *original = "This is a very long string, used to test ft_strdup's behavior with large inputs.";
    char *dup = ft_strdup(original);
    
    cr_assert_str_eq(dup, original, "ft_strdup did not copy the string correctly for large input");
    free(dup);
}
