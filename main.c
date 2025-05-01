/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 14:00:52 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main() {
     // Test 1: Normal string concatenation, enough space in destination
	 char dest1[20] = "Hello";
	 char src1[] = " World";
	 size_t result = ft_strlcat(dest1, src1, sizeof(dest1));
	 printf("%zu\n", result);  // Should output 11 ("Hello World" length)
	 printf("%s\n", dest1);    // Should output "Hello World"
 
	 // Test 2: Concatenation when destination is almost full
	 char dest2[10] = "Hi";
	 char src2[] = " There";
	 result = ft_strlcat(dest2, src2, sizeof(dest2));
	 printf("%zu\n", result);  // Should output 10 (full length of "Hi There")
	 printf("%s\n", dest2);    // Should output "Hi Ther"
 
	 // Test 3: Concatenation with no space left in destination
	 char dest3[6] = "ABCDE";
	 char src3[] = "12345";
	 result = ft_strlcat(dest3, src3, sizeof(dest3));
	 printf("%zu\n", result);  // Should output 10 (length of "ABCDE12345")
	 printf("%s\n", dest3);    // Should output "ABCDE"
 
	 // Test 4: Concatenation when the source is empty
	 char dest4[20] = "Hello";
	 char src4[] = "";
	 result = ft_strlcat(dest4, src4, sizeof(dest4));
	 printf("%zu\n", result);  // Should output 5 (length of "Hello")
	 printf("%s\n", dest4);    // Should output "Hello"
 
	 // Test 5: Concatenation with null source (edge case)
	 char dest5[20] = "Test";
	 char *src5 = NULL;
	 result = ft_strlcat(dest5, src5, sizeof(dest5));
	 printf("%zu\n", result);  // Should output 4 (length of "Test")
	 printf("%s\n", dest5);    // Should output "Test"
 
	 // Test 6: Concatenation when source is larger than available space
	 char dest6[6] = "Hi";
	 char src6[] = "HelloWorld";
	 result = ft_strlcat(dest6, src6, sizeof(dest6));
	 printf("%zu\n", result);  // Should output 11 ("HiHelloWorld")
	 printf("%s\n", dest6);    // Should output "HiHel"
    return 0;
}
