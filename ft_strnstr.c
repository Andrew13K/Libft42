/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:23:43 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 17:02:56 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
    if (little == NULL || little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			if (len - i >= j)
				j++;
			else	
				j = 0;
		}
		i++;
	}
	if (little[j] == '\0')
		return ((char *)&big[i - j]);
	return (NULL);
}