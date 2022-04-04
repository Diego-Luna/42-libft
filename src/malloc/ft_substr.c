/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:12:55 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/03 20:11:38 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*empty_string(void)
{
	char	*result;
	result = malloc(1);
	if (result)
		result[0] = 0;
	return (result);
}

static size_t	select_smallest(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{

}
