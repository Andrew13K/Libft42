/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:05 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/24 15:40:40 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		|| ((unsigned char)c >= '0' && (unsigned char)c <= '9'))
		return (1);
	return (0);
}
