/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:23:09 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/25 19:50:18 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_nbrsize(int n)
{
	if (n > 0)
		n = -n;
	if (n <= -10)
	{
		return (ft_nbrsize(n / 10) + 1);
	}
	else
		return (1);
}

void	ft_convert(int n, char *ptr)
{
	if (n > 0)
		n = -n;
	ptr--;
	if (n <= -10)
	{
		ft_convert(n / 10, ptr);
	}
		n = -n;
		*ptr = ((n % 10) + '0');
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	size = ft_nbrsize(n);
	if (n < 0)
		size++;
	ptr = malloc(sizeof(char) * (size + 1));
	printf("%d\n", size);
	ft_convert(n, (ptr + size));
	ptr[size + 1] = 0;
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
/*
int	main()
{
	printf("%s", ft_itoa(-41564));

}
*/
