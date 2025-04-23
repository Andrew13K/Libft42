/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:18 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/23 20:42:51 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n){
    char *temp = dest;
    const char* source = src;

    while (0 < n){
        *temp = *source;   
        temp++;
        source++;
        n--;
    }
    return dest;
}