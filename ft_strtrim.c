/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:37:47 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/30 19:11:10 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	char	*top;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	top = malloc(ft_strlen(s1) * (sizeof(char)) + 1);
	if (!top)
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
			{
				top[k] = s1[i];
			}
			
			j++;
		}
		i++;
		k++;
	}
	top[k+1] = '\0'; 
	return (top);
}