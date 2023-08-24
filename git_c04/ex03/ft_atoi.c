/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:20:01 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/24 18:07:30 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	spaces(char *str, int i)
{
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	return (i);
}

int	minus_plus(char *str, int *i)
{
	int	count;

	count = 0;
	while (str[*i] == 45 || str[*i] == 43)
	{
		if (str[*i] == 45)
			count++;
		*i += 1;
	}
	return (count);
}

int	numbers(char ch, int num)
{
	char	c;
	int		n;
	int		dec;

	dec = 10;
	n = 0;
	c = '0';
	while (c != ch)
	{	
		c++;
		n++;
	}
	num = num * dec + n;
	return (num);
}

int	ft_atoi(char *str)
{
	int		num;
	int		count;
	int		i;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[0] == 32 || (str[0] > 8 && str[0] < 14))
			i = spaces(str, i);
		if ((str[i] == 45 || str[i] == 43) && num == 0)
			count = minus_plus(str, &i);
		if (str[i] <= 57 && str[i] >= 48)
		{
			num = numbers(str[i], num);
			i++;
		}
		else
			break ;
	}
	if (count % 2 == 1)
		num *= -1;
	return (num);
}
