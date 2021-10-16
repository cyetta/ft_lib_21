/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:11:06 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/17 00:20:30 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	if (!n)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && n--)
	{
		res = (*(unsigned char *)s1 - *(unsigned char *)s2);
		if (res)
			return (res);
		if (!n)
			return (0);
		s1++;
		s2++;
	}
	res = (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (res);
}
