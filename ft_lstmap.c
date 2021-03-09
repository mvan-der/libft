/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:17:11 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/03/09 16:04:01 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newelem;

	newelem = ft_lstnew(f(lst->content));
	if (newelem == 0)
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	newlst = newelem;
	lst = lst->next;
	while (lst)
	{
		newelem = ft_lstnew(f(lst->content));
		if (newelem == 0)
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&newlst, newelem);
	}
	return (newlst);
}
