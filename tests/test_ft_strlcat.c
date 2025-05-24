#include "../libft_files/libft.h"
#include <bsd/string.h>
#include <string.h>
#include <criterion/criterion.h>

Test(ft_strlcat, test_strlcat)
{
	char dest[] = "hello";
	char src[] = "World";
	size_t res = ft_strlcat(dest, src, 9);
	cr_log_info("\n============= STRLCAT TESTS =============\n");
	cr_assert_eq(res, 10, "Expected result: 10");
	cr_log_info("✅ Case 1: DEST = 'hello', SRC = 'World', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
	strcpy(src, "World");
	res = strlcat(dest, src, 3);
	cr_assert_eq(res, 8, "Expected result: 8");
	cr_log_info("✅ Case 2: DEST = 'hello', SRC = 'World', size = 3 → res = %zu\n", res);

	strcpy(dest, "");
	strcpy(src, "World");
	res = strlcat(dest, src, 9);
	cr_assert_eq(res, 5, "Expected result: 5");
	cr_log_info("✅ Case 3: DEST = '', SRC = 'World', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
	strcpy(src, "");
	res = strlcat(dest, src, 9);
	cr_assert_eq(res, 5, "Expected result: 5");
	cr_log_info("✅ Case 4: DEST = 'hello', SRC = '', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
    strcpy(src, "World");
    res = strlcat(dest, src, 0);
    cr_assert_eq(res, 5, "Expected result: 5");
    cr_log_info("✅ Case 5: DEST = 'hello', SRC = 'World', size = 0 → res = %zu\n", res);

    strcpy(dest, "");
    strcpy(src, "World");
    res = strlcat(dest, src, 0);
    cr_assert_eq(res, 5, "Expected result: 5");
    cr_log_info("✅ Case 6: dest = '', src = 'World', size = 0 → res = %zu\n", res);

    strcpy(dest, "hello");
    strcpy(src, "");
    res = strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 7: dest = 'hello', src = '', size = 0 → res = %zu\n", res);

	strcpy(dest, "");
    strcpy(src, "");
    res = strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 8: dest = '', src = '', size = 0 → res = %zu\n", res);

	strcpy(dest, "");
    strcpy(src, "");
    res = strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 9: dest = '', src = '', size = 1 → res = %zu\n", res);
}

Test(ft_strlcat, test_ft_strlcat)
{
	char dest[] = "hello";
	char src[] = "World";
	size_t res = ft_strlcat(dest, src, 9);
	cr_log_info("\n============= FT_STRLCAT TESTS =============\n");
	cr_assert_eq(res, 10, "Expected result: 10");
	cr_log_info("✅ Case 1: DEST = 'hello', SRC = 'World', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
	strcpy(src, "World");
	res = ft_strlcat(dest, src, 3);
	cr_assert_eq(res, 8, "Expected result: 8");
	cr_log_info("✅ Case 2: DEST = 'hello', SRC = 'World', size = 3 → res = %zu\n", res);

	strcpy(dest, "");
	strcpy(src, "World");
	res = ft_strlcat(dest, src, 9);
	cr_assert_eq(res, 5, "Expected result: 5");
	cr_log_info("✅ Case 3: DEST = '', SRC = 'World', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
	strcpy(src, "");
	res = ft_strlcat(dest, src, 9);
	cr_assert_eq(res, 5, "Expected result: 5");
	cr_log_info("✅ Case 4: DEST = 'hello', SRC = '', size = 9 → res = %zu\n", res);

	strcpy(dest, "hello");
    strcpy(src, "World");
    res = ft_strlcat(dest, src, 0);
    cr_assert_eq(res, 5, "Expected result: 5");
    cr_log_info("✅ Case 5: DEST = 'hello', SRC = 'World', size = 0 → res = %zu\n", res);

    strcpy(dest, "");
    strcpy(src, "World");
    res = ft_strlcat(dest, src, 0);
    cr_assert_eq(res, 5, "Expected result: 5");
    cr_log_info("✅ Case 6: dest = '', src = 'World', size = 0 → res = %zu\n", res);

    strcpy(dest, "hello");
    strcpy(src, "");
    res = ft_strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 7: dest = 'hello', src = '', size = 0 → res = %zu\n", res);

	strcpy(dest, "");
    strcpy(src, "");
    res = ft_strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 8: dest = '', src = '', size = 0 → res = %zu\n", res);

	strcpy(dest, "");
    strcpy(src, "");
    res = ft_strlcat(dest, src, 0);
    cr_assert_eq(res, 0, "Expected result: 0");
    cr_log_info("✅ Case 9: dest = '', src = '', size = 1 → res = %zu\n", res);
}
