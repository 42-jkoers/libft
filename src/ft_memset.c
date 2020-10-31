/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:44:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 15:01:07 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *s1;
	unsigned char c1;

	s1 = s;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		n--;
		s1[n] = c1;
	}
	return (s);
}
