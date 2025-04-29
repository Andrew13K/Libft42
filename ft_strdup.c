/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:17:50 by akosmeni          #+#    #+#             */
/*   Updated: 2025/04/29 14:22:32 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *arr;
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;

    arr = malloc((i * sizeof(char)) + 1);
    if(!arr)
        return NULL;
    i = 0;
    while (s[i] != '\0')
    {
        arr[i] = s[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}