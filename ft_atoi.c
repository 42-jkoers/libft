/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:30:43 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 13:38:10 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdbool.h>

static int64_t	ft_str_to_i64(char *str)
{
	int64_t	result;
	bool	is_negative;

	if (!str || str[0] == '\0')
		return (0);
	while (!ft_isdigit(*str) && *str != '\0')
	{
		is_negative = *str == '-';
		str++;
	}
	if (*str == '\0')
		return (0);
	result = 0;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result -= (int64_t)(*str - '0');
		str++;
	}
	return (is_negative ? result : -result);
}

int				ft_atoi(char *str)
{
	return ((int)ft_str_to_i64(str));
}
