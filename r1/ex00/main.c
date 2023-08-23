/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salva-fa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:33:41 by salva-fa          #+#    #+#             */
/*   Updated: 2023/08/20 19:14:34 by lfrias-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*restrictions_arguments(int argc, char *arr);
int		*parameters(char *arr);
int		no_comb(int *parameters);
int		**matrix_init(void);
int		**matrix_col_four(int *parameters, int **mat);
int		**matrix_row_four(int *parameters, int **mat);
void	error(int err);

void	print_matrix(char *array)
{
	int	**matrix;
	int	rows;
	int	columns;

	rows = 0;
	columns = 0;
	matrix = matrix_init();
	matrix = matrix_col_four(parameters(array), matrix);
	matrix = matrix_row_four(parameters(array), matrix);
	while (rows < 4)
	{
		while (columns < 4)
		{
			write(1, &(char){matrix[rows][columns] + '0'}, 1);
			if (columns < 3)
				write(1, " ", 1);
			columns++;
		}
		columns = 0;
		write(1, "\n", 1);
		rows++;
	}	
}

int	main(int argc, char **argv)
{
	char	*arr;
	int		j;
	int		i;
	int		h;

	i = 0;
	h = 0;
	arr = (char *) malloc (31 * 1);
	j = 0;
	while (argv[1][j] != '\0')
	{
		arr[j] = argv[1][j];
		j++;
	}
	if (restrictions_arguments(argc, arr) == 0 && no_comb(parameters(arr)) == 0)
	{
		print_matrix(arr);
	}
	else
		error(1);
	free(arr);
	return (0);
}
