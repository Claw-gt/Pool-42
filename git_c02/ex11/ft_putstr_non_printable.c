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
	char	dec;

	dec = 0;
	c = 'a';
	inicio = str;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 2);
			if (*str >= 0 && *str <= 15)
			{
				write(1, "0", 2);
			}
			dec = 0;
			while (((*str < 20 && *str > 15) || (*str >= 0 && *str <  10)) && *str != dec)
			{
				dec++;	
			}
			write(1, &dec, 1);
			c = 'a';
			while ((*str > 9 && *str < 16) && c != *str)
			{
				write(1,&c,1);
				c++;
			}
			write(1, &c, 1);
		}
		else
		{
			write(1, &*str, 1);
		}
		str++;
	}
	
}
