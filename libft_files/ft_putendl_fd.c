/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:19:02 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/27 08:18:23 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t		len;
	char		c;

	if (s)
	{
		len = ft_strlen(s);
		c = '\n';
		write(fd, s, len);
		write(fd, &c, 1);
	}
}
