/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:26:05 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/16 20:49:50 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strchr() function locates the first occurrence of c (converted to a char) in
 the string pointed to by s.  The terminating null character is considered to be
 part of the string; therefore if c is `\0', the functions locate the
terminating `\0'. The strrchr() function is identical to strchr(), except it
locates the last occurrence of c.

RETURN VALUES
The functions strchr() and strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == 0)
			return (0);
		else
			++s;
	}
	return ((char *)s);
}
