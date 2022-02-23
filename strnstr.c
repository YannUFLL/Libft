/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:11:26 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/23 15:19:05 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int unsigned	i;
	int unsigned	u;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		u = 0;
		if (str[i] == to_find[u])
		{
			while (str[i + u] == to_find[u])
			{
				if (to_find[u + 1] == 0)
				{
					return (&str[i]);
				}
				u++;
			}
		}
	i++;
	}
	return (NULL);
}

