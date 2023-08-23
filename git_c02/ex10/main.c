/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:49:17 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/23 11:40:33 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int	len;
	unsigned int i;
	unsigned int size;
	size = 7;
	i = 0;
	char str1[] = "hola\0";
	char str2[] = "re";
//	char	*dst;

	//dst = malloc(sizeof(*dst) * size);
	len = ft_strlcpy(str1, str2, 0);
	printf("%d\n", len);
	printf("%s", str1);
	/*while (i < size)
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
	}*/
	return (0);
}
