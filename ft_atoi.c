/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 10:34:50 by mvan-der      #+#    #+#                 */
/*   Updated: 2022/05/13 10:52:36 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static int	ft_minmax(long int nbr, int sign)
{
	if (nbr < -2147483648 || nbr > 2147483648)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (2);
}

int	ft_atoi(const char *nptr)
{
	size_t		i;
	int			sign;
	long int	number;

	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	if (ft_minmax(number, sign) == 0)
		return (0);
	if (ft_minmax(number, sign) == -1)
		return (-1);
	return (sign * number);
}
