/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:57:18 by diegofranci       #+#    #+#             */
/*   Updated: 2022/03/31 13:00:53 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
