/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:40:25 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/13 12:39:50 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int num);

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	second = 0;
	while (first <= 99)
	{	
		while (second <= 99)
		{	
			if (first != second)
			{
				print_digits(first);
				write(1, " ", 1);
				print_digits(second);
				if (first != 98)
				{
					write(1, ", ", 2);
				}
			}
			second++;
		}
		second = first + 1;
		first++;
	}
}

void	print_digits(int num)
{
	char	c_one;
	char	c_two;

	c_one = num / 10 + '0';
	c_two = num % 10 + '0';
	write(1, &c_one, 1);
	write(1, &c_two, 1);
}
