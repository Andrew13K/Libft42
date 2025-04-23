/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:59:30 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/23 19:43:15 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size){
    size_t i = 0;
    while(src[i])
        i++;

    if (size == 0)
        return i;
    size_t j = 0;

    while(j < size - 1 && src[j] != '\0'){
        dest[j] = src[j];
        j++;
    }
    
    dest[j] = '\0';
    return i;
}