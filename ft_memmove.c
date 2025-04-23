/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:59:22 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/23 18:59:26 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <aio.h>

void *ft_memmove(void *dest, const void *src, size_t n){
    char *temp = dest;
    const char *source = src;
    size_t i = 0;
    if (temp < source){
        while(i < n){
            temp[i] = source[i];
            i++;
        }
    }
    else if (temp > source){
        while (n>0){
            n--;
            temp[n] = source[n];
        }
    }
    return dest;
}