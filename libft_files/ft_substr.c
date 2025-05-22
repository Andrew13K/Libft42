/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:27:00 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/19 23:27:15 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check(char const *s, unsigned int start, size_t *len)
{
	size_t	len_s;
	char	*arr;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		arr = malloc(sizeof(char));
		if (!arr)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	if (*len > len_s - start)
		*len = len_s - start;
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = check(s, start, &len);
	if (arr)
		return (arr);
	arr = malloc((sizeof(char) * len) + 1);
	if (!arr)
		return (NULL);
	while (i < len && s[start + i])
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
