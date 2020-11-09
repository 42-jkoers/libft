/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_numtostr_pad.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 18:40:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/09 00:15:03 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	ft_putstr(ft_numtostr_pad(-42, 5));
	return (0);
}
