/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 10:58:39 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 14:18:44 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	ssize_t	s_leftover;

	s_leftover = ft_strlen((char *)s) - start;
	if (s_leftover <= 0)
		return (NULL);
	if ((size_t)s_leftover < len)
		len = (size_t)s_leftover;
	substr = malloc((len + 1) * sizeof(char));
	ft_memcpy(substr, (char *)s + start, len * sizeof(char));
	substr[len] = '\0';
	return (substr);
}
