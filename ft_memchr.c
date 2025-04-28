/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:43:04 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/28 15:20:41 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stddef.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *str;
    size_t  i;

    str = (char*)s;
    i = 0;
    while (*str < n && *str != '\0'){
        if (*str == (unsigned char)c)
            return (void *)str;
        str++;
    }
    return NULL;
}