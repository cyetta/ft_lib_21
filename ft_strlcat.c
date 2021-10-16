/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:37:32 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 23:20:54 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
добавляет строку src в конец dst. Будет добавлено dstsize - strlen(dst) - 1 
символов из src. Строка dst NUL-terminate, кроме случаев когда dstsize = 0 или 
длина dst строки больше dstsize.
(in practice this should not happen as it means that either dstsize is incorrect
or that dst is not a proper string).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_sz;
	size_t	dst_sz;
	size_t	i;

	dst_sz = ft_strlen(dst);
	src_sz = ft_strlen(src);
	if (dst_sz > dstsize)
		return (src_sz + dstsize);
	i = 0;
	while ((i + dst_sz + 1) < dstsize && src[i])
	{
		dst[i + dst_sz] = src[i];
		i++;
	}
	dst[i + dst_sz] = 0;
	return (src_sz + dst_sz);
}
