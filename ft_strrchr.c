/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:26:05 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/08 13:58:50 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = 0;
	while (*s)
	{
		if (*s == (char)c)
			t = (char *)s;
		++s;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (t);
}
