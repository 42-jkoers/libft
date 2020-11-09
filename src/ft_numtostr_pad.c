/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numtostr_pad.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 00:20:00 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/09 15:14:07 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_numtostr_pad(long num, size_t min_len)
{
	char	*res;
	size_t	stop_at;
	size_t	numlen;

	numlen = ft_max_u(ft_numlen(num, 10), min_len);
	res = malloc((numlen + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (num < 0)
		res[0] = '-';
	res[numlen] = '\0';
	stop_at = num < 0 ? 1 : 0;
	while (numlen > stop_at)
	{
		numlen--;
		res[numlen] = (char)ft_abs(num % 10) + '0';
		num /= 10;
	}
	return (res);
}
