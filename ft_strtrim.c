/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:51:39 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/24 11:44:19 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

_Bool	ft_check(char const c, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	size;
	size_t	i;
	size_t	u;

	i = 0;
	size = ft_strlen(s1);
	while (ft_check(s1[i], s2) == 1)
		i++;
	while (ft_check(s1[size - 1], s2) == 1)
		size--;
	ptr = malloc(sizeof(char) * ((size - i) + 1));
	if (ptr == NULL)
		return (0);
	u = 0;
	while (i < size)
	{
		ptr[u] = s1[i];
		i++;
		u++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	char a[] = "       akkkkkk     ";
	char b[] = " ak";
	char *ptr; 

	ptr = ft_strtrim(a, b);
	printf("%s", ptr);
}
*/
