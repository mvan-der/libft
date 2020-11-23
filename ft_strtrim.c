/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 13:05:27 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/22 19:42:01 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimstr;
	unsigned int	i;
	int				j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (i < ft_strlen(s1))
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	while (j >= 0)
	{
		if (!ft_strchr(set, s1[j]))
			break ;
		j--;
	}
	trimstr = malloc(j + 1 - i + 1);
	if (trimstr == 0)
		return (0);
	ft_strlcpy(trimstr, s1 + i, (j + 1 - i + 1));
	return (trimstr);
}
