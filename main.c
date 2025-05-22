#include "libft_files/libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char str[10] = "Hello";
	int nums[] = {1, 2, 3, 4};
	size_t i = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c, ", str[i]);
	}
	bzero(str, i);
	printf("\n");
	for (int i = 0; i < 11; i++) {
    printf("str[%d] = %d ('%c')\n", i, str[i], str[i]);
}
	
	return 0;
}