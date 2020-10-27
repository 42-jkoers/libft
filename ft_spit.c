/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_spit.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 11:59:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 14:22:41 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static	uint64_t	split_it(char *s, char c, bool count_only, char **split)
{
	size_t		prev_sep;
	size_t		i;
	uint64_t	words;

	prev_sep = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i - prev_sep > 1)
		{
			if (!count_only)
				split[words] = ft_substr((char *)s, prev_sep, i - prev_sep);
			words++;
			prev_sep = i;
		}
		i++;
	}
	return (words);
}

char		**ft_split(char const *s, char c)
{
	char	**split;

	split = NULL;
	split = malloc(split_it((char *)s, c, true, split) * sizeof(char *));
	split_it((char *)s, c, false, split);
	return (split);
}
