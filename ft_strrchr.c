/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:02:10 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/13 11:13:58 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	a = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (&a[i]);
	while (i >= 0)
	{
		if (a[i] == c)
			return (&a[i]);
		i--;
	}
	return (NULL);
}
