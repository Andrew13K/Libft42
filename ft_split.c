/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:40 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/05 09:34:59 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char **arr;
	size_t	len;

	i = 0;
	j = 0;
	k = 0;
	arr = malloc((sizeof(char *) * 8) + 1);
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[j] = malloc(sizeof(char) * ft_strlen(s));
		if (!arr)
			return (NULL);
		arr[j][k] = s[i];
		k++;
		while (s[i] == c)
		{
			j++;
			k = 0;
		}
		i++;
	}
	arr[j] = NULL;
	free(arr);
	return (arr);
}