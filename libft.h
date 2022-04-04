/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:11:08 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/04 10:18:06 by diegofranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <strings.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

/* Checker */
int	ft_isalpha(const int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(char c);
int	ft_isprint(char c);

#endif