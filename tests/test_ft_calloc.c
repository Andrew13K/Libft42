#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h> 

Test(ft_calloc, basic_allocation)
{
    size_t count = 5;
    size_t size = sizeof(int);
    
    int *ptr = ft_calloc(count, size);
    cr_assert_not_null(ptr, "ft_calloc should return non-NULL for valid allocation");

    for (size_t i = 0; i < count; i++)
    {
        cr_assert_eq(ptr[i], 0, "ft_calloc did not zero-initialize index %zu", i);
    }

    free(ptr);
}

Test(ft_calloc, zero_elements)
{
    void *ptr = ft_calloc(0, sizeof(int));
    cr_assert_not_null(ptr, "ft_calloc(0, size) should return non-NULL or NULL safely");
    free(ptr);
}

Test(ft_calloc, zero_size)
{
    void *ptr = ft_calloc(5, 0);
    cr_assert_not_null(ptr, "ft_calloc(n, 0) should return non-NULL or NULL safely");
    free(ptr);
}

Test(ft_calloc, compare_with_standard)
{
    size_t count = 10;
    size_t size = sizeof(char);

    char *std_ptr = calloc(count, size);
    char *ft_ptr = ft_calloc(count, size);

    cr_assert_not_null(std_ptr);
    cr_assert_not_null(ft_ptr);

    cr_assert_arr_eq(ft_ptr, std_ptr, count * size, "Memory contents should be identical to calloc");

    free(std_ptr);
    free(ft_ptr);
}

Test(ft_calloc, multiplication_overflow_protection)
{
    size_t large = SIZE_MAX / 2 + 1;
    void *ptr = ft_calloc(large, 2);

    cr_assert_null(ptr, "ft_calloc should return NULL on size multiplication overflow");
}
