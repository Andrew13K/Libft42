/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:37:47 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/02 14:21:05 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	unsigned char *s = (unsigned char *)s1;
	char	*s1_copy;
	int		i;
	int j;
	int k;

	i = 0;
	k = 0;
	s1_copy = malloc(ft_strlen(s1) * (sizeof(char)) + 1);
	if (!s1_copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
			{
				s[k] = s[k + 1];
			}
				
			j++;
		}
		i++;
		k++;
	}
	s[k] = '\0';
	printf("%s", s);
	return (s1_copy);
}
/*while (s1[i] != '\0')
	{
		more_start = start + 1;
		while (set[j] != '\0')
		{
			if (*start != set[j])
				more_start = start;
			j++;
		}
		i++;
		start++;
	}*/
