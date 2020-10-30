/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 00:48:57 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/30 17:29:17 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	current = head;
	while (lst != NULL)
	{
		ft_lstadd_back(&current, ft_lstnew(f(lst->content)));
		if (current->content == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
