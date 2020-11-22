/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 11:30:59 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/21 09:48:29 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	b;
	size_t			i;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	b = 0;
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = b;
		i++;
	}
	return (ptr);
}
