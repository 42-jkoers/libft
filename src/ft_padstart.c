/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_padstart.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:05:45 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/08 15:56:12 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_padstart(char *str, size_t target_len, char pad)
{
	char	*res;
	size_t	strlen;

	strlen = ft_strlen(str);
	if (strlen > target_len)
		return (ft_strdup(str));
	res = malloc((target_len + 1) * sizeof(char));
	ft_memset(res, pad, (target_len - strlen) * sizeof(char));
	ft_memcpy(res + (target_len - strlen), str, strlen * sizeof(char));
	res[target_len] = '\0';
	return (res);
}
