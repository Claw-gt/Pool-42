/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:04:40 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 08:46:45 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	int		i = 0;
	char	*dst;
//	char	c;
	int		maxsize;
	char	str1[4] = "hola";
	char	str2[4] = "adios";

	maxsize = strlen("hola mundo") + 1;
	//printf("%lu",sizeof(*dst));
	dst = malloc(sizeof(*dst) * maxsize);
//	c = 'L';
//	dst = &c;
	dst = ft_strcpy(dst,"hola mundo");
	while (*dst != '\0')
	{
		printf("%c", *dst);
		i++;
		dst++;
	}
	
	return (0);
}
