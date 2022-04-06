/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:03:18 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/04 11:13:53 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_len(char *str, char *set)
{
	int	i;
	int	c_count;

	i = 0;
	c_count = 0;
	while (str[i])
	{
		if (ft_is_in(str[i], set))
			c_count++;
		i++;
	}
	return (i - c_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	str = malloc(sizeof(*str) * ft_len(s1, set) + 1);
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_is_in(str[i], set))
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	return (str);
}
