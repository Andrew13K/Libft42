/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:18 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 11:58:54 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t	i;
	char *temp = (char *)dest;
	const char *source = (const char *)src;

	i = 0;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
    return (dest);
}