/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:59:22 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 13:22:47 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n){
    size_t		i, k;
	size_t		len;
	char	*temp;
	char		*source;

	
	source = (char *)src;
	len = strlen(source);
	k = 0;
	printf("source = %s\n",source);
	while (len > 0)
	{
		temp[k] = source[len];
		len--;
		k++;
	}
	printf("temp = %s\n",temp);
	i = 0;
	
	/*temp = (char *)dest;
	while (i < n)
	{
		temp[i] = *(char *)source;
		i++;
		source++;
	}*/
    return (dest);
}