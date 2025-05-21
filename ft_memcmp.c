/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:37:23 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/21 16:12:55 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*temp_s1;
	const unsigned char	*temp_s2;

	i = 0;
	temp_s1 = (const unsigned char *)s1;
	temp_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*temp_s1 != *temp_s2)
			return (*temp_s1 - *temp_s2);
		i++;
		temp_s1++;
		temp_s2++;
	}
	return (0);
}
