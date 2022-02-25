/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:46:19 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/25 13:20:31 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_alloc(char const *s1, char c)
{
	int		i;
	int		size;
	char	**ptr;

	size = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] != c && s1[i] != 0)
		{
			while (s1[i] != c && s1[i] != 0)
				i++;
			size++;
		}
		else if (s1[i] != 0)
		{
			while (s1[i] == c)
				i++;
		}
	}
	ptr = malloc(sizeof(char *) * size);
	return (ptr);
}

char	*ft_malloc(char const *s1, int *i, char c)
{
	int		u;
	int		size;
	char	*ptr;

	size = 0;
	u = *i;
	while (s1[u] != c && s1[u] != 0)
	{
		u++;
		size++;
	}
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, (char *)(&s1[*i]), (size + 1));
	*i = u;
	return (ptr);
}

_Bool	ft_cut(char const *s1, char c, char **ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (s1[i] != c && s1[i] != 0)
		{
			ptr[count] = ft_malloc(s1, &i, c);
			if (ptr[count] == 0)
				return (1);
			count++;
		}
		else if (s1[i] != 0)
		{
			while (s1[i] == c)
				i++;
		}
	}
	return (0);
}

void	ft_clean(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

char	**ft_split(char const *s1, char c)
{
	char	**ptr;
	_Bool	error;

	ptr = ft_alloc(s1, c);
	error = ft_cut(s1, c, ptr);
	if (error == 1)
	{
		ft_clean(ptr);
		return (0);
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	char a[] = "cbonjourcouicilcfaitcbeauc";
	char b = 'c';
	char **ptr; 
	int	i;

	i = 0;
	ptr = ft_split(a, b);
	while (ptr[i])
	{
		printf("\n%s", ptr[i]);
		ptr++;
	}
}
*/
