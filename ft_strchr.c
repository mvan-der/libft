/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 19:09:14 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/13 11:09:59 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*psrc;
	size_t	i;

	psrc = (char *)s;
	i = 0;
	while (psrc[i] != c)
	{
		if (psrc[i] == '\0')
			return (NULL);
		i++;
	}
	return (&psrc[i]);
}
