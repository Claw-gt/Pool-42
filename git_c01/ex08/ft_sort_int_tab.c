/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:16:07 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/15 12:30:09 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	k;

	k = 0;
	i = 0;
	temp = 0;
	while (k < size)
	{
		i = k + 1;
		while (i < size)
		{
			if (tab[k] > tab[i])
			{
				temp = tab[k];
				tab[k] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		k++;
	}
}
