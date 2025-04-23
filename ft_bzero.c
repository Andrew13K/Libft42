/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:49:47 by andrey            #+#    #+#             */
/*   Updated: 2025/04/23 19:45:07 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
        char *temp = s;
        while (n > 0)
        {
                *temp = '\0';
                temp++;
                n--;
        }
}