/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:56:24 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/14 14:11:05 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	num;
	int	*ptr;

	num = 3;
	ptr = &num;
	ft_ft(ptr);
	write(1, &(char){*ptr}, 1);
	write(1, &num, 1);
	return (0);
}	
