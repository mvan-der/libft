/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 10:36:44 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/03/09 16:02:18 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
