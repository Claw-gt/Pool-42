/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:24:28 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/13 16:43:31 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n)
{
	int		num_one;
	int		num_two;
	char	c_one;
	char	c_two;
	int		digits;
	char	c;

	c = '0';
	c_one = '0';
	c_two = '0';
	num_one = 0;
	num_two = 0;
	digits = 0;
	if (n > 0 && n < 10)
	{
		if (digits < n)
		{
			if (n > 1)
			{
				while (num_one <= 9)
				{
					while (num_two <= 9) 
					{
						if (num_two > num_one)
						{	
							c_one = num_one + '0';
							c_two = num_two + '0';
							write(1, &c_one, 1);
							write(1, &c_two, 1);
						}
						num_two++;
					}
					num_one++;
				}
			}
			ft_print_combn(digits);
			digits++;
		}
	}
}
