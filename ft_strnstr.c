#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char *temp_big;
    char *temp_little;

    i = 0;
    j = 0;
    temp_big = (char *)big;
    temp_little = (char *)little;
    if (temp_little[0] == '\0')
        return (temp_big);
    while (big[i] != '\0')
    {
        while (temp_little[j] != '\0' 
                && temp_big[i+j] == temp_little[j] && i < len)
                j++;
        if (temp_little[j] == '\0')
            return (&temp_big[i]);
        i++;
    }
    return NULL;
}