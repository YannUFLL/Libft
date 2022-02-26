/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:31:27 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/26 23:54:17 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (src[length] != '\0')
		length++;
	i = 0;
	while ((src[i] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (length);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	int	a;
	int b;
	char d[] = "";
	char e[] = "bonjour";
	char f[] = "";
	char g[] = "bonjour";

	a = ft_strlcpy(d, e, 10);
	b = strlcpy(f, g, 5);
	printf("%d", a);
	printf("\n%d", b);
}
*/
