/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:27:59 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/26 19:26:54 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	if (n > 0)
		n = -n;
	if (n <= -10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
		n = -n;
		ft_putchar_fd((n % 10) + '0', fd);
}
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main()
{
	int	i; 
	i = open( "file.txt",O_RDWR);
	ft_putnbr_fd(541, i);
}

