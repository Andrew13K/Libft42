/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/05 12:17:18 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <bsd/string.h>
#include <bsd/stdlib.h>
#include <limits.h>

int main() {
	/*char *s = "Helloshowsaresyou";
	char ch = 's';
	char *res[4] = {"hello","ejhd","dfds","rtre"};
	for (int i = 0; res[i] != NULL; i++)
	{
		for (int j = 0; res[i][j] != '\0'; j++)
		{
			printf("%c", res[i][j]);
		}
		printf("\n");
	}*/

	int n = 0;

	char *res = ft_itoa(n);
	printf("Integer: %d, converts into string: %s\n", n, res);
	
	free(res);
    return 0;
}
