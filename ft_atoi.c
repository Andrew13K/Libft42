/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:49:08 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/24 08:58:33 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str){
    int sign = 1;
    int num = 0;
    
    if(*str=='\0')
        return 0;

    while(*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    if(*str == '-' || *str == '+'){
        if(*str == '-')
            sign = -1;
        str++;
    }
    
    while(*str >= '0' && *str <= '9'){
        num = num * 10 + (*str - '0');
        str++;
    }
    
    return num * sign;
}