/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:14:13 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/04 12:22:46 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_free_tab(char **table)
{
	int	i;

	if (!table)
		return (NULL);
	i = 0;
	while (table[i])
	{
		free(table[i]);
		table[i] = NULL;
		i++;
	}
	free (table);
	return (NULL);
}

int	ft_get_word_end(char *str, char separator, int i)
{
	while (str[i] && str[i] != separator)
	{
		i++;
	}
	return (i);
}

int	ft_fill_result(char **table, const char *str, char separator)
{
	int	i;
	int	word_end;

	i = 0;
	while (str[i])
	{
		if (str[i] != separator)
		{
			word_end = ft_get_word_end(str, separator, i);
			*table = ft_calloc(sizeof(**table), word_end - i + 1);
			if (!*table)
				return (0);
			ft_memcpy(*table, str + i, word_end - i);
			table++;
			i = word_end - 1;
		}
		i++;
	}
	return (1);
}

int	ft_count_words(char *str, char separator)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] == separator)
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] != separator)
		{
			nb_words++;
			while (str[i] && str[i] != separator)
			{
				i++;
			}
		}
		if (str[i])
		{
			i++;
		}
	}
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = ft_calloc(sizeof(*result), ft_count_words(s, c) + 1);
	if (!result)
	{
		return (NULL);
	}
	if (!ft_fill_result(result, s, c))
	{
		return (ft_free_tab(result));
	}
	return (result);
}
