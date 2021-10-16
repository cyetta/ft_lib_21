/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:48:32 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:35:02 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
Description Applies the function f to each character of the string passed as 
argument, and passing its index as first argument. Each character is passed by
address to f to be modified if necessary.
s -  The string on which to iterate.
*f - The function to apply to each character.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	idx;

	if (s)
	{
		idx = 0;
		while (*s)
			(*f)(idx++, s++);
	}
}
