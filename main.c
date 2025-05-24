#include "libft_files/libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	//char *str = "Hello cat cook";
	int res;

	res = ft_memcmp(NULL, "hello", 0);
	printf("%d\n", res);

	return 0;
}
