#include "libft.h"
#include <stdio.h>
/*
void test_ft_isalnum(){
    printf("1 - True, 0 - False\n");
    printf("\n=========================\n");
    printf("\nTest 1: Digits\n\n");
    for (char c = '0'; c <= '9'; c++)
        printf("Is '%c' alphanumeric? %d\n", c, ft_isalnum(c));

    printf("\nTest 2: Lowecase Letters\n\n");
    for (char c = 'a'; c <= 'z'; c++)
        printf("Is '%c' alphanumeric? %d\n", c, ft_isalnum(c));

    printf("\nTest 3: Uppercase Letters\n\n");
    for (char c = 'A'; c <= 'Z'; c++)
        printf("Is '%c' alphanumeric? %d\n", c, ft_isalnum(c));
    
    printf("\nTest 4: Non Alphanumeric characters\n\n");
    char non_alnum[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', ' ', '\t', '\n'};
    for (size_t i = 0; i < sizeof(non_alnum) / sizeof(non_alnum[0]); i++)
        printf("Is '%c' alphanumeric? %d\n", non_alnum[i], ft_isalnum(non_alnum[i]));
    
    printf("\nTest 5: Boundary cases\n");
    printf("Is 'a' alphanumeric? %d\n", ft_isalnum('a')); 
    printf("Is 'z' alphanumeric? %d\n", ft_isalnum('z'));  
    printf("Is 'A' alphanumeric? %d\n", ft_isalnum('A'));  
    printf("Is 'Z' alphanumeric? %d\n", ft_isalnum('Z'));  
    printf("Is '0' alphanumeric? %d\n", ft_isalnum('0'));  
    printf("Is '9' alphanumeric? %d\n", ft_isalnum('9'));  
    printf("Is '@' alphanumeric? %d\n", ft_isalnum('@')); 
    printf("Is ' ' alphanumeric? %d\n", ft_isalnum(' '));
}

void test_ft_isascii(){
    printf("1 - True, 0 - False\n");
    printf("\n=========================\n");
    printf("\nTest 1: Unsigned Char (0 - 127)\n\n");
    for (unsigned char c = 0; c <= 127; c++)
        printf("Is '%c' ascii character? %d\n", c, ft_isascii(c));

    printf("\nTest 2: Extended Unsigned Char (128 - 255)\n\n");
    for (unsigned int c = 128; c <= 255; c++)
        printf("Is '%d' ascii character? %d\n", c, ft_isascii(c));

    printf("\nTest 3: Negative Char ((-128) - (-1))\n\n");
    for (signed char c = -128; c <= -1; c++)
        printf("Is '%c' ascii character? %d\n", c, ft_isascii(c));
    
    printf("\nTest 3: Boundary cases\n");
    printf("Is 'NUL' ascii charactre? %d\n", ft_isascii(0)); 
    printf("Is 'DEL' ascii charactre? %d\n", ft_isascii(127));
    printf("Is '€' ascii charactre? %d\n", ft_isascii(128));
    printf("Is 'ÿ' ascii charactre? %d\n", ft_isascii(255));
    printf("Is -128 ascii charactre? %d\n", ft_isascii(-128));
    printf("Is -1 ascii charactre? %d\n", ft_isascii(-1));
}

void test_ft_isprint(){
    printf("1 - True, 0 - False\n");
    printf("\n=========================\n");
    printf("\nTest 1: Printable Char (32 - 126)\n\n");
    for (unsigned char c = 32; c < 127; c++)
        printf("Is '%c' printable character? %d\n", c, ft_isprint(c));

    printf("\nTest 2: Unprintable Char (0 - 31)\n\n");
    for (unsigned char c = 0; c < 32; c++)
        printf("Is '%c' printable character? %d\n", c, ft_isprint(c));

    printf("\nTest 3: Extended Char (128 - 255)\n\n");
    for (unsigned int c = 128; c <= 255; c++)
        printf("Is '%d' printable character? %d\n", c, ft_isprint(c));
    
    printf("\nTest 4: Boundary cases\n");
    printf("Is 'NUL' printable charactre? %d\n", ft_isprint(0)); 
    printf("Is 'DEL' printable charactre? %d\n", ft_isprint(127));
    printf("Is ' ' printable charactre? %d\n", ft_isprint(32)); 
    printf("Is '~' printable charactre? %d\n", ft_isprint(126));
    printf("Is '€' printable charactre? %d\n", ft_isprint(128));
    printf("Is 'ÿ' printable charactre? %d\n", ft_isprint(255));
    printf("Is -128 printable charactre? %d\n", ft_isprint(-128));
    printf("Is -1 printable charactre? %d\n", ft_isprint(-1));
}

void test_ft_strlen()
{
    printf("ft_strlen()\n");
    printf("\n=========================\n");

    printf("\nTest: Boundary cases\n");
    char *s = ""; 
    printf("1. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "Hello"; 
    printf("2. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "!?"; 
    printf("3. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "Hello how are you"; 
    printf("4. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "Hello \tWorld\n"; 
    printf("5. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "\n"; 
    printf("6. The length of '%s': %zu\n",s, ft_strlen(s));
    s = "\\"; 
    printf("7. The length of '%s': %zu\n",s, ft_strlen(s));
}*/

int main(){
    //test_ft_isalnum();
    //test_ft_isascii();
    //test_ft_isprint();
    //test_ft_strlen();

    //CHECK EACH FUNCTION AFTER strlen()

    /*char str[20] = "Hello";
    printf("Before memset: %s\n", str);
    memset(str+3, '.', 2*sizeof(char));
    printf("After memset: %s\n", str);*/

    /*char str[20] = "Hello";
    printf("Before memset: %s\n", str);
    ft_bzero(str+3, sizeof(str));
    printf("After memset: %s\n", str);*/

    /*char str[] = "Hello";
    char dest[30];
    printf("Before memcpy: %s\n", dest);
    ft_memcpy(dest, str, 3);
    printf("After memcpy: %s\n", dest);*/

    char str[30] = "Hello";
    printf("Before memmove: %s\n", str);
    ft_memmove(str+2, str, 1);
    printf("After memmove: %s\n", str);
    return 0;
}