/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 12:53:09 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/21 09:49:20 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	i = 0;
	a = s;
	b = c;
	while (i < n)
	{
		a[i] = b;
		i++;
	}
	return (a);
}
