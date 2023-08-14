/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:48:14 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/14 12:55:40 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	num_one;
	int	num_two;
	int	c;
	int	d;
	int	*ptr_one;
	int	*ptr_two;

	num_one = 10;
	num_two = 3;
	c = 0;
	d = 10;
	ptr_one = &c;
	ptr_two = &d;
	ft_div_mod(num_one, num_two, ptr_one, ptr_two);
	write(1, "Cociente: ", 10);
	write(1, &(char){'0' + *ptr_one}, 1);
	write(1, " Resto: ", 8);
	write(1, &(char){'0' + *ptr_two}, 1);
	return (0);
}
