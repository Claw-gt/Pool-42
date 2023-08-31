/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:22:55 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 15:29:54 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}
