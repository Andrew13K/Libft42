/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:36 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/24 12:41:37 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <aio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size){
    size_t i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while(dest[i]!='\0')
        i++;
    while(src[j]!='\0')
        j++;

    if(i == size)
        return size + j;

    while (src[k] != '\0' && i + k + 1 < size){
        dest[i+k] = src[k];
        k++;
    }
    dest[i+k] = '\0';

    return i+j;
}