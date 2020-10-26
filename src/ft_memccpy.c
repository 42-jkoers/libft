/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:44:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/26 15:10:10 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

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
