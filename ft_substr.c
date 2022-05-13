/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 10:56:02 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/13 11:53:38 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	dest = ft_calloc(sizeof(char), len + 1);
	if (!dest)
		return (NULL);
	if (start > ft_strlen(s))
	{
		dest[i] = '\0';
		return (dest);
	}
	ft_strlcpy(dest, s, len + 1);
	return (dest);
}
