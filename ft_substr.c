/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:17:01 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/09 20:52:05 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Создает подстроку из строки s c позиции старт, длиной len
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*dst;

	if (!s)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	s_len = ft_strlen(s + start);
	if (s_len < len)
		len = s_len;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst)
		ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
