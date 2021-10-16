/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:37:13 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 22:34:15 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Создает дубликат строки s1 и возвращает указатель на нее
*/
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(s1);
	dst = (char *)ft_calloc(len + 1, sizeof(char));
	if (dst)
	{
		ft_memcpy(dst, s1, len);
		dst[len] = '\0';
	}
	return (dst);
}
