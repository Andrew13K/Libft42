/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:40 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/21 15:17:28 by akosmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str(char **res)
{
	int	i;

	if (!res)
		return ;
	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static char	**alloc_memory_arr(char const *s, char c)
{
	char	**str;
	int		i;
	int		count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	*alloc_memory_str(const char *str, char c)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	new_str = malloc((sizeof(char) * i) + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static char	**sort_str(char const *s, char c, char **res)
{
	int		i;
	int		j;
	int		index;

	i = 0;
	index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		res[index] = alloc_memory_str(&s[i], c);
		if (!res[index])
			return (free_str(res), NULL);
		j = 0;
		while (s[i] != c && s[i] != '\0')
			res[index][j++] = s[i++];
		res[index++][j] = '\0';
	}
	res[index] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	if (s[0] == '\0')
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = alloc_memory_arr(s, c);
	if (!res)
		return (NULL);
	res = sort_str(s, c, res);
	return (res);
}
