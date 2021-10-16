/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:48:32 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:37:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Applies the function ’f’ to each character of the string ’s’ , and passing its
index as first argument to create a new string (with malloc(3)) resulting from
successive applications of ’f’.
Return: The string created from the successive applications of ’f’. 
Returns NULL if the allocation fails.

s -  The string on which to iterate.
*f - The function to apply to each character.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	idx;

	if (!s)
		return (NULL);
	dst = ft_strdup(s);
	if (dst)
	{
		idx = 0;
		while (dst[idx])
		{
			dst[idx] = (*f)(idx, dst[idx]);
			idx++;
		}
	}
	return (dst);
}
