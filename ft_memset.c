/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:05:26 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/23 19:05:32 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memset(void *s, int c, size_t n){
    char *temp = s;
    while (0 < n){
        *temp = c;   
        temp++;
        n--;
    }
    return s;
}
