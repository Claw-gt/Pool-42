/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:56:52 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/13 14:21:35 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	module;
	char	negative;

	negative = '-';
	module = '0';
	if (nb < 0)
	{
		nb *= -1;
		write(1, &negative, 1);
	}
	if (nb > 0)
	{
		module = nb % 10 + '0';
		nb /= 10;
		ft_putnbr(nb);
		write(1, &module, 1);
	}	
}
