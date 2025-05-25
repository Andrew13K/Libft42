#include "libft_files/libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *big = "hello";
	char *res = ft_strrchr(NULL, 'k');
	printf("Result: %s\n", res);


	return 0;
}

//TEST
//ft_calloc
