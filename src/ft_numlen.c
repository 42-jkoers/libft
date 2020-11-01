/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 15:16:21 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/01 15:29:47 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_numlen(int64_t num, uint64_t base)
{
	size_t	len;
	int64_t	divider;

	if (num == 0)
		return (1);
	len = 0;
	if (num < 0)
	{
		divider = -((int64_t)base_n);
		len += 1;
	}
	else
		divider = (int64_t)base;
	while (num != 0)
	{
		num /= divider;
		len++;
	}
	return (len);
}
