/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 12:22:10 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/03/09 16:04:08 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = malloc(sizeof(t_list));
	if (newelem == 0)
		return (0);
	newelem->content = content;
	newelem->next = 0;
	return (newelem);
}
