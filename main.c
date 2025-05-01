/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:42:34 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/01 17:02:26 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <bsd/string.h>
#include <bsd/stdlib.h>

int main() {
    char *s = "Hello";
	char *c = "ll";
	char  *res = ft_strnstr(s, c, 3);
	printf("In string - '%s', char - '%s', returns pointer: '%s'\n\n", s,c,res);

	s = "";
	c = "Hello";
	res = ft_strnstr(s, c, 2);
	printf("In string - '%s', char - '%s', returns pointer: '%s'\n\n", s,c,res);

	s = "How are you";
	c = "are";
	res = ft_strnstr(s, c, 8);
	printf("In string - '%s', char - '%s', returns pointer: '%s'\n\n", s,c,res);

	s = "How are you";
	c = "";
	res = ft_strnstr(s, c, 6);
	printf("In string - '%s', char - '%s', returns pointer: '%s'\n\n", s,c,res);

	s = "Hello ll lsldj ll";
	c = "l";
	res = ft_strnstr(s, c, 4);
	printf("In string - '%s', char - '%s', returns pointer: '%s'\n\n", s,c,res);
    return 0;
}
