/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:25:51 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 13:21:01 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds the element ’new’ at the end of the list.
lst - The address of a pointer to the first link of a list.
new - The address of a pointer to the element to be added to the list.
Return value None
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cnt;

	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
