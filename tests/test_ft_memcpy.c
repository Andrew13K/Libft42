#include <criterion/criterion.h>
#include <string.h>
#include "../libft.h"

Test(ft_memcpy, identical_blocks)
{
    char dest[50];
    const char src[] = "Hello, World!";
    
    ft_memcpy(dest, src, strlen(src) + 1);
    cr_assert_str_eq(dest, src, "ft_memcpy did not copy the string correctly");
}

Test(ft_memcpy, partial_copy)
{
    char dest[50];
    const char src[] = "Hello, World!";
    
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    cr_assert_str_eq(dest, "Hello", "ft_memcpy did not copy the expected part of the string");
}

Test(ft_memcpy, copy_to_uninitialized)
{
    char dest[50];
    const char src[] = "Copy this string";
    
    ft_memcpy(dest, src, strlen(src) + 1);
    cr_assert_str_eq(dest, src, "ft_memcpy did not copy to an uninitialized block correctly");
}

Test(ft_memcpy, compare_with_standard)
{
    char dest1[50], dest2[50];
    const char src[] = "Compare with standard memcpy";
    
    ft_memcpy(dest1, src, strlen(src) + 1);
    memcpy(dest2, src, strlen(src) + 1);
    
    cr_assert_str_eq(dest1, dest2, "ft_memcpy did not match standard memcpy");
}
