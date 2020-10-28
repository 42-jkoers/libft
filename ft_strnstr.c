/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:55:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/28 23:19:02 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (len >= little_len)
	{
		len--;
		if (ft_memcmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
