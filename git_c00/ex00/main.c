/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:46:06 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/12 10:27:21 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	int	i;

	i = '0';
	while (i < '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
