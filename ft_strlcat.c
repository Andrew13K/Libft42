/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:36 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 14:20:36 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (src == NULL)
		return (i);
	k = 0;
	while (src[k] != '\0')
		k++;
	if (size <= i)
		return (k + size);
	while (src[j] != '\0' && j + i + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + k);
}
