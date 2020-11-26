/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 13:05:27 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/24 21:40:40 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimstr;
	unsigned int	i;
	int				j;

	i = 0;
	j = ft_strlen(s1);
	while (i < ft_strlen(s1) && ft_strchr(set, s1[i]))
		i++;
	while (j && ft_strchr(set, s1[j]))
		j--;
	trimstr = ft_substr(s1, i, j);
	if (!trimstr)
		return (0);
	return (trimstr);
}
