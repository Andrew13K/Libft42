#include <criterion/criterion.h>
#include <string.h>  // For reference implementation
#include "../libft.h"

Test(ft_strlcat, basic_concat) {
    char dst1[20] = "Hello, ";
    char dst2[20] = "Hello, ";
    const char *src = "world!";

    size_t ret1 = ft_strlcat(dst1, src, sizeof(dst1));
    size_t ret2 = strlcat(dst2, src, sizeof(dst2));

    cr_assert_str_eq(dst1, dst2, "Resulting strings do not match.");
    cr_assert_eq(ret1, ret2, "Returned lengths do not match.");
}

Test(ft_strlcat, no_space_for_concat) {
    char dst1[10] = "Hello";
    char dst2[10] = "Hello";
    const char *src = " world";

    size_t ret1 = ft_strlcat(dst1, src, 5); // less than dst1 length
    size_t ret2 = strlcat(dst2, src, 5);

    cr_assert_str_eq(dst1, dst2, "Strings should remain unchanged.");
    cr_assert_eq(ret1, ret2, "Return values must match even if no space.");
}

Test(ft_strlcat, empty_src) {
    char dst1[20] = "Hello";
    char dst2[20] = "Hello";
    const char *src = "";

    size_t ret1 = ft_strlcat(dst1, src, sizeof(dst1));
    size_t ret2 = strlcat(dst2, src, sizeof(dst2));

    cr_assert_str_eq(dst1, dst2);
    cr_assert_eq(ret1, ret2);
}

Test(ft_strlcat, empty_dest) {
    char dst1[20] = "";
    char dst2[20] = "";
    const char *src = "Hello";

    size_t ret1 = ft_strlcat(dst1, src, sizeof(dst1));
    size_t ret2 = strlcat(dst2, src, sizeof(dst2));

    cr_assert_str_eq(dst1, dst2);
    cr_assert_eq(ret1, ret2);
}

Test(ft_strlcat, zero_size_buffer) {
    char dst1[20] = "Hello";
    char dst2[20] = "Hello";
    const char *src = "World";

    size_t ret1 = ft_strlcat(dst1, src, 0);
    size_t ret2 = strlcat(dst2, src, 0);

    cr_assert_eq(ret1, ret2);
}
