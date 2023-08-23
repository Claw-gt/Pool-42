/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:20:01 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/23 12:16:39 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		num;
	char	c;
	int		n;
	int		count;
	int		i;
	int		dec;

	i = 0;
	count = 0;
	num = 0;
	dec = 10;

	while (str[i] != '\0') 
	{
		if (str[0] == 32 || (str[0] > 8 && str[0] < 14))
		{	
			while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
			{
				i++;
			}
		}	
		if ((str[i] == 45 || str[i] == 43) && num == 0)
		{	
			while (str[i] == 45 || str[i] == 43)
			{
				if (str[i] == 45)
				{
					count++;
				}
				i++;
			}	
		}
		if (str[i] <= 57 && str[i] >= 48)
		{
			n = 0;
			c = '0';
			while (c != str[i])
			{	
				c++;
				n++;
			}
			num = num * dec + n;
			i++;
		}
		else
			break ;
	}
	if (count % 2 == 1)
		num *= -1;
	return (num);
}
