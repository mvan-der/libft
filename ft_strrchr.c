/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:02:10 by mvan-der      #+#    #+#                 */
/*   Updated: 2020/11/26 11:56:25 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	a = (char *)s;
	i = 0;
	while (a[i] != '\0')
		i++;
	if (c == '\0')
		return (&a[i]);
	else
		while (i >= 0)
		{
			if (a[i] == c)
				return (&a[i]);
			i--;
		}
	return (0);
}
