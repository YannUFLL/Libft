/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:31:05 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/25 18:35:22 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (0);
	i = start;
	while (str[i] && len > 0)
	{
		ptr[i] = str[i];
		i++;
		len--;
	}
	ptr[i] = 0;
	return (ptr);
}
