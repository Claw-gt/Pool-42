/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:49:22 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 16:07:09 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		pow = nb * ft_recursive_power(nb, power - 1);
	if (nb == 0 && power == 0)
		return (1);
	return (pow);
}
