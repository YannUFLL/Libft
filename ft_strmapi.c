/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:27:12 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/25 23:49:01 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
{
	int		i;
	char	*ptr;

	if (s == NULL || f = NULL)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(char) * strlen(s));
	while (s[i])
	{
		ptr = (*f)(i, result[i]);
		i++;
	}
	return (ptr);
}
