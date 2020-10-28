/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:44:03 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 15:31:11 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strrchr(char *str, char c)
{
	ssize_t	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (NULL);
}
