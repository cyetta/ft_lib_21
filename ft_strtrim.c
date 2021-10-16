/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:11:21 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:37:54 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.

Return: The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int	begin;
	int	end;

	if (!s1 || !set)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		++begin;
	end = ft_strlen(s1);
	while (end > begin && ft_strchr(set, s1[end - 1]))
		--end;
	return (ft_substr(s1, begin, end - begin));
}
