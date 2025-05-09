/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/09 17:00:13 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main() {
	char *res = ft_itoa(-23);
	printf("Result: %s\n", res);
	res = ft_itoa(-1);
	printf("Result: %s\n", res);
	res = ft_itoa(1);
	printf("Result: %s\n", res);
	res = ft_itoa(0);
	printf("Result: %s\n", res);
	res = ft_itoa(INT_MAX);
	printf("Result: %s\n", res);
	res = ft_itoa(INT_MIN);
	printf("Result: %s\n", res);
	res = ft_itoa(763767434);
	printf("Result: %s\n", res);
	res = ft_itoa(99999999);
	printf("Result: %s\n", res);
	res = ft_itoa(900909900);
	printf("Result: %s\n", res);
	res = ft_itoa(00);
	printf("Result: %s\n", res);
    return 0;
}
