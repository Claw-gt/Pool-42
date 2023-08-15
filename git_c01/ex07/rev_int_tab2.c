/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int_tab2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:36:32 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/15 10:12:51 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = 0;
	temp = 0;
	
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
	while (j < size)
	{
		printf("%d",tab[j]);
		j++;
	}
}
