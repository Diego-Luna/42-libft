/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:24:29 by diegofranci       #+#    #+#             */
/*   Updated: 2022/03/30 20:24:37 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (!(str[index] >= 'a' && str[index] <= 'z'))
				if (!(str[index] >= 'A' && str[index] <= 'Z'))
					return (0);
			index++;
		}
		return (1);
	}
}
