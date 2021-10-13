/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:27:30 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/13 18:43:05 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
ищет начало подстроки в строке, начиная с str[idx]. пропускает все разделители
и указатель idx устанавливает на начало строки без разделителей.
возвращает длину подстроки, если вернул 0 - подстрока не найдена
(также str[idx] = '\0')
*/
static size_t	ft_fnextsubs(char const *str, char c, size_t *idx)
{
	char	*nextdelim;

	while (str[*idx] && str[*idx] == c)
		++(*idx);
	if (!str[*idx])
		return (0);
	nextdelim = ft_strchr(&str[*idx], c);
	if (nextdelim)
		return (nextdelim - &str[*idx]);
	return (ft_strlen(&str[*idx]));
}

static char	**ft_freearr(char **arr, size_t cnt)
{
	if (cnt > 0)
	{
		while (--cnt > 0)
			free(arr[cnt]);
		free(arr[cnt]);
		free(arr);
	}
	return (NULL);
}

/*
создает массив подстрок по строке с разделителями
s - строка с разделителями, не должна быть NULL
c - разделитель
cnt - кол-во подстрок, вычисляется отдельно, если 0
создается массив из 1 строки NULL
*/
static char	**ft_createarr(char const *s, char c, size_t cnt)
{
	char	**dest;
	size_t	i;
	size_t	idx;
	size_t	subs_len;

	dest = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (dest)
	{
		i = -1;
		idx = 0;
		subs_len = ft_fnextsubs(s, c, &idx);
		while (++i < cnt)
		{
			dest[i] = ft_substr(s, idx, subs_len);
			if (!dest[i])
				return (ft_freearr(dest, i));
			idx += subs_len;
			subs_len = ft_fnextsubs(s, c, &idx);
		}
		dest[i] = NULL;
	}
	return (dest);
}

/*
Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter. The array must be ended 
by a NULL pointer.

s - The string to be split.
c - The delimiter character.
Return value: The array of new strings resulting from the split. NULL if the 
allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	size_t	idx;
	size_t	subs_len;
	size_t	subs_total;

	if (!s)
		return (NULL);
	idx = 0;
	subs_total = 0;
	subs_len = ft_fnextsubs(s, c, &idx);
	while (subs_len)
	{
		idx += subs_len;
		subs_len = ft_fnextsubs(s, c, &idx);
		++subs_total;
	}
	return (ft_createarr(s, c, subs_total));
}
