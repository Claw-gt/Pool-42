/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:44:18 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 17:59:58 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*inicio;
	char	c;
    char    ch;
    char    division;
    char    module;
	int	dec;

    division = '0';
    module = '0';
	dec = 0;
	c = 'a';
	inicio = str;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			if (*str >= 0 && *str <= 15)
			{
				write(1, "0", 2);
			}
			dec = 0;
			while (*str < 32 && *str != dec)
			{
				if (*str > 9 && *str < 16)
				{
					c = 'a';
					ch = 10;
					while ((*str > 9 && *str < 16) && *str != ch)
					{
						c++;
						ch++;
					}
					
				}
				dec++;
			}
			if (*str > 9 && *str < 16)
			{
				write (1, &c, 1);
			}
			else 
			{
				division = dec / 10 + '0';
            			module = dec % 10 + '0';
				write (1, &division, 1);
				write (1, &module, 1);
			}

		}
		else
		{
			write(1, &*str, 1);
		}
		str++;
	}
	
}
