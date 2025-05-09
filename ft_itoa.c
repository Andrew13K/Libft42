/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:19:56 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/09 17:06:50 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

static char	*allocate_memory(int long num)
{
	char	*str;
	int		count;

	if (num < 0)
	{
		count = count_digits(num);
		str = malloc((sizeof(char) * count) + 2);
		if (str)
			str[0] = '-';
	}
	else
	{
		count = count_digits(num);
		str = malloc((sizeof(char) * count) + 1);
	}
	return (str);
}

static char	*fill_str(int long num, int i, int count, char *str)
{
	if (num < 0)
	{
		num *= -1;
		while (i > 0)
		{
			str[i] = num % 10 + '0';
			num /= 10;
			i--;
		}
		str[count + 1] = '\0';
		return (str);
	}
	i = count - 1;
	while (i >= 0)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	str[count] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			count;
	int			i;
	char		*str;
	char		*res;
	int long	num;

	num = n;
	str = allocate_memory(num);
	if (!str)
		return (NULL);
	count = count_digits(num);
	i = count;
	res = fill_str(num, i, count, str);
	return (res);
}
