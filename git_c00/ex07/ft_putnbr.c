/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:56:52 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 10:07:07 by clagarci         ###   ########.fr       */
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
	if ((nb / 10) > 0)
		ft_putnbr(nb / 10);
	module =  nb % 10 + '0';
	write(1, &module, 1);	
}
