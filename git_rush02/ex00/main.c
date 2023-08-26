/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:29:44 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/26 14:11:08 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc < 2)
		write(1, "Error", 5);
	else if (argc == 2 || argc == 3)
	{
		//hacer atoi del primer argument (long int)
		//string vacía
		//mandarselo a la funcion restrictions
		//num = atoi(argv[1][j]
		//restrictions(argc, num);
		/*while (argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j++;
		}*/
	}
	return (0);
}
