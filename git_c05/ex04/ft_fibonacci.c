/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:18:18 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 16:38:47 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 1;
	if (index > 1)
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if (index == 0)
		fib = 0;
	if (index < 0)
		return (-1);
	return (fib);
}
