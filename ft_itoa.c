/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:20:39 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/03/09 16:03:01 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_n(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count = 1;
		return (count);
	}
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_count_n(n) - 1;
	str = ft_calloc(sizeof(char), ft_count_n(n) + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[ft_count_n(n) - 1] = '0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
