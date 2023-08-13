/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:39:28 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/13 12:07:27 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char c_one, char c_two, char c_three);

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= '9')
	{	
		while (second <= '9')
		{
			while (third <= '9')
			{
				if (second > first && third > second)
				{
					print_numbers(first, second, third);
				}
				third++;
			}
			third = 0;
			second++;
		}
		second = 0;
		first++;
	}	
}

void	print_numbers(char c_one, char c_two, char c_three)
{
	write(1, &c_one, 1);
	write(1, &c_two, 1);
	write(1, &c_three, 1);
	if (c_one != '7')
	{
		write(1, ", ", 2);
	}
}
