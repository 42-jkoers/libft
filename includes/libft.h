/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:51:21 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 14:14:58 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <stdbool.h>
# include <stddef.h>

void	ft_memset(void *s, uint8_t c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, void *src, uint8_t c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(void *s, uint8_t c, size_t n);
int8_t	ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t maxlen);
char	*ft_strchr(char *str, char c);
char	*ft_strrchr(char *str, char c);
char	*ft_strnstr(char *big, char *little, size_t len);
int8_t	ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(char *str);
bool	ft_isalpha(char c);
bool	ft_isdigit(char c);
bool	ft_isalnum(char c);
bool	ft_isascii(char c);
bool	ft_isprint(char c);
char	ft_toupper(char c);
char	ft_tolower(char c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
