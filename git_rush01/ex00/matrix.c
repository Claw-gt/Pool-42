/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:53:33 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/20 19:42:43 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	**matrix_init(void)
{
	int		**matrix;
	int		rows;
	int		columns;
	int		i;

	i = 0;
	rows = 0;
	columns = 0;
	matrix = (int **)malloc(4*8);
	while (rows < 4)
	{
		matrix[rows] = (int *)malloc(4*4);
		while (columns < 4)
		{
			matrix[rows][columns] = 0;
			//write(1, &(char){**matrix + '0'}, 1);
			columns++;
		}
		//write(1, "\n", 1);
		columns = 0;
		rows++;
	}
	return (matrix);
}

int	**assign_col(int rows,int columns, int num, int **mat)
{
	while (rows < 4 && num <= 4)
	{
		if (mat[rows][columns] == 0)
			mat[rows][columns] = num;
		num += 1;
		rows++;
	}
	return (mat);
}
int	**matrix_col_four(int *parameters, int** mat)
{
	int	i;
	int num;
	int	rows;
	int	columns;
	int	j;
	int	k;

	j = 0;
	k = 0;
	columns = 0;
	rows = 0;
	i = 0;
	while (i < 8)
	{
		if (parameters[i] == 4)
		{
			num = 1;
			if (i < 4)
			{
				mat = assign_col(rows, columns, num, mat);
				/*while (rows < 4 && num <= 4)
				{
					mat[rows][columns] = num;
					//write(1, &(char){**mat + '0'},1);
					num += 1;
					rows++;
				}*/
			}
			else if (i > 3)
			{
				while (rows >= 0 && num <= 4)
				{
					mat[rows][columns] = num;
					num += 1;
					rows--;
				}
			}
		}
		i++;
		columns++;
		if (i == 4)
		{
			columns = 0;
			rows = 3;
		}
	}
	return(mat);
}

int	**matrix_row_four(int *parameters, int **mat)
{
	int	i;
	int num;
	int	rows;
	int	columns;
	int	j;
	int	k;
	int	l;
//	int **mat_cols;

	l = 0;
	j = 0;
	k = 0;
	columns = 0;
	rows = 0;
	i = 8;
	while (i < 16)
	{
	//	printf("i:%d\ncolumns:%d\n", i, columns);
		if (parameters[i] == 4)
		{
			num = 1;
			if (i < 12)
			{
				while (columns < 4 && num <= 4)
				{
					mat[rows][columns] = num;
					//write(1, &(char){**mat + '0'},1);
					num += 1;
					columns++;
				}
			}
			else if (i > 11)
			{
				while (columns >= 0 && num <= 4)
				{
					mat[rows][columns] = num;
					num += 1;
					columns--;
				}
			}
		}
		i++;
		rows++;
		if (i == 12)
		{
			rows = 0;
			columns = 3;
		}
	}
	return(mat);
}
