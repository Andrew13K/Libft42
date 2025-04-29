/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:27:00 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/29 15:52:15 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	len_s;
	int		i;

	i = 0;
	len_s = ft_strlen(s);
	if (start > len_s)
		return (NULL);
	arr = malloc((sizeof(char) * len) + 1);
	if (!arr)
		return (NULL);
	while (start + i < start + len)
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	s = (const char *)arr;
	return ((char *)s);
}
