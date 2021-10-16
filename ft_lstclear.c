/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:13:05 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 13:21:43 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given element and every successor of that element, using
 the function ’del’ and free(3). Finally, the pointer to the list must be set
 to NULL.
lst  - The adress of a pointer to an element.
*del - The adress of the function used to delete the content of the element.
Return value None
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pcnt;

	if (!lst)
		return ;
	while (*lst)
	{
		pcnt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pcnt;
	}
}
