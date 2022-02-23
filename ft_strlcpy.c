/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:31:27 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/22 19:01:11 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (i > size)
		return (0);
	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (i);
}
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
