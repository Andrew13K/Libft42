#include <criterion/criterion.h>
#include <string.h>
#include "../libft_files/libft.h"

Test(ft_memmove, identical_blocks)
{
    char dest[50];
    const char src[] = "Hello, World!";
    
    ft_memmove(dest, src, strlen(src) + 1);
    cr_assert_str_eq(dest, src, "ft_memmove did not copy the string correctly");
}

Test(ft_memmove, overlapping_blocks_reverse)
{
    char str[50] = "World, Hello!";
    
    ft_memmove(str, str + 7, 6);
    cr_assert_str_eq(str, "Hello! Hello!", "ft_memmove did not handle overlapping memory correctly (reverse)");
}

Test(ft_memmove, no_overlap)
{
    char dest[50];
    const char src[] = "No overlap here!";
    
    ft_memmove(dest, src, strlen(src) + 1);
    cr_assert_str_eq(dest, src, "ft_memmove did not copy the string correctly when there is no overlap");
}

Test(ft_memmove, compare_with_standard)
{
    char dest1[50], dest2[50];
    const char src[] = "Compare with standard memmove";
    
    ft_memmove(dest1, src, strlen(src) + 1);
    memmove(dest2, src, strlen(src) + 1);
    
    cr_assert_str_eq(dest1, dest2, "ft_memmove did not match standard memmove");
}
