/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:50:42 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 12:57:13 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
Adds the element ’new’ at the beginning of the list.
lst - The address of a pointer to the first link of a list.
new - The address of a pointer to the element to be added to the list.
Return: None
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
