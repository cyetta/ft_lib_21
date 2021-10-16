/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:35:59 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 19:02:26 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Takes as a parameter an element and frees the memory of the element’s content 
using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.

lst - The element to free.
del - The address of the function used to delete the content.

External functs. free
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (lst->content)
		(*del)(lst->content);
	free(lst);
}
