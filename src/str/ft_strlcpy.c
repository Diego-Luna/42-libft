/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:34:53 by diegofranci       #+#    #+#             */
/*   Updated: 2022/03/31 18:42:13 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	string_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size == 0)
	{
		return (length);
	}
	index = 0;
	while (dest[index] != '\0' && index < (size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (length);
}
