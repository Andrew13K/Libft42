/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/29 15:18:07 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
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

    /*char str[30] = "Hello";
    printf("Before memmove: %s\n", str);
    ft_memmove(str+2, str, 1);
    printf("After memmove: %s\n", str);*/

    /*char str[7];
    printf("Before strlcpy: %s\n", str);
    printf("Size: %ld\n", ft_strlcpy(str, "Hello", sizeof(str)));
    printf("After strlcpy: %s\n", str);*/

    /*const char *s = "";
    int num = ft_atoi(s);
    printf("%d\n", num);
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("         123"));
    printf("%d\n", ft_atoi("        ---3=123"));
    printf("%d\n", ft_atoi("assad123"));
    printf("%d\n", ft_atoi("          asdasd123"));
    printf("%d\n", ft_atoi("0123"));
    printf("%d\n", ft_atoi(" ++ --- 123"));
    printf("%d\n", ft_atoi("1  sd23"));
    printf("%d\n", ft_atoi("    +123"));
    printf("%d\n", ft_atoi("        -123"));*/

    /*char buffer[20] = "Hello";

    size_t len1 = ft_strlcat(buffer, " there", sizeof(buffer));
    printf("1. Result: '%s', Returned: %zu\n", buffer, len1);

    size_t len2 = ft_strlcat(buffer, " World!", 10);
    printf("2. Result: '%s', Returned: %zu\n", buffer, len2);
  
    size_t len3 = ft_strlcat(buffer, "!", 5);
    printf("3. Result: '%s', Returned: %zu\n", buffer, len3);*/
    
    /*printf("%c\n",ft_toupper('a'));
    printf("%c\n",ft_toupper('z'));
    printf("%c\n",ft_toupper('A'));
    printf("%c\n",ft_toupper('C'));
    printf("%c\n",ft_toupper(65));
    printf("%c\n",ft_toupper('1'));*/

    /*printf("%s\n", ft_strrchr("Hello", 'l'));
    printf("%s\n", ft_strrchr("Hello", '\0'));

    printf("%s\n", strrchr("Hello", 'l'));
    printf("%s\n", strrchr("Hello", '\0'));*/

    // Test Case 1: Equal Strings
    //printf("%d\n", ft_strncmp("Hel\0lo", "Helpp", 5));

    
   
    /*// Test Case 1: Identical Memory Blocks
    char block1[] = "hello";
    char block2[] = "hello";
    printf("Test 1: %d\n", ft_memcmp(block1, block2, 5)); // Expected: 0

    // Test Case 2: Blocks are Identical But One Character Larger
    char block3[] = "hello";
    char block4[] = "helloo";
    printf("Test 2: %d\n", ft_memcmp(block3, block4, 6)); // Expected: 0

    // Test Case 3: First Block is Lexicographically Smaller
    char block5[] = "abc";
    char block6[] = "abcd";
    printf("Test 3: %d\n", ft_memcmp(block5, block6, 4)); // Expected: 0

    // Test Case 4: First Block is Lexicographically Greater
    char block7[] = "zebra";
    char block8[] = "apple";
    printf("Test 4: %d\n", ft_memcmp(block7, block8, 5)); // Expected: Positive value

    // Test Case 5: Different Data, First Block Smaller
    char block9[] = {1, 2, 3};
    char block10[] = {1, 2, 4};
    printf("Test 5: %d\n", ft_memcmp(block9, block10, 3)); // Expected: Negative value

    // Test Case 6: Different Data, First Block Larger
    char block11[] = {10, 20, 30};
    char block12[] = {5, 20, 30};
    printf("Test 6: %d\n", ft_memcmp(block11, block12, 3)); // Expected: Positive value

    // Test Case 7: Partial Block Comparison
    char block13[] = "apple";
    char block14[] = "apricot";
    printf("Test 7: %d\n", ft_memcmp(block13, block14, 3)); // Expected: 0

    // Test Case 8: Null Termination Difference
    char block15[] = "abc";
    char block16[] = "abc\0\0";
    printf("Test 8: %d\n", ft_memcmp(block15, block16, 5)); // Expected: 0

    // Test Case 9: Compare Large Arrays
    int block17[5] = {10, 20, 30, 40, 50};
    int block18[5] = {10, 20, 31, 40, 50};
    printf("Test 9: %d\n", ft_memcmp(block17, block18, sizeof(block17))); // Expected: Negative value

   // Test Case 1: Identical Memory Blocks
   char block1111[] = "hello";
   char block21[] = "hello";
   printf("\n\nTest 1: %d\n", memcmp(block1111, block21, 5)); // Expected: 0

   // Test Case 2: Blocks are Identical But One Character Larger
   char block31[] = "hello";
   char block41[] = "helloo";
   printf("Test 2: %d\n", memcmp(block31, block41, 6)); // Expected: 0

   // Test Case 3: First Block is Lexicographically Smaller
   char block51[] = "abc";
   char block61[] = "abcd";
   printf("Test 3: %d\n", memcmp(block51, block61, 4)); // Expected: 0

   // Test Case 4: First Block is Lexicographically Greater
   char block71[] = "zebra";
   char block81[] = "apple";
   printf("Test 4: %d\n", memcmp(block71, block81, 5)); // Expected: Positive value

   // Test Case 5: Different Data, First Block Smaller
   char block91[] = {1, 2, 3};
   char block101[] = {1, 2, 4};
   printf("Test 5: %d\n", memcmp(block91, block101, 3)); // Expected: Negative value

   // Test Case 6: Different Data, First Block Larger
   char block111[] = {10, 20, 30};
   char block121[] = {5, 20, 30};
   printf("Test 6: %d\n", memcmp(block111, block121, 3)); // Expected: Positive value

   // Test Case 7: Partial Block Comparison
   char block131[] = "apple";
   char block141[] = "apricot";
   printf("Test 7: %d\n", memcmp(block131, block141, 3)); // Expected: 0

   // Test Case 8: Null Termination Difference
   char block151[] = "abc";
   char block161[] = "abc\0\0";
   printf("Test 8: %d\n", memcmp(block151, block161, 5)); // Expected: 0

   // Test Case 9: Compare Large Arrays
   int block171[5] = {10, 20, 30, 40, 50};
   int block181[5] = {10, 20, 31, 40, 50};
   printf("Test 9: %d\n", memcmp(block171, block181, sizeof(block17))); // Expected: Negative value*/
   
   /*char *s = "Hello";
   unsigned char c = 'l';
   char *res = (char *)memchr(s, c, 3);
   printf("Test 1: %c found at the position: %s\n",c, res);

   char *sa = "Hello";
   unsigned char cj = 'l';
   char *resr = (char *)memchr(sa, cj, 1);
   printf("Test 2: %c found at the position: %s\n",cj, resr);

   char *sad = "Help";
   unsigned char cjs = 'l';
   char *rese = (char *)memchr(sad, cjs, 10);
   printf("Test 3: %c found at the position: %s\n",cjs, rese);

   char *sawe = "";
   unsigned char cjyt = 'l';
   char *resu = (char *)memchr(sawe, cjyt, 1);
   printf("Test 4: %c found at the position: %s\n",cjyt, resu);

   int saw[4] = {12, 1202, 345, 0x65};
   unsigned char cjy = 0;
   char *resuy = (char *)memchr(saw, cjy, 1);
   printf("Test 5: %c found at the position: %s\n",cjy, resuy);*/

    /*char *big = "";
    char *little = "world";
    char *res  = ft_strnstr(big, little, 16);
    printf("%s\n", res);*/

    /*int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int *arr = ft_calloc(num, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0;i<num;i++){
        printf("%d", arr[i]);
    }
    free(arr);
    arr = NULL;*/

    /*const char *original = "Hello, World!";
    
    char *duplicate = ft_strdup(original);
    
    if (duplicate == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    free(duplicate);*/

    const char *original = "Hello, World!";
    
    printf("Original: %s\n", ft_substr(original, 15, 3));


   return 0;
}