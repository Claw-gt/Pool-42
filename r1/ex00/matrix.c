/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:53:33 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/20 19:21:27 by lfrias-v         ###   ########.fr       */
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
	matrix = (int **)malloc(4 * 8);
	while (rows < 4)
	{
		matrix[rows] = (int *)malloc(4 * 4);
		while (columns < 4)
		{
			matrix[rows][columns] = 0;
			columns++;
		}
		columns = 0;
		rows++;
	}
	return (matrix);
}

int	**check_four(int fixed, int variable, int id, int **mat)
{
	int	n;

	n = 1;
	while (variable < 4 && n <= 4)
	{
		if (id == 0 && mat[variable][fixed] == 0)
			mat[variable][fixed] = n;
		else if (id == 1 && mat[fixed][variable] == 0)
			mat[fixed][variable] = n;
		n += 1;
		variable++;
	}
	while (variable >= 0 && n <= 4)
	{
		if (id == 0)
			mat[variable][fixed] = n;
		else
			mat[fixed][variable] = n;
			n += 1;
			variable--;
	}
	return (mat);
}

int	**auxiliar_loop(int id, int fixed, int variable, int **mat)
{
	int	i;
	int	limit;

	limit = 0;
	i = 0;
	if (id == 0)
		limit = 4;
	else
		limit = 12;
	if (i < limit)
		mat = check_four(fixed, variable, id, mat);
	else if (i > limit - 1)
		mat = check_four(fixed, variable, id, mat);
	return (mat);
}

int	**matrix_col_four(int *parameters, int **mat)
{
	int	i;
	int	rows;
	int	columns;
	int	a;

	a = 0;
	columns = 0;
	rows = 0;
	i = 0;
	while (i < 8)
	{
		if (parameters[i] == 4)
		{
			mat = auxiliar_loop(0, columns, rows, mat);
		}
		i++;
		columns++;
		if (i == 4)
		{
			columns = 0;
			rows = 3;
		}
	}
	return (mat);
}

int	**matrix_row_four(int *parameters, int **mat)
{
	int	i;
	int	rows;
	int	columns;
	int	a;

	a = 1;
	columns = 0;
	rows = 0;
	i = 8;
	while (i < 16)
	{
		if (parameters[i] == 4)
		{
			mat = auxiliar_loop(1, rows, columns, mat);
		}
		i++;
		rows++;
		if (i == 12)
		{
			rows = 0;
			columns = 3;
		}
	}
	return (mat);
}
