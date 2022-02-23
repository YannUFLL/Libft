/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:31:16 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/23 17:35:09 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			size;

	i = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	size = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, size) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
