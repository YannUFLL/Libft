/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:22:40 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/22 10:32:41 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*ptr2;
	size_t	i;

	ptr2 = ptr;
	i = 0;
	while (i < count)
		ptr2[i++] = value;
	return (ptr2);
}
