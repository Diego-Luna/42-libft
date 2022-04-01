/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:16:58 by diegofranci       #+#    #+#             */
/*   Updated: 2022/03/31 20:20:40 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ch1;
	unsigned char	*ch2;

	i = 0;
	ch1 = (unsigned char *)str1;
	ch2 = (unsigned char *)str2;
	while (i < n)
	{
		if (ch1[i] != ch2[i])
			return (ch1[i] - ch2[i]);
		i++;
	}
	return (0);
}
