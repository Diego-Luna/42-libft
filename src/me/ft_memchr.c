/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:54:20 by diegofranci       #+#    #+#             */
/*   Updated: 2022/03/31 20:03:19 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)(str + i));
	}
	return (0);
}
