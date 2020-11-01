/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numtobase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 00:20:00 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/01 15:16:14 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_numtobase(int64_t num, char *base)
{
	size_t	numlen;
	size_t	base_n;
	char	*result;
	int64_t	divider;

	result_i = 0;
	base_n = ft_strlen(base);
	numlen = ft_numlen(num, (uint64_t)base_n);
	result = malloc((numlen + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[numlen] = '\0';
	divider = num < 0 ? -((int64_t)base_n) : (int64_t)base_n;
	while (numlen > 0)
	{
		numlen--;
		results[numlen] = base[ft_abs(num % base_n)];
		num /= divider;
	}
	return (result);
}
