/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:25:27 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:33:27 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		if (src >= dst)
			((char *)dst)[i] = ((char *)src)[i];
		else
			((char *)dst)[len - i - 1] = ((char *)src)[len - i - 1];
	}
	return (dst);
}
