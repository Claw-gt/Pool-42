/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:56:45 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/26 18:08:04 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str_number);
int		check_dic(char *buff);
void	show_number(int number, char *dic);
int		ft_strlen(char *str);
char	*search_nb(char *str, char *to_find);
int		is_value(char c);
	
int	main(int argc, char *argv[])
{
	int		file;
	int		number;	
	char	*dic;

	if (argc == 2)
	{
		// Comprobar el numero
		file = 0;
		number = ft_atoi(argv[1]);
		dic = (char*) malloc(1000 * sizeof(char));
		if (number != -1)
		{
			// Alizar el dicionario
			if (check_dic(dic) != -1)
			{
				// Mostrar el numero
				show_number(number, dic);
			}
		}
		free(dic);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	ft_atoi(char *str)
{
	int		number;
	int		counter;

	number = 0;
	counter = 0;
	while (*str && number != -1 && counter < 10)
	{
		if (*str < 48 || *str > 57)
			number = -1;
		else
		{
			number *= 10;
			number += *str - '0';
			counter ++;
			str ++;
		}	
	}
	if (number == -1 || *str != '\0')
		write(1, "Error\n", 6); 
	return (number);
}

int	check_dic(char *dic)
{
	int		file;
	ssize_t file_bytes;
	
	file_bytes = 0;
	file = open("numbers.dict", O_RDONLY);
	file_bytes = read(file, dic, 1000);
	close(file);

	if (file_bytes == 0)
	{
		file = -1;
		write(1,  "Dict Error\n", 11);
	}
	return file;
}

void	show_number(int number, char *dic)
{
	//int numbers[10];
	char	*aux_dic;
	char	str_nb[100];
	int		started;
	int 	i;

	aux_dic = dic;
	started = 0;
	i = 0;
	aux_dic = search_nb(aux_dic, "40");
	while (*aux_dic != '\n')
	{
		if (started)
		{	
			str_nb[i] = *aux_dic;
			i ++;
		}
		else
		{
			if (is_value(*aux_dic))
			{
				aux_dic --;
				started = 1;
			}
		}
		aux_dic ++;
	}
	str_nb[i] = '\0';
	printf("%s", str_nb);
}

char	*search_nb(char *str, char *to_find)
{
	char	*pointer;
	char	*aux_str;
	char	*aux_tf;
	int		occurs;

	pointer = NULL;
	while (*str != '\0' && pointer != str)
	{
		aux_str = str;
		aux_tf = to_find;
		occurs = 1;
		while (*aux_tf != '\0' && occurs == 1)
		{
			if (*aux_tf != *aux_str)
				occurs = 0;
			aux_tf ++;
			aux_str ++;
		}	
		if (occurs == 1)
			pointer = str;
		str ++;
	}
	return (pointer);
}

int	is_value(char c)
{
	int	boolean;

	boolean = 0;
	if ((c < 48 || c > 57) && c != ':' && c != ' ')
		boolean = 1;
	return (boolean);
}
