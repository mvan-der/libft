/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:18:32 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/10 13:00:42 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

static int	ft_cnt_str(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
				count++;
		}
		i++;
	}
	return (count);
}

static size_t	ft_len_str(const char *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_split_magic(char const *s, char c, char **result)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			*result = ft_substr(s, i, ft_len_str(s, i, c));
			if (!result)
			{
				(ft_free(result));
				return ;
			}
			i = i + ft_len_str(s, i, c);
			result++;
		}
	}
	*result = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	result = malloc(sizeof(char *) * (ft_cnt_str(s, c) + 1));
	if (!result)
		return (0);
	ft_split_magic(s, c, result);
	return (result);
}
