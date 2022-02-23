/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:06:01 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/23 13:20:46 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	while ((ps1[i] || ps2[i]) && i < n)
	{
		if (ps1[i] > ps2[i] || ps1[i] < ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	printf("%d", ft_memcmp("ko", "ok", 2));
	printf("\n%d", memcmp("ko", "ok", 2));
}
*/
