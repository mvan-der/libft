/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 11:28:29 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/21 09:50:20 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (0);
}
