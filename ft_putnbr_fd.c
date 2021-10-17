/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:20:55 by cyetta            #+#    #+#             */
/*   Updated: 2021/10/17 02:27:39 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
Description Outputs the integer ’n’ to the given file descriptor.
n -  The integer to output.
fd - The file descriptor on which to write.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char			rest;
	unsigned int	uint;

	if (n < 0)
	{
		write(fd, "-", 1);
		uint = -n;
	}
	else
		uint = n;
	if (uint / 10)
		ft_putnbr_fd(uint / 10, fd);
	rest = uint % 10 + '0';
	write(fd, &rest, 1);
}
