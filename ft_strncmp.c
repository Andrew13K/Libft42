/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:13 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/24 12:41:19 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;
    while (i < n && (s1[i] || s2[i])){
        if(s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return 0;
}