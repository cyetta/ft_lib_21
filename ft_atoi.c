/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:54:25 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/09 17:19:09 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}	

/*
return 
0 if no digit found
1 found fist symbol of digit and sign is positive
-1  found fist symbol of digit and sign is negative
str point to fist digit in the string or \0
*/
static int	ft_skip_to_dig(char **str)
{	
	int	sign;

	sign = 1;
	while (ft_isspace(**str) && **str)
		(*str)++;
	if (**str == '-' || **str == '+' || ft_isdigit(**str))
	{
		if (ft_isdigit(**str))
			return (sign);
		else if (**str == '-')
			sign = -sign;
		(*str)++;
		return (sign);
	}
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long int	res;
	int				sign;
	char			*s;

	s = (char *)str;
	res = 0;
	sign = ft_skip_to_dig(&s);
	if (sign == 0)
		return (res);
	while (ft_isdigit(*s))
	{
		res = res * 10 + (long long int)(*s - '0');
		s++;
	}
	return (sign * (int)res);
}
