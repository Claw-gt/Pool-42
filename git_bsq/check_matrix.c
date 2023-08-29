/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:43:51 by issierra          #+#    #+#             */
/*   Updated: 2023/08/29 17:26:30 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	check_matrix(char **mat)
{
	int	i;
	int j;
	int	*res;

	res = (int *)malloc(sizeof(int) * 27);
	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j< 27)
		{
			printf("%c", mat[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
	j = 0;
	while (j< 27)
	{
		if (mat[i][j] == mat[i + 1][j])
			res[j] = 1;
		else
			res[j] = 0;
		printf("%d", res[j]);
		j++;
	}
	printf("\n");
	i++;
}
