/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 12:39:57 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/22 19:41:19 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;

	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newstr[j] = s2[i];
		i++;
		j++;
	}
	if ((ft_strlen(s1) + ft_strlen(s2)) > 0)
		newstr[j] = '\0';
	return (newstr);
}
