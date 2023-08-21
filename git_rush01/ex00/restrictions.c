/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restrictions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:50:40 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/20 12:59:02 by clagarci         ###   ########.fr       */
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
	int		err;
	int		i;
	int		k;
	int		num_digits;

	num_digits = 0;
	k = 1;
	i = 0;
	err = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] > '0' && arr[i] < '5')
		{
			num_digits++;
		}
		else
		{
			err = 1;
			break ;
		}	
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
		//printf("\n%d\n", num_digits);
		write(1, "\nnum_digits invalid->\n", 20);
		err =  1;
	}
	error(err);
	if (err == 1)
		return (1);
	else
		return (0);
}

int	*parameters(char *arr)
{
	int 	err;
	int		*parameters;
	int		i;
	int		j;
	int		h;
	parameters = (int *)malloc(16*4);
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
	/*while (parameters[j] != '\0')
	{
		printf("%c", parameters[j]);
		j++;
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
	//free (parameters);
	return (parameters);
}

int	parallel_cols_rows(int *parameters)
{
	int	j;
	j = 0;
	while (j < 12)
	{
		if ((parameters[j] + parameters[j + 4]) < 3 || (parameters[j] + parameters[j + 4]) > 5)
		{
			//write(1, &parameters[j], 1);
			return (1);
		}
		if (j == 3)
			j = 7;
		j++;
	}
	return (0);
}

void	no_comb(int *parameters)
{
	int	i;
	int	err;
	int	h;

	h = 0;
	err = 0;
	i = 0;
/*	while (i < 8)
	{
		if ((parameters[i] + parameters[i + 4]) < 3 || (parameters[i] + parameters[i + 4]) > 5)
		{
			err = 1;
			break ;
		}
		i++;
	}
	while (i < 16)
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
		printf("%d", parameters[h]);
		h++;
	}*/
	error(err);
}
