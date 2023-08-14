/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:49:15 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/14 17:48:20 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	**test;
	//int	j;
	int	k;
	//int	*test;

	//test = &size;
	test = &tab;
	tab = tab - 1 + size;
	i = 0;
	k = 0;
	temp = 0;
	/*while (i < ((size - 1) / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}*/
	while (*tab && size>0)
	{
		printf("%d", *tab);
		**test = *tab;
		size--;
		tab--;
	}
	while (**test)
	{
		*tab = **test;
		test++;
	}
	write(1,"\nPrueba: ",9);
	while (*tab)
	{
		printf("%d", *tab);
		tab++;
	}
	/*while (j >= (*tab - 1))
	{
		//test[*tab + size - j] = tab[size - 1 - i];
		//printf("%d", tab[j]);
		write(1, &(char){'0' + tab[j]}, 1);
		j--;
	}*/	
	/*while (tab[k] != '\0')
	{
		write(1, &(char){'0'+ *tab}, 1);
		//printf("%d", test[k]);
		k++;
	}*/	
}
