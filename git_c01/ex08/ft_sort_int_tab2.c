/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:32:06 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/15 12:45:05 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	*ptr;
	int	temp;
	int	k;
	int	i;
	int	j;

	j = 0;
	i = 0;
	k = 0;
	temp = 0;
	ptr = tab + 1;
	while (k < size)
	{
		i = k + 1;
		while (i < size)
		{
			if (*(tab + k) > *(tab + i))
			{
				temp = *(tab + k);
				*(tab + k) = *(tab + i);
				*(tab + i) = temp;
			}
			i++;
		}
		k++;
	}
	while (j < size)
	{
		printf("%d",*(tab+j));
		j++;
	}	
}
