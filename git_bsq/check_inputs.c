/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:19:02 by issierra          #+#    #+#             */
/*   Updated: 2023/08/29 18:36:48 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	check_matrix(char **mat);
void	check_map(int error);

char	*line(char *mapa, int *i)
{
	char	*str;
	char	*inicio;

	str = (char *)malloc(4 * sizeof(char));
	inicio = str;
	while (mapa[*i] != '\n')
	{
		*str = mapa[*i];
		if (mapa[0] == '0')
			return (0);
		str++;
		*i += 1;
	}
	*str = '\0';
	return (inicio);
}

int	check_columns(char **mat)
{
	int	r;
	int	c;
	int	prev;

	prev = 0;
	r = 0;
	c = 0;
	while (mat[r] != '\0')
	{
		prev = c;
		while (mat[r][c] != '\0')
		{
			c++;
		}
		if (r > 0 && c != prev)
			return (-1);
		r++;
	}
	return (0);
}

char	**ft_two(char *mapa, int *i)
{
	int		j;
	int		k;
	char	**mapa_two;

	k = 0;
	j = 0;
	mapa_two = (char **)malloc(sizeof(char *) * 100);
	while (mapa[*i] != '\0')
	{
		mapa_two[k] = (char *)malloc(sizeof(char) * 100);
		while (mapa[*i] != '\n')
		{
			mapa_two[k][j] = mapa[*i];
			j++;
			*i += 1;
		}
		*i += 1;
		j = 0;
		k++;
	}
	return (mapa_two);
}

int	check_firstline (char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (-1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (i != 4)
		return (-1);
	return (0);
}

int	validation(char *mapa)
{
	int		i;
	int		j;
	char	**mapa_two;
	int		k;
	char	*first_line;

	j = 0;
	i = 0;
	k = 0;
	first_line = line(mapa, &i);
	if (first_line == 0 || check_firstline(first_line) == -1)
		return (-1);
	i++;
	mapa_two = ft_two(mapa, &i);
	if (check_columns(mapa_two) == -1)
		return (-1);
	check_matrix(mapa_two);
	return (0);
}
