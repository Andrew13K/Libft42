#include "libft.h"
#include <aio.h>

void *ft_memmove(void *dest, const void *src, size_t n){
    char *temp = dest;
    const char *source = src;
    size_t i = 0;
    if (temp < source){
        while(i < n){
            temp[i] = source[i];
            i++;
        }
    }
    else if (temp > source){
        while (n>0){
            n--;
            temp[n] = source[n];
        }
    }
    
    return dest;
}