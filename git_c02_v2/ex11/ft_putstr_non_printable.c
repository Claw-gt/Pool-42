/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:48:24 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/24 10:25:06 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int module)
{
	char	ch;
	int		num;
	char	mod_char;

	num = 10;
	ch = 'a';
	if (module > 9 && module < 16)
	{
		while (num != module)
		{
			ch++;
			num++;
		}
		write(1, &ch, 1);
	}
	else
	{
		mod_char = module + '0';
		write(1, &mod_char, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	div;
	int		mod;
	int		i;
	char	ch;

	ch = 'a';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			/*div = str[i] / 16 + '0';
			write(1, &div, 1);
			mod = str[i] % 16;
			print_hex(mod);*/
			write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
