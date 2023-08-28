/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:27 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 15:46:33 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	if (nb == 0 && power == 0)
		return (1);
	return (pow);
}
