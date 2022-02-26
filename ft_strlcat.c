/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:41:12 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/26 19:18:51 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	u;
	size_t	length;

	length = 0;
	i = 0;
	while (dst[i++] != '\0' && i <= dstsize)
		length++;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	u = 0;
	while ((src[i] != '\0') && (i < dstsize))
	{
		dst[i - 1] = src[u];
		i++;
		u++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	i = 0;
	while (src[i++] != '\0')
		length++;
	return (length);
}
/*
#include <string.h>
int	main()
{
	char a[100] = "bonjour";
	char b[100] = "bonjour";
	int	c;
	int d; 
	
	c = strlcat(a, "caca", 10);
	d = ft_strlcat(b, "caca", 10);
	printf("\n%s valeur de int %d", a, c);
	printf("\n%s valeur de int %d", b, d);
}
*/
