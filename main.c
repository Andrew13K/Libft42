#include "libft_files/libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	const char *s = "Hello, World!";
	char *actual = ft_strrchr(s, 'o');
	printf("Result: %s\n", actual);


	return 0;
}

//TEST
//ft_calloc
