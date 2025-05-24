/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:50 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/24 15:40:46 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (1);
	return (0);
}
