/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:30:43 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/28 15:29:09 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdbool.h>

static bool	ft_isspace(char c)
{
	if (c == ' ')
		return (true);
	if (c == '\n')
		return (true);
	if (c == '\t')
		return (true);
	if (c == '\v')
		return (true);
	if (c == '\f')
		return (true);
	if (c == '\r')
		return (true);
	return (false);
}

int			ft_atoi(char *str)
{
	int		result;
	bool	is_negative;

	while (ft_isspace(*str))
		str++;
	is_negative = *str == '-';
	if (*str == '-' || *str == '+')
		str++;
	result = 0;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result -= (int)(*str - '0');
		str++;
	}
	return (is_negative ? result : -result);
}
