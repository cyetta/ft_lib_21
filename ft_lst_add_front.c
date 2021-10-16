/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:50:42 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 23:25:03 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
Adds the element ’newel’ at the beginning of the list.
lst - The address of a pointer to the first link of a list.
newel - The address of a pointer to the element to be added to the list.
Return: None
*/
void	ft_lstadd_front(t_list **lst, t_list *newel)
{
	if (!lst || !newel)
		return ;
	newel->next = *lst;
	*lst = newel;
}
