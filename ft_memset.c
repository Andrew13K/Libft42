/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:05:26 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 12:08:18 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n && c >= 0 && c <= 126)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
