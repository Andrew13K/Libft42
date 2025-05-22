#include "../libft_files/libft.h"
#include <criterion/criterion.h>
#include <signal.h>
#include <stdlib.h>

Test(ft_atoi, testing_ft_atoi, .signal = SIGSEGV)
{
	cr_log_info("\n============= FT_ATOI TESTS =============\n");
	int res = ft_atoi("0");
	cr_assert_eq(ft_atoi("0"), atoi("0"));
	cr_log_info("✅ Case 1: INPUT = \"0\" → res = \"%d\"\n", res);
	
	res = ft_atoi("123");
	cr_assert_eq(ft_atoi("123"), atoi("123"));
	cr_log_info("✅ Case 2: INPUT = \"123\" → res = \"%d\"\n", res);

	res = ft_atoi("42");
	cr_assert_eq(ft_atoi("42"), atoi("42"));
	cr_log_info("✅ Case 3: INPUT = \"42\" → res = \"%d\"\n", res);

	res = ft_atoi("-1");
	cr_assert_eq(ft_atoi("-1"), atoi("-1"));
	cr_log_info("✅ Case 4: INPUT = \"-1\" → res = \"%d\"\n", res);

	res = ft_atoi("-42");
	cr_assert_eq(ft_atoi("-42"), atoi("-42"));
	cr_log_info("✅ Case 5: INPUT = \"-42\" → res = \"%d\"\n", res);

	res = ft_atoi("-2147483648");
	cr_assert_eq(ft_atoi("-2147483648"), atoi("-2147483648"));
	cr_log_info("✅ Case 6: INPUT = \"-2147483648\" → res = \"%d\"\n", res);

	res = ft_atoi("   123");
	cr_assert_eq(ft_atoi("   123"), atoi("   123"));
	cr_log_info("✅ Case 7: INPUT = \"   123\" → res = \"%d\"\n", res);

	res = ft_atoi("\t\n\v\f\r 456");
	cr_assert_eq(ft_atoi("\t\n\v\f\r 456"), atoi("\t\n\v\f\r 456"));
	cr_log_info("✅ Case 8: INPUT = \"\\t\\n\\v\\f\\r 456\" → res = \"%d\"\n", res);

	res = ft_atoi("+7");
	cr_assert_eq(ft_atoi("+7"), atoi("+7"));
	cr_log_info("✅ Case 9: INPUT = \"+7\" → res = \"%d\"\n", res);

	res = ft_atoi("   +89");
	cr_assert_eq(ft_atoi("   +89"), atoi("   +89"));
	cr_log_info("✅ Case 10: INPUT = \"   +89\" → res = \"%d\"\n", res);

	res = ft_atoi("123abc");
	cr_assert_eq(ft_atoi("123abc"), atoi("123abc"));
	cr_log_info("✅ Case 11: INPUT = \"123abc\" → res = \"%d\"\n", res);

	res = ft_atoi("42!");
	cr_assert_eq(ft_atoi("42!"), atoi("42!"));
	cr_log_info("✅ Case 12: INPUT = \"42!\" → res = \"%d\"\n", res);

	res = ft_atoi("");
	cr_assert_eq(ft_atoi(""), atoi(""));
	cr_log_info("✅ Case 13: INPUT = \"\" → res = \"%d\"\n", res);

	res = ft_atoi("   ");
	cr_assert_eq(ft_atoi("   "), atoi("   "));
	cr_log_info("✅ Case 14: INPUT = \"   \" → res = \"%d\"\n", res);

	res = ft_atoi("abc");
	cr_assert_eq(ft_atoi("abc"), atoi("abc"));
	cr_log_info("✅ Case 15: INPUT = \"abc\" → res = \"%d\"\n", res);

	res = ft_atoi("+");
	cr_assert_eq(ft_atoi("+"), atoi("+"));
	cr_log_info("✅ Case 16: INPUT = \"+\" → res = \"%d\"\n", res);

	res = ft_atoi("-");
	cr_assert_eq(ft_atoi("-"), atoi("-"));
	cr_log_info("✅ Case 16: INPUT = \"-\" → res = \"%d\"\n", res);

	res = ft_atoi("2147483647");
	cr_assert_eq(ft_atoi("2147483647"), atoi("2147483647"));
	cr_log_info("✅ Case 17: INPUT = \"2147483647\" → res = \"%d\"\n", res);

	ft_atoi(NULL);
	cr_log_info("❌ Test 18: Failed\n");
}