/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:26:05 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/12 19:43:46 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
The strrchr() function locates the last occurrence of c (converted to a char) in
the string pointed to by s.  The terminating null character is considered to be
part of the string; therefore if c is `\0', the functions locate the
terminating `\0'.

RETURN VALUES
The functions strchr() and strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string.
*/
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
