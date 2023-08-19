/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:53:33 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/19 14:24:29 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	error(int err);

void	matrix(char *arr)
{
	int		cols;
	int 	err;
	char	*parameters;
	int		i;
	int		j;
	int		rows;

	parameters = (char *)malloc(16*sizeof(char));
	j = 0;
	i = 0;
	err = 0;
	cols = 0;
	rows = 16;
	while (cols < 15)
	{
		if (arr[cols] == '4' && arr[cols + 8] != '1')
			err = 1;
		parameters[i] = arr[cols];
		i++;
		cols += 2;
	}
	while (rows < 31)
	{
		if (arr[rows] == '4' && arr[rows + 8] != '1')
			err = 1;
		parameters[i] = arr[rows];
		i++;	
		rows += 2;
	}
	error(err);
}
