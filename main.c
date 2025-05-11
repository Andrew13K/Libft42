/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/11 18:58:05 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main() {
	char **res;

	printf("\n");
	res = ft_split("hello world", ' ');         // 2 strings
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");	
	res = ft_split("   split  this   ", ' ');   // 2 strings, many delimiters
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("abc", 'x');                 // 1 string, no delimiter
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("xxxabcxxxdefxxx", 'x');     // 2 strings, surrounded by delimiters
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("", 'x');                    // NULL
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split(NULL, 'x');                  // NULL
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("a,b,c", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("hello,world", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("hello,,world", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}
	
	printf("\n");
	res = ft_split("helloworld", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split(",,,,,,,", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	printf("\n");
	res = ft_split("", ',');
	if (res != NULL)
	{
		for (int i = 0; res[i] != NULL; i++)
			printf("each string in double pointer: %s\n", res[i]);
	}
	else
	{
		printf("ft_split returned NULL\n");
	}
    return 0;
}
