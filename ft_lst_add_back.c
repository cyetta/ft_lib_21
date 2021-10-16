/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:25:51 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:30:32 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds the element ’newel’ at the end of the list.
lst - The address of a pointer to the first link of a list.
newel - The address of a pointer to the element to be added to the list.
Return value None
*/

void	ft_lstadd_back(t_list **lst, t_list *newel)
{
	if (!lst || !newel)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = newel;
	else
		*lst = newel;
}
