/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:38:17 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/13 11:07:30 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	pdst = (char *)dest;
	psrc = (char *)src;
	i = 0;
	if (src != 0 || dest != 0)
	{
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
		return (pdst);
	}
	return (pdst);
}
