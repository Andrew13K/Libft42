/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:43:04 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 15:53:28 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*temp;

	i = 0;
	temp = (const char *)s;
	while (temp[i] && i < n)
	{
		if ((unsigned char)temp[i] == (unsigned char)c)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}
