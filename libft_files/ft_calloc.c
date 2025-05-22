/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:22:09 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/19 17:51:45 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*arr;
	unsigned char	*p;
	size_t			i;
	size_t			total_size;

	i = 0;
	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	p = (unsigned char *)arr;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (arr);
}
