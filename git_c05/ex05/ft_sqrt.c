/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:43:47 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/31 10:48:08 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	square;

	square = 0;
	num = 0;
	if (nb % 10 == 2 || nb % 10 == 7 || nb % 10 == 3 || nb % 10 == 8)
		num = 0;
	else
	{
		while (square != nb && square <= nb)
		{
			num++;
			square = num * num;
			if (square == nb)
				return (num);
		}
	}
	return (0);
}
