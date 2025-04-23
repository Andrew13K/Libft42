#include "libft.h"
#include <string.h>

void *ft_memset(void *s, int c, size_t n){
    char *temp = s;
    while (0 < n){
        *temp = c;   
        temp++;
        n--;
    }
    return s;
}
