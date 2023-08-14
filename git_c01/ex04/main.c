/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:24:48 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/14 14:25:35 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	num_one;
	int	num_two;
	int	*ptr_one;
	int	*ptr_two;

	num_one = 35;
	num_two = 8;
	ptr_one = &num_one;
	ptr_two = &num_two;
	ft_ultimate_div_mod(ptr_one, ptr_two);
	//write(1, "Cociente: ", 10);
	//write(1, &(char){'0' + *ptr_one}, 1);
	printf("Cociente: %d ", *ptr_one);
	//write(1, " Resto: ", 8);
	//write(1, &(char){'0' + *ptr_two}, 1);
	printf("Resto: %d", *ptr_two);
}
