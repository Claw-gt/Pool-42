/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:01:25 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/23 16:52:36 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	char	*inicio;

	inicio = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = inicio;
	return (inicio);
}
void	int_min(void)
{
	char	*num;
	int		i;
	char	c;

	c = 'l';
	num = &c;
	i = 0;
	num = ft_strcpy(num,"-2147483648");
	while (i < 11)
	{
		write(1, &num[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	module;

	module = '0';
	if (nb == -2147483648)
	{
		int_min();
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		module = nb % 10 + '0';
		write(1, &module, 1);
	}
}
