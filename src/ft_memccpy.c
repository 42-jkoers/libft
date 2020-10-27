/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:44:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 10:48:49 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memccpy(void *dest, void *src, uint8_t c, size_t n)
{
	uint8_t *d;
	uint8_t *s;

	d = dest;
	s = src;
	while (n > 0)
	{
		n--;
		if (*s == c)
			break ;
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
