/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:13:44 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 09:25:53 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	int	i = 0;
	int	j = 0;
	char str1[9] = "3 4sSW^J";
	while (str1[i]  != '\0')
	{
		printf("%c", str1[i]);
		i++;
	}	
	printf("\n");
	str1[0] = *ft_strlowcase(str1);
	while (str1[j] != '\0')
	{
		printf("%c", str1[j]);
		j++;
	}
	return (0);
}
