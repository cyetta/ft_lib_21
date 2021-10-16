/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:21:11 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:26:47 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
The strnstr() function locates the first occurrence of the null-terminated 
string needle in the string haystack, where not more than len characters are 
searched.  Characters that appear after a `\0' character are not searched.

RETURN VALUES
If needle is an empty string, haystack is returned; 
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle 
is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (NULL);
}
