/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:25:59 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/17 03:08:07 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*lst   - The adress of a pointer to an element.
*(*f)  - The adress of the function used to iterate on the list.
(*del) - The adress of the function used to delete the content of an element
 if needed.
Return: The new list. NULL if the allocation fails.
External functs. malloc, free
Iterates the list ’lst’ and applies the function ’f’ to the content of each
 element. Creates a new list resulting of the successive applications of the
 function ’f’. The ’del’ function is used to delete the content of an element 
 if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelement;

	newlist = NULL;
	while (lst)
	{
		newelement = ft_lstnew((*f)(lst->content));
		if (!newelement->content)
		{
			ft_lstdelone(newelement, del);
			ft_lstclear(&newlist, del);
			return (newlist);
		}
		ft_lstadd_back(&newlist, newelement);
		lst = lst->next;
	}
	return (newlist);
}
