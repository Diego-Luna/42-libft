/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:11:08 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/05 13:10:54 by diegofranci      ###   ########.fr       */
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
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_isalpha(const int c);

/* Conv */
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* Io */
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);

#endif