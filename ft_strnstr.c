/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:55:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 13:48:54 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	max_shifts;
	size_t	little_len;

	little_len = ft_strlen(little);
	max_shifts = ft_strlen(big);
	if (max_shifts > len)
		max_shifts = len;
	max_shifts -= little_len;
	while (max_shifts > 0)
	{
		if (ft_strncmp(little, big, little_len) == 0)
			return (big);
		big++;
		max_shifts--;
	}
	return (NULL);
}
