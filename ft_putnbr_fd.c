/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 13:17:33 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/28 22:54:48 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static unsigned int	ft_abs(int nbr)
{
	return (nbr < 0 ? -nbr : nbr);
}

static unsigned int	ft_numlen(int nbr)
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

static void			ft_itoa_buf(int n, char *buf)
{
	unsigned int	len;
	unsigned int	is_negative;

	len = ft_numlen(n);
	is_negative = n < 0 ? 1 : 0;
	if (is_negative)
		buf[0] = '-';
	buf[len] = '\0';
	while (len > is_negative)
	{
		len--;
		buf[len] = (char)ft_abs(n % 10) + '0';
		n /= 10;
	}
}

void				ft_putnbr_fd(int n, int fd)
{
	char buf[22];

	ft_itoa_buf(n, buf);
	ft_putstr_fd(buf, fd);
}
