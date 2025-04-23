#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n){
    char *temp = dest;
    const char* source = src;

    while (0 < n){
        *temp = *source;   
        temp++;
        source++;
        n--;
    }
    return dest;
}