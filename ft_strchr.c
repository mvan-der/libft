/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 19:09:14 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/19 14:08:48 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	int		i;

	a = (char *)s;
	i = 0;
	if (c == '\0')
	{
		while (a[i] != '\0')
			i++;
		return (&a[i]);
	}
	else
	{
		while (a[i] != '\0')
		{
			if (a[i] == c)
				return (&a[i]);
			i++;
		}
	}
	return (0);
}
