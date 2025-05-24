#include "libft_files/libft.h"
#include <stdio.h>
#include <bsd/string.h>

char my_uppercase(unsigned int i, char c)
{
	(void)i; // index is not used
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}


int main()
{
	char *res;
	char *str = "1234";
	res = ft_strmapi(str, my_uppercase);
	printf("Result: %s\n", res);
	return 0;
}