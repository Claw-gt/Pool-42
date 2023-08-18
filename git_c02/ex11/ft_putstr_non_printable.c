/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:44:18 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/18 13:18:08 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int digit)
{
	char	module;
	char	division;

	division = digit / 10 + '0';
	module = digit % 10 + '0';
	write(1, &division, 1);
	write(1, &module, 1);
}	

void	print_char(char c)
{
	write(1, "0", 1);
	write(1, &c, 1);
}

void	print_all(char *str, char c, int d)
{
	write(1, "\\", 1);
	if (*str > 9 && *str < 16)
	{
		print_char(c);
	}
	else if (*str == 127)
		write(1, "7F", 2);
	else
		print_digits(d);
}

void	non_printable(char *str)
{
	char	c;
	int		dec;
	int		d;

	dec = 0;
	d = 0;
	c = 'a';
	while (*str < 32 && *str != dec)
	{
		if (dec > 9 && dec < 16)
		{
			c++;
		}
		else
		{
			d++;
		}
		dec++;
	}
	print_all(str, c, d);
}

void	ft_putstr_non_printable(char *str)
{
	char	*inicio;

	inicio = str;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			non_printable(str);
		}
		else
		{
			write(1, &*str, 1);
		}
		str++;
	}
	str = inicio;
}
