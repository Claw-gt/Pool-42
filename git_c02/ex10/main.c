/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:49:17 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 16:40:56 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int	len;
	unsigned int i;
	unsigned int size;
	size = 7;
	i = 0;
	//char str1[5] = "hola\0";
	//char str2[2] = "re";
	char	*dst;

	dst = malloc(sizeof(*dst) * size);
	len = ft_strlcpy(dst, "hol2323v", size);
	printf("%d\n", len);
	while (i < size)
	{
		if (*dst == '\0')
		{
			printf("\\0");
		}
		else
		{	
			printf("%c", *dst);
		}
		dst++;
		i++;
	}
	return (0);
}
