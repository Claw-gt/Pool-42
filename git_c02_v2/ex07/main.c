/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:36:23 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 09:28:00 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	int	i = 0;
	int j = 0;
	char	str[7] = "holaa12";
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n")
	str[0] = *ft_strupcase(str);
	while (str[j] != '\0')
	{
		printf("%c", str[j]);
		j++;
	}
	return (0);
}
