#include "libft.h"
#include <string.h>

size_t ft_strlen(const char *s){
    int i = 0;
    if (s[0] == '\0')
        return 0;
    while(s[i] != '\0')
        i++;
    return i;
}