/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 16:28:20 by jkoers        #+#    #+#                 */
/*   Updated: 2020/12/26 22:16:39 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long			ft_min(long a, long b)
{
	return (a < b ? a : b);
}

unsigned long	ft_min_u(unsigned long a, unsigned long b)
{
	return (a < b ? a : b);
}

double			ft_minf(double a, double b)
{
	return (a < b ? a : b);
}
