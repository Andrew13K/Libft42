/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosmeni <akosmeni@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:40 by akosmeni          #+#    #+#             */
/*   Updated: 2025/05/19 13:52:44 by akosmeni         ###   ########.fr       */
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
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	*alloc_memory_str(char *str, char c, char **res)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	new_str = malloc((sizeof(char) * i) + 1);
	if (!new_str)
	{
		free_str(res);
		return (NULL);
	}
	return (new_str);
}

static char	**sort_str(char const *s, char c, char **res, int in_word)
{
	int		i;
	int		j;
	char	*str;
	int		num_str;

	i = 0;
	num_str = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] != c && in_word == 0)
		{
			str = alloc_memory_str((char *)&s[i], c, res);
			if (str == NULL)
				return (NULL);
			in_word = 1;
			while (s[i] != c && s[i] != '\0')
				str[j++] = s[i++];
			str[j] = '\0';
			res[num_str++] = str;
		}
		if (s[i] == c)
		{
			in_word = 0;
			i++;
		}
	}
	res[num_str] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		in_word;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	in_word = 0;
	res = alloc_memory_arr(s, c);
	res = sort_str(s, c, res, in_word);
	if (!res)
		return (NULL);
	return (res);
}
