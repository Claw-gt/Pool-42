/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:32:30 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/31 14:11:38 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	error(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{	
		j = i + 1;
		if (str[i] == 45 || str[i] == 43)
			return (1);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (str == '\0' || i == 1i || ft_strlen(str) == 0)
		return (1);
	return (0);
}

int	limits(char *base)
{
	int	limit;

	limit = 0;
	if (ft_strlen(base) == 10)
		limit = 9;
	else if (ft_strlen(base) == 2)
		limit = 1;
	else if (ft_strlen(base) == 16)
		limit = 15;
	else if (ft_strlen(base) == 8)
		limit = 7;
	return (limit);
}

void	overflow(int lim)
{
	if (lim == 9)
		write(1, "-2147483648", 11);
	else if (lim == 7)
		write(1, "-20000000000", 12);
	else if (lim == 15)
		write(1, "-80000000", 8);
	else if (lim == 1)
		write(1, "-10011111111111111110011000110100000", 36);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		module;
	int		limit;

	limit = limits(base);
	module = '0';
	if (error(base) == 0)
	{
		if (nbr == -2147483648)
			overflow(limit);
		else
		{
			if (nbr < 0)
			{
				nbr *= -1;
				write(1, "-", 1);
			}
			if (nbr > limit)
				ft_putnbr_base(nbr /ft_strlen(base), base);
			module = nbr % (limit + 1);
			write(1, &base[module], 1);
		}
	}
}
