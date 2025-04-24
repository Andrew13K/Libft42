/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:42 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/24 12:41:43 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strrchr(const char *s, int c){
    unsigned char ch = c;
    char *last = NULL;
    while(*s!='\0'){
        if(*s == ch)
            last = (char *)s;
        s++;
    }
    if(ch == '\0')
        return (char *) s;
    return last;
}