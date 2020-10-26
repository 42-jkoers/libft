/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:51:21 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/26 18:50:25 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>

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
bool	ft_isdigit(char c)


#endif
