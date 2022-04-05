/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegofranciscolunalopez <diegofrancisco    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:11:08 by diegofranci       #+#    #+#             */
/*   Updated: 2022/04/05 14:00:10 by diegofranci      ###   ########.fr       */
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

/* change */
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* Io */
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);

/* malloc */
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* me */
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

/* str */
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
char	*strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif