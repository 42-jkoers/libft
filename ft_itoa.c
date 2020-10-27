/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 12:26:18 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 14:33:24 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	abs4(int nbr)
{
	return (nbr < 0 ? -nbr : nbr);
}

static unsigned int	numlen(int nbr)
{
	unsigned int digits;

	digits = nbr < 0 ? 2 : 1;
	while (nbr != 0)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	i;
	bool			is_negative;
	unsigned int	len;

	i = 0;
	len = numlen(n);
	res = malloc((len + 1) * sizeof(char));
	is_negative = n < 0;
	while (n != 0 && i != 0)
	{
		res[len - i - 1] = (char)abs4(n % 10) + '0';
		n /= 10;
		i++;
	}
	if (is_negative)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
