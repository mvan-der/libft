/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:38:17 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/21 09:47:43 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dest;
	b = (char *)src;
	i = 0;
	if (src != 0 || dest != 0)
	{
		while (n != 0)
		{
			a[i] = b[i];
			i++;
			n--;
		}
		return (a);
	}
	return (a);
}
