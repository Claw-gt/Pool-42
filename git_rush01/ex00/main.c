/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salva-fa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:33:41 by salva-fa          #+#    #+#             */
/*   Updated: 2023/08/19 18:21:29 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*restrictions_arguments(int argc, char *arr);
char	*parameters(char *arr);
void	no_comb(char *parameters);

int	main(int argc, char **argv)
{
	char	*arr;
	//char	*numbers;
	int		j;
	char	*param;

	arr = (char *)malloc(31*sizeof(char));
	j = 0;
	while (argv[1][j] != '\0')
	{
		arr[j] = argv[1][j];
		j++;
	}
	if (restrictions_arguments(argc, arr) == 0)
	{
		param = parameters(arr);
		no_comb(param);
	}
	//matrix ();
	free(arr);
	//free(numbers);
	return (0);
}
