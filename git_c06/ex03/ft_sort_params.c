/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:42:49 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 14:54:46 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}	
	return (0);
}

void	ft_sort_args(char **str, int size)
{
	int		i;
	int		j;
	char	*temp;

	temp = str[1];
	i = 1;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	if (argc > 1)
	{
		ft_sort_args(argv, argc);
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				write(1, &argv[i][k], 1);
				k++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
