/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 00:31:14 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 19:47:33 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new element. The variable ’content’ is
 initialized with the value of the parameter ’content’. The variable ’next’ is
 initialized to NULL.
content - The content to create the new element with.
Return: The new element.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*newel;

	newel = (t_list *)malloc(sizeof(t_list));
	if (!newel)
		return (NULL);
	newel->content = content;
	newel->next = NULL;
	return (newel);
}
