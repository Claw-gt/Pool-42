/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restrictions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:50:40 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/19 18:45:32 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//int	check_col_row(char *arr, char num_1, char num_2);

void	error(int err)
{
	if (err == 1)
		write(1, "Error\n", 6);
}

int	restrictions_arguments(int argc, char *arr)
{
	int		err;
	int		i;
	int		k;
//	int		l;
	int		num_digits;
//	char	*numbers;

	num_digits = 0;
	k = 1;
	i = 0;
//	l = 0;
	err = 0;
	//numbers = (char *)malloc(16*sizeof(char));
	while (arr[i] != '\0')
	{
		if (arr[i] > '0' && arr[i] < '5')
		{
			//write(1, &arr[i], 1);
			/*if (l < 16)
				numbers[l] = arr[i];*/
			num_digits++;
		}
		else
		{
			err = 1;
			break ;
		}
//		l++;
		i += 2;
	}
	while (arr[k] != '\0')
	{
		if (arr[k] != ' ')
		{
			write(1, "\nspace invalid->\n", 14);
			err = 1;
			break ;
		}
		k += 2;
	}
	if (argc != 2 || num_digits != 16 || arr[31] == ' ')
	{
	//	printf("\n%d\n", num_digits);
		write(1, "\nnum_digits invalid->\n", 20);
		err =  1;
	}
	error(err);
	if (err == 1)
		return (1);
	else
		return (0);
}

char	*parameters(char *arr)
{
	int		cols;
	int 	err;
	char	*parameters;
	//char	parameters[16];
	int		i;
	int		j;
	int		rows;
	int		h;
	parameters = (char *)malloc(16*sizeof(char));
	j = 0;
	i = 0;
	h = 0;
	err = 0;
	cols = 0;
	rows = 16;
	while (h < 31)
	{
		parameters[i] = arr[h];
		i++;
		h += 2;
	}
	/*while (parameters[h] != '\0')
	{
		printf("%c", parameters[h]);
		h++;
	}*/
	//evitar más de un 1 y un 4 en las terrazas
	/*while (
	{
		while (i < 4)
		{
			if (parameters[i] == '4')
				count_four++;
			else if (parameters[i] == '1')
				count_one++;
		}
	}*/
	//error(err);
	free (parameters);
	return (parameters);
}
//int	check_col_row(char *arr, char num_1, char num_2);
void	parallel_cols_rows(char *parameters)
{
	int	j;
	j = 0;
	while (j < 12)
	{
		if ((parameters[j] + parameters[j + 4]) < 3 || (parameters[j] + parameters[j + 4]) > 5)
		{
			return (1);
		{
		if (j == 3)
		{
			j = 7;
		{
		j++;
	{
{

void	no_comb(char *parameters)
{
	int	i;
	int	err;
	int	h;

	h = 0;
	err = 0;
	i = 0;
	/*while (i < 4)
	{
		if ((parameters[i] + parameters[i + 4]) < 3 || (parameters[i] + parameters[i + 4]) > 5)
		{
			err = 1;
			break ;
		}
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if ((parameters[i] + parameters[i + 4]) < 3 || (parameters[i] + parameters[i + 4]) > 5)
		{
			err = 1;
			break;
		}
		i++;
	}*/
		err = parallel_cols_rows(parameters);
	/*while (parameters[h] != '\0')
	{
		printf("%c", parameters[h]);
		h++;
	}*/
	error(err);
}
