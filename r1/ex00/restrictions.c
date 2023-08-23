/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restrictions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:50:40 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/20 18:39:11 by lfrias-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	error(int err)
{
	if (err == 1)
		write(1, "Error\n", 6);
}

int	restrictions_arguments(int argc, char *arr)
{
	int		i;
	int		k;
	int		num_digits;

	num_digits = 0;
	k = 1;
	i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] > '0' && arr[i] < '5')
			num_digits++;
		else
			return (1);
		i += 2;
	}
	while (arr[k] != '\0')
	{
		if (arr[k] != ' ')
			return (1);
		k += 2;
	}
	if (argc != 2 || num_digits != 16 || arr[31] == ' ')
		return (1);
	return (0);
}

int	*parameters(char *arr)
{
	int	err;
	int	*parameters;
	int	i;
	int	j;
	int	h;

	parameters = (int *)malloc(16 * 4);
	j = 0;
	i = 0;
	h = 0;
	err = 0;
	while (h < 31)
	{
		parameters[i] = arr[h] - '0';
		i++;
		h += 2;
	}
	return (parameters);
}

int	parallel_cols_rows(int *parameters)
{
	int	j;

	j = 0;
	while (j < 12)
	{
		if ((parameters[j] + parameters[j + 4]) < 3
			|| (parameters[j] + parameters[j + 4]) > 5)
		{
			return (1);
		}
		if (j == 3)
			j = 7;
		j++;
	}
	return (0);
}

int	no_comb(int *parameters)
{
	int	i;
	int	err;
	int	h;

	h = 0;
	err = 0;
	i = 0;
	err = parallel_cols_rows(parameters);
	return (err);
}
