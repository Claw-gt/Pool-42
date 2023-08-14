/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:07:55 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/14 12:34:38 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num_one;
	int	num_two;
	int *ptr_one;
	int	*ptr_two;

	num_one = 0;
	num_two = 2;
	ptr_one = &num_one;
	ptr_two = &num_two;
	write(1, &(char){'0' + *ptr_one}, 1);
	write(1, &(char){'0' + *ptr_two}, 1);
	write(1, " ", 1);
	ft_swap(ptr_one, ptr_two);
	write(1, &(char){'0' + *ptr_one}, 1);
	write(1, &(char){'0' + *ptr_two}, 1);
	return (0);
}
