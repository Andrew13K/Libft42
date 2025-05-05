/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:20:04 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/05 12:30:08 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char *num;
	char v;
	int temp_n = n;

	int i = 0;
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while(temp_n > 0)
	{
		temp_n /= 10;
		i++;
	}
	num = malloc(sizeof(char) * i);
	if (!num)
		return (NULL);
	i = 0;
	printf("n: %d\n", n);
	if (n > 9)
		ft_itoa(n/10);
	printf("After recursion\n");
	num[i] = (n%10) + '0';
	printf("%c\n",num[i]);
	i++;
	
	return (num);
}