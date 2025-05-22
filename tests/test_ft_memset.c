#include <criterion/criterion.h>
#include <string.h>
#include "../libft_files/libft.h"

Test(ft_memset, basic_usage)
{
    char str[50] = "Hello, World!";
    
    ft_memset(str, 'X', 5);
    cr_assert_str_eq(str, "XXXXX, World!", "ft_memset did not set the correct bytes");
}

Test(ft_memset, set_entire_string)
{
    char str[50] = "Hello, World!";
    
    ft_memset(str, 'A', strlen(str));
    cr_assert_str_eq(str, "AAAAAAAAAAAAA", "ft_memset did not set the entire string correctly");
}

Test(ft_memset, compare_with_standard)
{
    char dest1[50] = "Hello, World";
    
    ft_memset(dest1, 'X', 5);
    memset(dest1, 'X', 5);
    
    cr_assert_str_eq(dest1, "XXXXX, World", "ft_memset did not match standard memset");
}

Test(ft_memset, fill_with_zero)
{
    char str[50] = "Hello, World!";
    
    ft_memset(str, 0, 5);
    cr_assert_str_eq(str, "\0\0\0\0\0 World!", "ft_memset did not set to zero correctly");
}

Test(ft_memset, large_block)
{
    char str[1000];
    
    ft_memset(str, 'A', sizeof(str));
    
    for (size_t i = 0; i < sizeof(str); i++)
    {
        cr_assert_eq(str[i], 'A', "ft_memset did not fill the block correctly");
    }
}
