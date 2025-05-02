/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:18 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/02 13:33:12 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*temp;
	const char	*source;

	i = 0;
	temp = (char *)dest;
	source = (const char *)src;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	return (dest);
}
