/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:03:49 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/09 17:22:23 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	res;

	res = (*(unsigned char *)s1 - *(unsigned char *)s2);
	while (res == 0 && n--)
	{
		res = (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (res);
}
/*
	if (res < 0)
		return (-1);
	else if (res > 0)
		return (1);
	else
		return (0);
*/