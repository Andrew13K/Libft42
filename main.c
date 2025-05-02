/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/02 13:08:49 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <bsd/string.h>
#include <bsd/stdlib.h>

int main() {
	int num;
	printf("Enter the number of elements: ");
	scanf("%d", &num);

	int *res = ft_calloc(num, sizeof(char));
	if (res == NULL)
		return 1;
	for (int i = 0; i < num; i++)
		printf("%d, ",res[i]);
		
	free(res);
	res = NULL;
    return 0;
}
