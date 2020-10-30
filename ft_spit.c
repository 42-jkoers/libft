/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_spit.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 11:59:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/30 21:46:34 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

static char		*ft_strndup(char *str, size_t len)
{
	char *dup;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, len * sizeof(char));
	dup[len] = '\0';
	return (dup);
}

static size_t	count_words(char *s, char c)
{
	char	*prev_sep;
	size_t	words;

	prev_sep = s - 1;
	words = 0;
	while (true)
	{
		if (*s == c || *s == '\0')
		{
			if (s - prev_sep > 1)
				words++;
			if (*s == '\0')
				return (words);
			prev_sep = s;
		}
		s++;
	}
}

static void		free_strings(char **strings, size_t n)
{
	while (n > 0)
	{
		n--;
		free(strings[n]);
	}
	free(strings);
}

static void		cpy_words(char *s, char c, char **split, size_t num_words)
{
	char	*prev_sep;
	size_t	word_i;

	prev_sep = s - 1;
	word_i = 0;
	while (word_i < num_words)
	{
		if (*s == c || *s == '\0')
		{
			if (s - prev_sep > 1)
			{
				split[word_i] = ft_strndup(prev_sep + 1, s - prev_sep - 1);
				if (split[word_i] == NULL)
				{
					free_strings(split, word_i);
					return ;
				}
				word_i++;
			}
			prev_sep = s;
		}
		s++;
	}
	split[num_words] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	num_words;

	num_words = count_words((char *)s, c);
	split = malloc((num_words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	cpy_words((char *)s, c, split, num_words);
	return (split);
}
