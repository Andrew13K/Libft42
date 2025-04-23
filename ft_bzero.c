#include "libft.h"
#include <strings.h>

void ft_bzero(void *s, size_t n){
    char *temp = s;
    while (n > 0){
        *temp = '\0';   
        temp++;
        n--;
    }
}