/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:37:23 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/02 09:15:52 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*temp_s1;
	const char	*temp_s2;

	i = 0;
	temp_s1 = (const char *)s1;
	temp_s2 = (const char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)*temp_s1 != (unsigned char)*temp_s2)
			return ((unsigned char)*temp_s1 - (unsigned char)*temp_s2);
		i++;
		temp_s1++;
		temp_s2++;
	}
	return (0);
}
