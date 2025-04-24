/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:31 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/24 12:41:32 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strchr(const char *s, int c){
    unsigned char ch = c;
    while(*s != '\0'){
        if(*s == ch)
            return (char *)s;
        s++;
    }
    if (ch == '\0')
        return (char *)s;
    return NULL;
}