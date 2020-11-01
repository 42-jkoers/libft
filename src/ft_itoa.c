/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 12:26:18 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/31 17:11:55 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_abs(int nbr)
{
	return (nbr < 0 ? -nbr : nbr);
}

static unsigned int	ft_numlen1(int nbr)
{
	unsigned int digits;

	if (nbr == 0)
		return (1);
	digits = 0;
	if (nbr < 0)
		digits++;
	while (nbr != 0)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

char				*ft_itoa(int n)
{
	char			*res;
	unsigned int	len;
	unsigned int	is_negative;

	len = ft_numlen1(n);
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	is_negative = n < 0 ? 1 : 0;
	if (is_negative)
		res[0] = '-';
	res[len] = '\0';
	while (len > is_negative)
	{
		len--;
		res[len] = (char)ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (res);
}
