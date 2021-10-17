/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:46:46 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/17 03:11:03 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
определяет размер буфера
*/
static int	ft_itoasz(int n)
{
	unsigned int	uint;
	int				size;

	size = 0;
	if (n <= 0)
	{	
		size = 1;
		uint = -n;
	}
	else
		uint = n;
	while (uint)
	{
		++size;
		uint = uint / 10;
	}
	return (size);
}

/*
Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled.
n - the integer to convert.
Return: The string representing the integer. NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	unsigned int	uint;

	size = ft_itoasz(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		uint = -n;
	else
		uint = n;
	str[size] = '\0';
	while (uint)
	{
		str[--size] = uint % 10 + '0';
		uint = uint / 10;
	}
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
