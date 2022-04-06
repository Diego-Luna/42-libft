/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:43:30 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/06 11:14:36 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_dest;
	unsigned int	length_src;

	i = 0;
	length_dest = 0;
	length_src = 0;
	while (dest[length_dest] != '\0')
		length_dest++;
	while (src[length_src] != '\0')
		length_src++;
	if (size <= length_dest)
	{
		return (length_src + size);
	}
	while (src[i] != '\0' && (length_dest + i) < (size - 1))
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
