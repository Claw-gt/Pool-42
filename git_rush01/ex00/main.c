/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salva-fa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:33:41 by salva-fa          #+#    #+#             */
/*   Updated: 2023/08/20 15:42:23 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*restrictions_arguments(int argc, char *arr);
int		*parameters(char *arr);
void	no_comb(int *parameters);
int		**matrix_init(void);
int		**matrix_col_four(int *parameters, int **mat);
int		**matrix_row_four(int *parameters, int **mat);

int	main(int argc, char **argv)
{
	char	*arr;
	//char	*numbers;
	int		j;
	int		*param;
	int		**mat;
	int		i;
	int		h;
//	int		**mat_rellena;

	i = 0;
	h = 0;
	mat = matrix_init();
	/*while (i < 4)
	{
		while (h < 4)
		{
			write(1, &(char){**mat + '0'}, 1);
			h++;
		}
		write(1, "\n",1);
		h = 0;
		i++;
	}*/
	arr = (char *)malloc(31*1);
	j = 0;
	while (argv[1][j] != '\0')
	{
		arr[j] = argv[1][j];
		j++;
	}
	if (restrictions_arguments(argc, arr) == 0)
	{
		//param = parameters(arr);
	//	no_comb(param);
	}
	param = parameters(arr);
	no_comb(param);
	mat = matrix_col_four(param, mat);
	mat = matrix_row_four(param, mat);
	while (i < 4)
	{
		while (h < 4)
		{
		//	printf("[%d,%d]",i, h);
			write(1, &(char){mat[i][h] + '0'}, 1);	
			h++;
		}
		h = 0;
		write(1, "\n", 1);
		i++;
	}
	//matrix ();
	free(arr);
//	printf("%lu", sizeof(int*));
	//free(numbers);
	//free(mat);
	return (0);
}
