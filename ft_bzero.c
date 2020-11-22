/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:35:58 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/21 09:48:32 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	i = 0;
	a = s;
	b = 0;
	while (i < n)
	{
		a[i] = b;
		i++;
	}
}
